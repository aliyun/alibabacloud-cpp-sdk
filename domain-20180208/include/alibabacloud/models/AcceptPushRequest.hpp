// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class AcceptPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
    };
    AcceptPushRequest() = default ;
    AcceptPushRequest(const AcceptPushRequest &) = default ;
    AcceptPushRequest(AcceptPushRequest &&) = default ;
    AcceptPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptPushRequest() = default ;
    AcceptPushRequest& operator=(const AcceptPushRequest &) = default ;
    AcceptPushRequest& operator=(AcceptPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && this->pushNo_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline AcceptPushRequest& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // pushNo Field Functions 
    bool hasPushNo() const { return this->pushNo_ != nullptr;};
    void deletePushNo() { this->pushNo_ = nullptr;};
    inline string getPushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
    inline AcceptPushRequest& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


  protected:
    // 实名认证通过的模板，域名过户时用于WHOIS信息变更
    // 
    // This parameter is required.
    shared_ptr<int64_t> contactTemplateId_ {};
    // Push编号
    // 
    // This parameter is required.
    shared_ptr<string> pushNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
