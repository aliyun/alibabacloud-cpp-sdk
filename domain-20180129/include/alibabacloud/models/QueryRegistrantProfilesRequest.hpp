// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    QueryRegistrantProfilesRequest() = default ;
    QueryRegistrantProfilesRequest(const QueryRegistrantProfilesRequest &) = default ;
    QueryRegistrantProfilesRequest(QueryRegistrantProfilesRequest &&) = default ;
    QueryRegistrantProfilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfilesRequest() = default ;
    QueryRegistrantProfilesRequest& operator=(const QueryRegistrantProfilesRequest &) = default ;
    QueryRegistrantProfilesRequest& operator=(QueryRegistrantProfilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRegistrantProfile_ == nullptr
        && this->email_ == nullptr && this->lang_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->realNameStatus_ == nullptr
        && this->registrantOrganization_ == nullptr && this->registrantProfileId_ == nullptr && this->registrantProfileType_ == nullptr && this->registrantType_ == nullptr && this->remark_ == nullptr
        && this->userClientIp_ == nullptr && this->zhRegistrantOrganization_ == nullptr; };
    // defaultRegistrantProfile Field Functions 
    bool hasDefaultRegistrantProfile() const { return this->defaultRegistrantProfile_ != nullptr;};
    void deleteDefaultRegistrantProfile() { this->defaultRegistrantProfile_ = nullptr;};
    inline bool getDefaultRegistrantProfile() const { DARABONBA_PTR_GET_DEFAULT(defaultRegistrantProfile_, false) };
    inline QueryRegistrantProfilesRequest& setDefaultRegistrantProfile(bool defaultRegistrantProfile) { DARABONBA_PTR_SET_VALUE(defaultRegistrantProfile_, defaultRegistrantProfile) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryRegistrantProfilesRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryRegistrantProfilesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRegistrantProfilesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRegistrantProfilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realNameStatus Field Functions 
    bool hasRealNameStatus() const { return this->realNameStatus_ != nullptr;};
    void deleteRealNameStatus() { this->realNameStatus_ = nullptr;};
    inline string getRealNameStatus() const { DARABONBA_PTR_GET_DEFAULT(realNameStatus_, "") };
    inline QueryRegistrantProfilesRequest& setRealNameStatus(string realNameStatus) { DARABONBA_PTR_SET_VALUE(realNameStatus_, realNameStatus) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline QueryRegistrantProfilesRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline QueryRegistrantProfilesRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantProfileType Field Functions 
    bool hasRegistrantProfileType() const { return this->registrantProfileType_ != nullptr;};
    void deleteRegistrantProfileType() { this->registrantProfileType_ = nullptr;};
    inline string getRegistrantProfileType() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileType_, "") };
    inline QueryRegistrantProfilesRequest& setRegistrantProfileType(string registrantProfileType) { DARABONBA_PTR_SET_VALUE(registrantProfileType_, registrantProfileType) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline QueryRegistrantProfilesRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryRegistrantProfilesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryRegistrantProfilesRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline QueryRegistrantProfilesRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    // Specifies whether to query the default profile. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    shared_ptr<bool> defaultRegistrantProfile_ {};
    // The email address of the domain name registrant.
    shared_ptr<string> email_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The number of the page to return. Default value: **0**.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: **0**. Maximum value: **5000**.
    shared_ptr<int32_t> pageSize_ {};
    // The state of real-name verification for the domain name registrant. Valid values:
    // 
    // *   **FAILED**: Real-name verification for the domain name fails.
    // *   **SUCCEED**: Real-name verification for the domain name is successful.
    // *   **NONAUDIT**: Real-name verification for the domain name is not performed.
    // *   **AUDITING**: Real-name verification for the domain name is in progress.
    shared_ptr<string> realNameStatus_ {};
    // The name of the domain name registrant.
    shared_ptr<string> registrantOrganization_ {};
    // The ID of the registrant profile that you want to query. The system generates an ID after you create a registrant profile.
    shared_ptr<int64_t> registrantProfileId_ {};
    // The type of the registrant profile. Valid values:
    // 
    // *   **common**: common profile.
    // *   **cnnic**: China Internet Network Information Center (CNNIC) profile.
    // 
    // >  Only the Alibaba Cloud international site (alibabacloud.com) supports CNNIC profiles. To register domain names provided by CNNIC such as the .cn and . domain names on the Alibaba Cloud international site, you must use a CNNIC profile. To register other domain names, use a common profile.
    shared_ptr<string> registrantProfileType_ {};
    // The type of the domain name registrant. Valid values:
    // 
    // *   **1**: individual.
    // *   **2**: enterprise.
    // 
    // Default value: **1**.
    shared_ptr<string> registrantType_ {};
    // The remarks.
    shared_ptr<string> remark_ {};
    // The IP address of the client. Set the value to 127.0.0.1.
    shared_ptr<string> userClientIp_ {};
    // The Chinese name of the domain name registrant.
    shared_ptr<string> zhRegistrantOrganization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
