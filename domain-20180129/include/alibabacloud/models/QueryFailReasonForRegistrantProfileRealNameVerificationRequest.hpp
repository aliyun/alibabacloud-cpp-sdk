// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILREASONFORREGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILREASONFORREGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryFailReasonForRegistrantProfileRealNameVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailReasonForRegistrantProfileRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileID, registrantProfileID_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailReasonForRegistrantProfileRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileID, registrantProfileID_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest() = default ;
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &) = default ;
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest(QueryFailReasonForRegistrantProfileRealNameVerificationRequest &&) = default ;
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailReasonForRegistrantProfileRealNameVerificationRequest() = default ;
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest& operator=(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &) = default ;
    QueryFailReasonForRegistrantProfileRealNameVerificationRequest& operator=(QueryFailReasonForRegistrantProfileRealNameVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->registrantProfileID_ == nullptr && return this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryFailReasonForRegistrantProfileRealNameVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileID Field Functions 
    bool hasRegistrantProfileID() const { return this->registrantProfileID_ != nullptr;};
    void deleteRegistrantProfileID() { this->registrantProfileID_ = nullptr;};
    inline int64_t registrantProfileID() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileID_, 0L) };
    inline QueryFailReasonForRegistrantProfileRealNameVerificationRequest& setRegistrantProfileID(int64_t registrantProfileID) { DARABONBA_PTR_SET_VALUE(registrantProfileID_, registrantProfileID) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryFailReasonForRegistrantProfileRealNameVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> registrantProfileID_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
