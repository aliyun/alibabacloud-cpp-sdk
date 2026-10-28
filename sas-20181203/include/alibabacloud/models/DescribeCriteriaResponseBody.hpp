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
      // The specific structured property values of the asset that correspond to the entered fuzzy match value. The value is in JSON format and contains the following fields:
      // 
      // - **vendor**: The provider.
      // - **regionIds**: The supported regions.
      shared_ptr<string> multiValues_ {};
      // The name of the corresponding query criterion. Valid values:
      // - **internetIp**: The public IP address.
      // - **intranetIp**: The private IP address.
      // - **instanceName**: The instance name.
      // - **instanceId**: The instance ID.
      // - **machineType**: The instance type.
      // - **clusterIdList**: The list of cluster IDs.
      // - **vpcInstanceId**: The ID of the VPC to which the instance belongs.
      // - **osName**: The operating system.
      // - **osType**: The system type.
      // - **hcStatus**: Whether baseline risks exist.
      // - **vulStatus**: Whether vulnerabilities exist.
      // - **asapVulStatus**: Whether urgent vulnerabilities exist.
      // - **alarmStatus**: Whether security alerts exist.
      // - **riskStatus**: Whether risks exist.
      // - **clientStatus**: Whether the client is online.
      // - **clientSubStatus**: The client sub-status.
      // - **runningStatus**: The running status.
      // - **tagName**: The tag name.
      // - **vendorAuthAlias**: The alias of the authorized account.
      // - **vendorUid**: The ID of the authorized account.
      // - **vendorUserName**: The name of the authorized account.
      // - **namespace**: The namespace.
      // - **appName**: The application name.
      // - **groupName**: The group name.
      // - **regionId**: The region.
      // - **groupId**: The group ID.
      // - **newInstance**: Whether the asset is newly added.
      // - **containerStatus**: Whether containers exist.
      // - **importance**: The asset importance.
      // - **exposedStatus**: Whether the server is exposed.
      // - **clusterId**: The cluster ID.
      // - **authVersion**: The authorized edition.
      // - **flag**: The cloud provider.
      // - **ipList**: The list of IP addresses.
      // - **uuidList**: The list of UUIDs.
      // - **aiStatus**: Whether AI components exist.
      // - **tagKeyValue**: The ECS tag.
      // - **ecsType**: The server type.
      // - **alisecguardStatus**: The self-protection status.
      // - **alihipsStatus**: The AliHips status.
      // - **alinetStatus**: The AliNet status.
      // - **alidetectStatus**: The endpoint engine status.
      // - **yundunMonitorStatus**: The information collection component status.
      // - **clusterNodeStatus**: Whether the instance is a cluster node.
      shared_ptr<string> name_ {};
      // The type of the query criterion. Valid values:
      // 
      // - **input**: You must manually enter the query field.
      // - **select**: You must select the subtype of the query criterion from a drop-down list.
      shared_ptr<string> type_ {};
      // The specific property values of the asset that correspond to the entered fuzzy match value.
      // >- If **Name** is **machineType**, valid values:
      // >>- **38**: Elastic Container Instance.
      // >>- **51**: RunD container instance.
      // >>- **52**: RunC container instance.
      // >- If **Name** is **osType**, valid values:
      // >>- **linux**: Linux.
      // >>- **windows**: Windows.
      // >- If **Name** is **hcStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **vulStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **asapVulStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **alarmStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **riskStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >>- **UNKNOWN**: Unknown.
      // >- If **Name** is **clientStatus**, valid values:
      // >>- **online**: Online.
      // >>- **offline**: Offline.
      // >>- **pause**: Protection paused.
      // >- If **Name** is **clientSubStatus**, valid values:
      // >>- **online**: Online.
      // >>- **offline**: Offline.
      // >>- **pause**: Protection paused.
      // >>- **stopped**: Stopped.
      // >>- **uninstalled**: Uninstalled.
      // >- If **Name** is **runningStatus**, valid values:
      // >>- **Running**: Running.
      // >>- **notRunning**: Stopped.
      // >>- **UNKNOWN**: Unknown.
      // >- If **Name** is **importance**, valid values:
      // >>- **important**: Important.
      // >>- **general**: General.
      // >>- **test**: Test.
      // >- If **Name** is **containerStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **exposedStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **authVersion**, valid values:
      // >>- **1**: Free Edition.
      // >>- **3**: Enterprise Edition.
      // >>- **5**: Advanced Edition.
      // >>- **6**: Anti-virus Edition.
      // >>- **7**: Ultimate Edition.
      // >- If **Name** is **flag**, valid values:
      // >>- **0|8|15**: Alibaba Cloud.
      // >>- **1**: Non-cloud host.
      // >>- **2**: IDC.
      // >>- **3**: Tencent Cloud.
      // >>- **4**: Huawei Cloud.
      // >>- **5**: Azure.
      // >>- **7**: AWS.
      // >>- **9**: SAE.
      // >>- **10**: PAI.
      // >>- **13**: ACS.
      // >>- **14**: Volcengine.
      // >>- **16**: Google Cloud.
      // >>- **17**: CTyun.
      // >>- **18**: Baidu Cloud.
      // >>- **19**: UCloud.
      // >>- **20**: Kingsoft Cloud.
      // >>- **21**: Oracle Cloud.
      // >- If **Name** is **aiStatus**, valid values:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- If **Name** is **ecsType**, valid values:
      // >>- **8**: Simple Application Server.
      // >>- **11**: Lingjun.
      // >>- **15**: RDS Custom.
      // >>- **!8**: ECS instance.
      // >- If **Name** is **alisecguardStatus**, valid values:
      // >>- **0**: Plugin online.
      // >>- **1**: Disabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- If **Name** is **alihipsStatus**, valid values:
      // >>- **0**: Plugin online.
      // >>- **1**: Disabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- If **Name** is **alinetStatus**, valid values:
      // >>- **0**: Plugin online.
      // >>- **1**: Disabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- If **Name** is **alidetectStatus**, valid values:
      // >>- **0**: Plugin online.
      // >>- **1**: Disabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- If **Name** is **yundunMonitorStatus**, valid values:
      // >>- **0**: Plugin online.
      // >>- **1**: Disabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- If **Name** is **clusterNodeStatus**, valid values:
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
    // The list of asset query criteria.
    shared_ptr<vector<DescribeCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The request ID. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
