// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILEREALNAMEVERIFICATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILEREALNAMEVERIFICATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfileRealNameVerificationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfileRealNameVerificationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FetchImage, fetchImage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfileRealNameVerificationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FetchImage, fetchImage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryRegistrantProfileRealNameVerificationInfoRequest() = default ;
    QueryRegistrantProfileRealNameVerificationInfoRequest(const QueryRegistrantProfileRealNameVerificationInfoRequest &) = default ;
    QueryRegistrantProfileRealNameVerificationInfoRequest(QueryRegistrantProfileRealNameVerificationInfoRequest &&) = default ;
    QueryRegistrantProfileRealNameVerificationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfileRealNameVerificationInfoRequest() = default ;
    QueryRegistrantProfileRealNameVerificationInfoRequest& operator=(const QueryRegistrantProfileRealNameVerificationInfoRequest &) = default ;
    QueryRegistrantProfileRealNameVerificationInfoRequest& operator=(QueryRegistrantProfileRealNameVerificationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fetchImage_ == nullptr
        && this->lang_ == nullptr && this->registrantProfileId_ == nullptr && this->userClientIp_ == nullptr; };
    // fetchImage Field Functions 
    bool hasFetchImage() const { return this->fetchImage_ != nullptr;};
    void deleteFetchImage() { this->fetchImage_ = nullptr;};
    inline bool getFetchImage() const { DARABONBA_PTR_GET_DEFAULT(fetchImage_, false) };
    inline QueryRegistrantProfileRealNameVerificationInfoRequest& setFetchImage(bool fetchImage) { DARABONBA_PTR_SET_VALUE(fetchImage_, fetchImage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline QueryRegistrantProfileRealNameVerificationInfoRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<bool> fetchImage_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
