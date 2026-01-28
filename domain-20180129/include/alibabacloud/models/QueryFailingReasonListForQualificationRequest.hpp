// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILINGREASONLISTFORQUALIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILINGREASONLISTFORQUALIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryFailingReasonListForQualificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailingReasonListForQualificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(QualificationType, qualificationType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailingReasonListForQualificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(QualificationType, qualificationType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryFailingReasonListForQualificationRequest() = default ;
    QueryFailingReasonListForQualificationRequest(const QueryFailingReasonListForQualificationRequest &) = default ;
    QueryFailingReasonListForQualificationRequest(QueryFailingReasonListForQualificationRequest &&) = default ;
    QueryFailingReasonListForQualificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailingReasonListForQualificationRequest() = default ;
    QueryFailingReasonListForQualificationRequest& operator=(const QueryFailingReasonListForQualificationRequest &) = default ;
    QueryFailingReasonListForQualificationRequest& operator=(QueryFailingReasonListForQualificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->limit_ == nullptr && this->qualificationType_ == nullptr && this->userClientIp_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryFailingReasonListForQualificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryFailingReasonListForQualificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline QueryFailingReasonListForQualificationRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // qualificationType Field Functions 
    bool hasQualificationType() const { return this->qualificationType_ != nullptr;};
    void deleteQualificationType() { this->qualificationType_ = nullptr;};
    inline string getQualificationType() const { DARABONBA_PTR_GET_DEFAULT(qualificationType_, "") };
    inline QueryFailingReasonListForQualificationRequest& setQualificationType(string qualificationType) { DARABONBA_PTR_SET_VALUE(qualificationType_, qualificationType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryFailingReasonListForQualificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int32_t> limit_ {};
    // This parameter is required.
    shared_ptr<string> qualificationType_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
