// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateApprovalProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
    };
    CreateApprovalProcessRequest() = default ;
    CreateApprovalProcessRequest(const CreateApprovalProcessRequest &) = default ;
    CreateApprovalProcessRequest(CreateApprovalProcessRequest &&) = default ;
    CreateApprovalProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApprovalProcessRequest() = default ;
    CreateApprovalProcessRequest& operator=(const CreateApprovalProcessRequest &) = default ;
    CreateApprovalProcessRequest& operator=(CreateApprovalProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MatchSchemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchSchemas& obj) { 
        DARABONBA_PTR_TO_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
        DARABONBA_PTR_TO_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
        DARABONBA_PTR_TO_JSON(DlpSendSchemaId, dlpSendSchemaId_);
        DARABONBA_PTR_TO_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
        DARABONBA_PTR_TO_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
        DARABONBA_PTR_TO_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
        DARABONBA_PTR_TO_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
        DARABONBA_PTR_TO_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
        DARABONBA_PTR_TO_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
      };
      friend void from_json(const Darabonba::Json& j, MatchSchemas& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
        DARABONBA_PTR_FROM_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
        DARABONBA_PTR_FROM_JSON(DlpSendSchemaId, dlpSendSchemaId_);
        DARABONBA_PTR_FROM_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
        DARABONBA_PTR_FROM_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
        DARABONBA_PTR_FROM_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
        DARABONBA_PTR_FROM_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
        DARABONBA_PTR_FROM_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
        DARABONBA_PTR_FROM_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
      };
      MatchSchemas() = default ;
      MatchSchemas(const MatchSchemas &) = default ;
      MatchSchemas(MatchSchemas &&) = default ;
      MatchSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchSchemas() = default ;
      MatchSchemas& operator=(const MatchSchemas &) = default ;
      MatchSchemas& operator=(MatchSchemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appUninstallSchemaId_ == nullptr
        && this->deviceRegistrationSchemaId_ == nullptr && this->dlpSendSchemaId_ == nullptr && this->domainBlacklistSchemaId_ == nullptr && this->domainWhitelistSchemaId_ == nullptr && this->endpointHardeningSchemaId_ == nullptr
        && this->peripheralBlockSchemaId_ == nullptr && this->softwareBlockSchemaId_ == nullptr && this->softwareHardeningSchemaId_ == nullptr; };
      // appUninstallSchemaId Field Functions 
      bool hasAppUninstallSchemaId() const { return this->appUninstallSchemaId_ != nullptr;};
      void deleteAppUninstallSchemaId() { this->appUninstallSchemaId_ = nullptr;};
      inline string getAppUninstallSchemaId() const { DARABONBA_PTR_GET_DEFAULT(appUninstallSchemaId_, "") };
      inline MatchSchemas& setAppUninstallSchemaId(string appUninstallSchemaId) { DARABONBA_PTR_SET_VALUE(appUninstallSchemaId_, appUninstallSchemaId) };


      // deviceRegistrationSchemaId Field Functions 
      bool hasDeviceRegistrationSchemaId() const { return this->deviceRegistrationSchemaId_ != nullptr;};
      void deleteDeviceRegistrationSchemaId() { this->deviceRegistrationSchemaId_ = nullptr;};
      inline string getDeviceRegistrationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(deviceRegistrationSchemaId_, "") };
      inline MatchSchemas& setDeviceRegistrationSchemaId(string deviceRegistrationSchemaId) { DARABONBA_PTR_SET_VALUE(deviceRegistrationSchemaId_, deviceRegistrationSchemaId) };


      // dlpSendSchemaId Field Functions 
      bool hasDlpSendSchemaId() const { return this->dlpSendSchemaId_ != nullptr;};
      void deleteDlpSendSchemaId() { this->dlpSendSchemaId_ = nullptr;};
      inline string getDlpSendSchemaId() const { DARABONBA_PTR_GET_DEFAULT(dlpSendSchemaId_, "") };
      inline MatchSchemas& setDlpSendSchemaId(string dlpSendSchemaId) { DARABONBA_PTR_SET_VALUE(dlpSendSchemaId_, dlpSendSchemaId) };


      // domainBlacklistSchemaId Field Functions 
      bool hasDomainBlacklistSchemaId() const { return this->domainBlacklistSchemaId_ != nullptr;};
      void deleteDomainBlacklistSchemaId() { this->domainBlacklistSchemaId_ = nullptr;};
      inline string getDomainBlacklistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainBlacklistSchemaId_, "") };
      inline MatchSchemas& setDomainBlacklistSchemaId(string domainBlacklistSchemaId) { DARABONBA_PTR_SET_VALUE(domainBlacklistSchemaId_, domainBlacklistSchemaId) };


      // domainWhitelistSchemaId Field Functions 
      bool hasDomainWhitelistSchemaId() const { return this->domainWhitelistSchemaId_ != nullptr;};
      void deleteDomainWhitelistSchemaId() { this->domainWhitelistSchemaId_ = nullptr;};
      inline string getDomainWhitelistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainWhitelistSchemaId_, "") };
      inline MatchSchemas& setDomainWhitelistSchemaId(string domainWhitelistSchemaId) { DARABONBA_PTR_SET_VALUE(domainWhitelistSchemaId_, domainWhitelistSchemaId) };


      // endpointHardeningSchemaId Field Functions 
      bool hasEndpointHardeningSchemaId() const { return this->endpointHardeningSchemaId_ != nullptr;};
      void deleteEndpointHardeningSchemaId() { this->endpointHardeningSchemaId_ = nullptr;};
      inline string getEndpointHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(endpointHardeningSchemaId_, "") };
      inline MatchSchemas& setEndpointHardeningSchemaId(string endpointHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(endpointHardeningSchemaId_, endpointHardeningSchemaId) };


      // peripheralBlockSchemaId Field Functions 
      bool hasPeripheralBlockSchemaId() const { return this->peripheralBlockSchemaId_ != nullptr;};
      void deletePeripheralBlockSchemaId() { this->peripheralBlockSchemaId_ = nullptr;};
      inline string getPeripheralBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(peripheralBlockSchemaId_, "") };
      inline MatchSchemas& setPeripheralBlockSchemaId(string peripheralBlockSchemaId) { DARABONBA_PTR_SET_VALUE(peripheralBlockSchemaId_, peripheralBlockSchemaId) };


      // softwareBlockSchemaId Field Functions 
      bool hasSoftwareBlockSchemaId() const { return this->softwareBlockSchemaId_ != nullptr;};
      void deleteSoftwareBlockSchemaId() { this->softwareBlockSchemaId_ = nullptr;};
      inline string getSoftwareBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareBlockSchemaId_, "") };
      inline MatchSchemas& setSoftwareBlockSchemaId(string softwareBlockSchemaId) { DARABONBA_PTR_SET_VALUE(softwareBlockSchemaId_, softwareBlockSchemaId) };


      // softwareHardeningSchemaId Field Functions 
      bool hasSoftwareHardeningSchemaId() const { return this->softwareHardeningSchemaId_ != nullptr;};
      void deleteSoftwareHardeningSchemaId() { this->softwareHardeningSchemaId_ = nullptr;};
      inline string getSoftwareHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareHardeningSchemaId_, "") };
      inline MatchSchemas& setSoftwareHardeningSchemaId(string softwareHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(softwareHardeningSchemaId_, softwareHardeningSchemaId) };


    protected:
      shared_ptr<string> appUninstallSchemaId_ {};
      shared_ptr<string> deviceRegistrationSchemaId_ {};
      shared_ptr<string> dlpSendSchemaId_ {};
      shared_ptr<string> domainBlacklistSchemaId_ {};
      shared_ptr<string> domainWhitelistSchemaId_ {};
      shared_ptr<string> endpointHardeningSchemaId_ {};
      shared_ptr<string> peripheralBlockSchemaId_ {};
      shared_ptr<string> softwareBlockSchemaId_ {};
      shared_ptr<string> softwareHardeningSchemaId_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->matchSchemas_ == nullptr && this->processName_ == nullptr && this->processNodes_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApprovalProcessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchSchemas Field Functions 
    bool hasMatchSchemas() const { return this->matchSchemas_ != nullptr;};
    void deleteMatchSchemas() { this->matchSchemas_ = nullptr;};
    inline const CreateApprovalProcessRequest::MatchSchemas & getMatchSchemas() const { DARABONBA_PTR_GET_CONST(matchSchemas_, CreateApprovalProcessRequest::MatchSchemas) };
    inline CreateApprovalProcessRequest::MatchSchemas getMatchSchemas() { DARABONBA_PTR_GET(matchSchemas_, CreateApprovalProcessRequest::MatchSchemas) };
    inline CreateApprovalProcessRequest& setMatchSchemas(const CreateApprovalProcessRequest::MatchSchemas & matchSchemas) { DARABONBA_PTR_SET_VALUE(matchSchemas_, matchSchemas) };
    inline CreateApprovalProcessRequest& setMatchSchemas(CreateApprovalProcessRequest::MatchSchemas && matchSchemas) { DARABONBA_PTR_SET_RVALUE(matchSchemas_, matchSchemas) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateApprovalProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<string>> & getProcessNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<string>>) };
    inline vector<vector<string>> getProcessNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<string>>) };
    inline CreateApprovalProcessRequest& setProcessNodes(const vector<vector<string>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline CreateApprovalProcessRequest& setProcessNodes(vector<vector<string>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<CreateApprovalProcessRequest::MatchSchemas> matchSchemas_ {};
    // This parameter is required.
    shared_ptr<string> processName_ {};
    // This parameter is required.
    shared_ptr<vector<vector<string>>> processNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
