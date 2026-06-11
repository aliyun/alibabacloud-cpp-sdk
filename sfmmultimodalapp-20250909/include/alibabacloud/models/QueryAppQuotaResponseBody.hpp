// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class QueryAppQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveLicenseCount, activeLicenseCount_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(LicenseCount, licenseCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsagePercent, usagePercent_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveLicenseCount, activeLicenseCount_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(LicenseCount, licenseCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsagePercent, usagePercent_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryAppQuotaResponseBody() = default ;
    QueryAppQuotaResponseBody(const QueryAppQuotaResponseBody &) = default ;
    QueryAppQuotaResponseBody(QueryAppQuotaResponseBody &&) = default ;
    QueryAppQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppQuotaResponseBody() = default ;
    QueryAppQuotaResponseBody& operator=(const QueryAppQuotaResponseBody &) = default ;
    QueryAppQuotaResponseBody& operator=(QueryAppQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeLicenseCount_ == nullptr
        && this->appId_ == nullptr && this->licenseCount_ == nullptr && this->requestId_ == nullptr && this->usagePercent_ == nullptr && this->workspaceId_ == nullptr; };
    // activeLicenseCount Field Functions 
    bool hasActiveLicenseCount() const { return this->activeLicenseCount_ != nullptr;};
    void deleteActiveLicenseCount() { this->activeLicenseCount_ = nullptr;};
    inline int32_t getActiveLicenseCount() const { DARABONBA_PTR_GET_DEFAULT(activeLicenseCount_, 0) };
    inline QueryAppQuotaResponseBody& setActiveLicenseCount(int32_t activeLicenseCount) { DARABONBA_PTR_SET_VALUE(activeLicenseCount_, activeLicenseCount) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryAppQuotaResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // licenseCount Field Functions 
    bool hasLicenseCount() const { return this->licenseCount_ != nullptr;};
    void deleteLicenseCount() { this->licenseCount_ = nullptr;};
    inline int32_t getLicenseCount() const { DARABONBA_PTR_GET_DEFAULT(licenseCount_, 0) };
    inline QueryAppQuotaResponseBody& setLicenseCount(int32_t licenseCount) { DARABONBA_PTR_SET_VALUE(licenseCount_, licenseCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAppQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usagePercent Field Functions 
    bool hasUsagePercent() const { return this->usagePercent_ != nullptr;};
    void deleteUsagePercent() { this->usagePercent_ = nullptr;};
    inline double getUsagePercent() const { DARABONBA_PTR_GET_DEFAULT(usagePercent_, 0.0) };
    inline QueryAppQuotaResponseBody& setUsagePercent(double usagePercent) { DARABONBA_PTR_SET_VALUE(usagePercent_, usagePercent) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryAppQuotaResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> activeLicenseCount_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> licenseCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<double> usagePercent_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
