// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWARNINGTHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETWARNINGTHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class SetWarningThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWarningThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(WarningValue, warningValue_);
    };
    friend void from_json(const Darabonba::Json& j, SetWarningThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(WarningValue, warningValue_);
    };
    SetWarningThresholdRequest() = default ;
    SetWarningThresholdRequest(const SetWarningThresholdRequest &) = default ;
    SetWarningThresholdRequest(SetWarningThresholdRequest &&) = default ;
    SetWarningThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWarningThresholdRequest() = default ;
    SetWarningThresholdRequest& operator=(const SetWarningThresholdRequest &) = default ;
    SetWarningThresholdRequest& operator=(SetWarningThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uid_ == nullptr
        && return this->warningValue_ == nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline SetWarningThresholdRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // warningValue Field Functions 
    bool hasWarningValue() const { return this->warningValue_ != nullptr;};
    void deleteWarningValue() { this->warningValue_ = nullptr;};
    inline string warningValue() const { DARABONBA_PTR_GET_DEFAULT(warningValue_, "") };
    inline SetWarningThresholdRequest& setWarningValue(string warningValue) { DARABONBA_PTR_SET_VALUE(warningValue_, warningValue) };


  protected:
    // The UID of the partner‘s customer.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> uid_ = nullptr;
    // Percentage, 1 to 100. When the available credit limit is lower than the credit limit percentage, an email is sent to the main account.
    // 
    // This parameter is required.
    std::shared_ptr<string> warningValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
