// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCREDITLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCREDITLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class SetCreditLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCreditLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreditLine, creditLine_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, SetCreditLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditLine, creditLine_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    SetCreditLineRequest() = default ;
    SetCreditLineRequest(const SetCreditLineRequest &) = default ;
    SetCreditLineRequest(SetCreditLineRequest &&) = default ;
    SetCreditLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCreditLineRequest() = default ;
    SetCreditLineRequest& operator=(const SetCreditLineRequest &) = default ;
    SetCreditLineRequest& operator=(SetCreditLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditLine_ == nullptr
        && this->uid_ == nullptr; };
    // creditLine Field Functions 
    bool hasCreditLine() const { return this->creditLine_ != nullptr;};
    void deleteCreditLine() { this->creditLine_ = nullptr;};
    inline string getCreditLine() const { DARABONBA_PTR_GET_DEFAULT(creditLine_, "") };
    inline SetCreditLineRequest& setCreditLine(string creditLine) { DARABONBA_PTR_SET_VALUE(creditLine_, creditLine) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline SetCreditLineRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // New Credit Line
    // 
    // This parameter is required.
    shared_ptr<string> creditLine_ {};
    // The UID of Sub Account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
