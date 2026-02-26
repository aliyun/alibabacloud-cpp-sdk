// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCriteriaResponseBody() = default ;
    DescribeCriteriaResponseBody(const DescribeCriteriaResponseBody &) = default ;
    DescribeCriteriaResponseBody(DescribeCriteriaResponseBody &&) = default ;
    DescribeCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCriteriaResponseBody() = default ;
    DescribeCriteriaResponseBody& operator=(const DescribeCriteriaResponseBody &) = default ;
    DescribeCriteriaResponseBody& operator=(DescribeCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CriteriaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CriteriaList& obj) { 
        DARABONBA_PTR_TO_JSON(MultiValues, multiValues_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, CriteriaList& obj) { 
        DARABONBA_PTR_FROM_JSON(MultiValues, multiValues_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      CriteriaList() = default ;
      CriteriaList(const CriteriaList &) = default ;
      CriteriaList(CriteriaList &&) = default ;
      CriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CriteriaList() = default ;
      CriteriaList& operator=(const CriteriaList &) = default ;
      CriteriaList& operator=(CriteriaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->multiValues_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->values_ == nullptr; };
      // multiValues Field Functions 
      bool hasMultiValues() const { return this->multiValues_ != nullptr;};
      void deleteMultiValues() { this->multiValues_ = nullptr;};
      inline string getMultiValues() const { DARABONBA_PTR_GET_DEFAULT(multiValues_, "") };
      inline CriteriaList& setMultiValues(string multiValues) { DARABONBA_PTR_SET_VALUE(multiValues_, multiValues) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CriteriaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
      inline CriteriaList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


    protected:
      // The structured attribute values of the assets that match the keyword. The value of this parameter is in the JSON format and contains the following fields:
      // 
      // *   **vendor**: providers.
      // *   **regionIds**: IDs of supported regions
      shared_ptr<string> multiValues_ {};
      // The name of the search condition. Valid values:
      //  - **internetIp**: Public IP Address. 
      //  - **intranetIp**: Private IP Address.
      //  - **instanceName**: Instance Name.
      //  - **instanceId**: Instance ID. 
      //  - **machineType**: Instance Type. 
      //  - **clusterIdList**: Cluster ID list. 
      //  - **vpcInstanceId**: VPC ID. 
      //  - **osName**: OS. 
      //  - **osType**: OS type. 
      //  - **hcStatus**: Whether Baseline Risk Exists. 
      //  - **vulStatus**: Whether Vulnerability Exists. 
      //  - **asapVulStatus**: Whether there is an urgent vulnerability. 
      //  - **alarmStatus**: Whether Alert Exists. 
      //  - **riskStatus**: Whether there is a risk. 
      //  - **clientStatus**: Whether it is online. 
      //  - **clientSubStatus**: Client sub-status. 
      //  - **runningStatus**: Power-on status. 
      //  - **tagName**: Tag name. 
      //  - **vendorAuthAlias**: Authorized account remarks. 
      //  - **vendorUid**: Authorized account ID. 
      //  - **vendorUserName**: Authorized account name. 
      //  - **namespace**: Namespace. 
      //  - **appName**: Application name. 
      //  - **groupName**: Group name. 
      //  - **regionId**: Region. 
      //  - **groupId**: Group ID. 
      //  - **newInstance**: Whether it is a new asset. 
      //  - **containerStatus**: Whether there is a container. 
      //  - **importance**: Asset importance. 
      //  - **exposedStatus**: Whether it is an exposed server. 
      //  - **clusterId**: Cluster ID. 
      //  - **authVersion**: Authorization version. 
      //  - **flag**: Cloud provider. 
      //  - **ipList**: IP list. 
      //  - **uuidList**: UUID. 
      //  - **aiStatus**: Whether there is an AI component. 
      //  - **tagKeyValue**: ECS tag. 
      //  - **ecsType**: Server type. 
      //  - **alisecguardStatus**: Self-protection status. 
      //  - **alihipsStatus**: AliHips status. 
      //  - **alinetStatus**: AliNet status. 
      //  - **alidetectStatus**: Endpoint engine status. 
      //  - **yundunMonitorStatus**: Information collection component status. 
      //  - **clusterNodeStatus**: Whether it is a cluster node.
      shared_ptr<string> name_ {};
      // The type of the search condition. Valid values:
      // 
      // *   **input**: The search condition needs to be specified.
      // *   **select**: The search condition is an option that can be selected from the drop-down list.
      shared_ptr<string> type_ {};
      // The attribute values of the assets that match the keyword.
      // > - When **Name** is **machineType**, the enum values are: 
      // >>- **38**: Elastic Container Instance. 
      // >>- **51**: RunD Container Instance. 
      // >>- **52**: RunC Container Instance. 
      // >- When **Name** is **osType**, the enum values are: 
      // >>- **linux**: Linux. 
      // >>- **windows**: Windows. 
      // >- When **Name** is **hcStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **vulStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **asapVulStatus**, the enum values are: 
      // >>- **NO**: No.
      // >>- **YES**: Yes. 
      // >- When **Name** is **alarmStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **riskStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >>- **UNKNOWN**: Unknown. 
      // >- When **Name** is **clientStatus**, the enum values are: 
      // >>- **online**: Online. 
      // >>- **offline**: Offline. 
      // >>- **pause**: Protection Suspended. 
      // >- When **Name** is **clientSubStatus**, the enum values are: 
      // >>- **online**: Online. 
      // >>- **offline**: Offline. 
      // >>- **pause**: Protection Suspended. 
      // >>- **stopped**: Server Shutdown. 
      // >>- **uninstalled**: Not Installed. 
      // >- When **Name** is **runningStatus**, the enum values are: 
      // >>- **Running**: On. 
      // >>- **notRunning**: Off. 
      // >>- **UNKNOWN**: Unknown. 
      // >- When **Name** is **importance**, the enum values are: 
      // >>- **important**: Important. 
      // >>- **general**: Normal. 
      // >>- **test**: Test. 
      // >- When **Name** is **containerStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **exposedStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **authVersion**, the enum values are: 
      // >>- **1**: Basic. 
      // >>- **3**: Enterprise. 
      // >>- **5**: Advanced.
      // >>- **6**: Anti-virus. 
      // >>- **7**: Ultimate. 
      // >- When **Name** is **flag**, the enum values are: 
      // >>- **0|8|15**: Alibaba Cloud. 
      // >>- **1**: External Host. 
      // >>- **2**: IDC. 
      // >>- **3**: Tencent Cloud. 
      // >>- **4**: Huawei Cloud. 
      // >>- **5**: Azure. 
      // >>- **7**: AWS. 
      // >>- **9**: SAE. 
      // >>- **10**: PAI. 
      // >>- **13**: ACS. 
      // >>- **14**: Volcano Cloud. 
      // >>- **16**: Google Cloud. 
      // >- When **Name** is **aiStatus**, the enum values are: 
      // >>- **NO**: No. 
      // >>- **YES**: Yes. 
      // >- When **Name** is **ecsType**, the enum values are: 
      // >>- **8**: Simple Application Server. 
      // >>- **11**: LINGJUN GPU-accelerated Bare Metal Instance. 
      // >>- **15**: RDS Custom. 
      // >>- **!8**: Host. 
      // >- When **Name** is **alisecguardStatus**, the enum values are: 
      // >>- **0**: Plug-in Online. 
      // >>- **1**: Plug-in Disabled. 
      // >>- **2**: Plug-in Offline. 
      // >>- **-99**: The installation failed. 
      // >- When **Name** is **alihipsStatus**, the enum values are: 
      // >>- **0**: Plug-in Online. 
      // >>- **1**: Plug-in Disabled. 
      // >>- **2**: Plug-in Offline. 
      // >>- **-99**: The installation failed. 
      // >- When **Name** is **alinetStatus**, the enum values are: 
      // >>- **0**: Plug-in Online. 
      // >>- **1**: Plug-in Disabled. 
      // >>- **2**: Plug-in Offline. 
      // >>- **-99**: The installation failed. 
      // >- When **Name** is **alidetectStatus**, the enum values are: 
      // >>- **0**: Plug-in Online. 
      // >>- **1**: Plug-in Disabled. 
      // >>- **2**: Plug-in Offline. 
      // >>- **-99**: The installation failed. 
      // >- When **Name** is **yundunMonitorStatus**, the enum values are: 
      // >>- **0**: Plug-in Online. 
      // >>- **1**: Plug-in Disabled. 
      // >>- **2**: Plug-in Offline. 
      // >>- **-99**: The installation failed. 
      // >- When **Name** is **clusterNodeStatus**, the enum values are: 
      // >>- **false**: No. 
      // >>- **true**: Yes.
      shared_ptr<string> values_ {};
    };

    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<DescribeCriteriaResponseBody::CriteriaList> & getCriteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<DescribeCriteriaResponseBody::CriteriaList>) };
    inline vector<DescribeCriteriaResponseBody::CriteriaList> getCriteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<DescribeCriteriaResponseBody::CriteriaList>) };
    inline DescribeCriteriaResponseBody& setCriteriaList(const vector<DescribeCriteriaResponseBody::CriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline DescribeCriteriaResponseBody& setCriteriaList(vector<DescribeCriteriaResponseBody::CriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of asset query condition information.
    shared_ptr<vector<DescribeCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
