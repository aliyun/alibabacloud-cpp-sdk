// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceObservabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(entryPointInfo, entryPointInfo_);
      DARABONBA_PTR_TO_JSON(feeType, feeType_);
      DARABONBA_PTR_TO_JSON(quotas, quotas_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(entryPointInfo, entryPointInfo_);
      DARABONBA_PTR_FROM_JSON(feeType, feeType_);
      DARABONBA_PTR_FROM_JSON(quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetServiceObservabilityResponseBody() = default ;
    GetServiceObservabilityResponseBody(const GetServiceObservabilityResponseBody &) = default ;
    GetServiceObservabilityResponseBody(GetServiceObservabilityResponseBody &&) = default ;
    GetServiceObservabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceObservabilityResponseBody() = default ;
    GetServiceObservabilityResponseBody& operator=(const GetServiceObservabilityResponseBody &) = default ;
    GetServiceObservabilityResponseBody& operator=(GetServiceObservabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntryPointInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntryPointInfo& obj) { 
        DARABONBA_PTR_TO_JSON(authToken, authToken_);
        DARABONBA_PTR_TO_JSON(privateDomain, privateDomain_);
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
      };
      friend void from_json(const Darabonba::Json& j, EntryPointInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(authToken, authToken_);
        DARABONBA_PTR_FROM_JSON(privateDomain, privateDomain_);
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
      };
      EntryPointInfo() = default ;
      EntryPointInfo(const EntryPointInfo &) = default ;
      EntryPointInfo(EntryPointInfo &&) = default ;
      EntryPointInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntryPointInfo() = default ;
      EntryPointInfo& operator=(const EntryPointInfo &) = default ;
      EntryPointInfo& operator=(EntryPointInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authToken_ == nullptr
        && this->privateDomain_ == nullptr && this->project_ == nullptr && this->publicDomain_ == nullptr; };
      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline EntryPointInfo& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // privateDomain Field Functions 
      bool hasPrivateDomain() const { return this->privateDomain_ != nullptr;};
      void deletePrivateDomain() { this->privateDomain_ = nullptr;};
      inline string getPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(privateDomain_, "") };
      inline EntryPointInfo& setPrivateDomain(string privateDomain) { DARABONBA_PTR_SET_VALUE(privateDomain_, privateDomain) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline EntryPointInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // publicDomain Field Functions 
      bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
      void deletePublicDomain() { this->publicDomain_ = nullptr;};
      inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
      inline EntryPointInfo& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    protected:
      // Authentication Token for Data Reporting
      shared_ptr<string> authToken_ {};
      // Private Network Access Address
      shared_ptr<string> privateDomain_ {};
      // SLS Project
      shared_ptr<string> project_ {};
      // Public Network Access Address
      shared_ptr<string> publicDomain_ {};
    };

    virtual bool empty() const override { return this->entryPointInfo_ == nullptr
        && this->feeType_ == nullptr && this->quotas_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->settings_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->workspace_ == nullptr; };
    // entryPointInfo Field Functions 
    bool hasEntryPointInfo() const { return this->entryPointInfo_ != nullptr;};
    void deleteEntryPointInfo() { this->entryPointInfo_ = nullptr;};
    inline const GetServiceObservabilityResponseBody::EntryPointInfo & getEntryPointInfo() const { DARABONBA_PTR_GET_CONST(entryPointInfo_, GetServiceObservabilityResponseBody::EntryPointInfo) };
    inline GetServiceObservabilityResponseBody::EntryPointInfo getEntryPointInfo() { DARABONBA_PTR_GET(entryPointInfo_, GetServiceObservabilityResponseBody::EntryPointInfo) };
    inline GetServiceObservabilityResponseBody& setEntryPointInfo(const GetServiceObservabilityResponseBody::EntryPointInfo & entryPointInfo) { DARABONBA_PTR_SET_VALUE(entryPointInfo_, entryPointInfo) };
    inline GetServiceObservabilityResponseBody& setEntryPointInfo(GetServiceObservabilityResponseBody::EntryPointInfo && entryPointInfo) { DARABONBA_PTR_SET_RVALUE(entryPointInfo_, entryPointInfo) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline GetServiceObservabilityResponseBody& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const map<string, string> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, map<string, string>) };
    inline map<string, string> getQuotas() { DARABONBA_PTR_GET(quotas_, map<string, string>) };
    inline GetServiceObservabilityResponseBody& setQuotas(const map<string, string> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline GetServiceObservabilityResponseBody& setQuotas(map<string, string> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceObservabilityResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceObservabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const map<string, string> & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, map<string, string>) };
    inline map<string, string> getSettings() { DARABONBA_PTR_GET(settings_, map<string, string>) };
    inline GetServiceObservabilityResponseBody& setSettings(const map<string, string> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetServiceObservabilityResponseBody& setSettings(map<string, string> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceObservabilityResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceObservabilityResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetServiceObservabilityResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Endpoint and Authentication Information
    shared_ptr<GetServiceObservabilityResponseBody::EntryPointInfo> entryPointInfo_ {};
    // Billing Type
    shared_ptr<string> feeType_ {};
    // Quota Configuration
    shared_ptr<map<string, string>> quotas_ {};
    // Region
    shared_ptr<string> regionId_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // System Configuration
    shared_ptr<map<string, string>> settings_ {};
    // Resource Initialization Status
    shared_ptr<string> status_ {};
    // Application Observability Type
    shared_ptr<string> type_ {};
    // Workspace Name
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
