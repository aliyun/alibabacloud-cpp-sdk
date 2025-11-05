// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITENDUSERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITENDUSERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class EditEndUserStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditEndUserStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreditStatus, creditStatus_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EditEndUserStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditStatus, creditStatus_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EditEndUserStatusRequest() = default ;
    EditEndUserStatusRequest(const EditEndUserStatusRequest &) = default ;
    EditEndUserStatusRequest(EditEndUserStatusRequest &&) = default ;
    EditEndUserStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditEndUserStatusRequest() = default ;
    EditEndUserStatusRequest& operator=(const EditEndUserStatusRequest &) = default ;
    EditEndUserStatusRequest& operator=(EditEndUserStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditStatus_ == nullptr
        && return this->uid_ == nullptr; };
    // creditStatus Field Functions 
    bool hasCreditStatus() const { return this->creditStatus_ != nullptr;};
    void deleteCreditStatus() { this->creditStatus_ = nullptr;};
    inline string creditStatus() const { DARABONBA_PTR_GET_DEFAULT(creditStatus_, "") };
    inline EditEndUserStatusRequest& setCreditStatus(string creditStatus) { DARABONBA_PTR_SET_VALUE(creditStatus_, creditStatus) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline EditEndUserStatusRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Shutdown Status</br>
    // 
    // - postPayFreeze, the account have been blocked</br>
    // 
    // - postPayThaw, the account have been unlocked</br>
    std::shared_ptr<string> creditStatus_ = nullptr;
    // UID
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
