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
      // The structured property values of the asset that correspond to the fuzzy match value. The value is in JSON format and contains the following fields:
      // 
      // - **vendor**: the provider.
      // - **regionIds**: the supported regions.
      shared_ptr<string> multiValues_ {};
      // The name of the query condition.
      // - **internetIp**: public IP address.
      // - **intranetIp**: private IP address.
      // - **instanceName**: instance name.
      // - **instanceId**: instance ID.
      // - **machineType**: instance type.
      // - **clusterIdList**: cluster ID list.
      // - **vpcInstanceId**: VPC ID.
      // - **osName**: operating system.
      // - **osType**: system type.
      // - **hcStatus**: whether baseline issues exist.
      // - **vulStatus**: whether vulnerability issues exist.
      // - **asapVulStatus**: whether high-priority vulnerabilities exist.
      // - **alarmStatus**: whether security alerts exist.
      // - **riskStatus**: whether risks exist.
      // - **clientStatus**: whether the client is online.
      // - **clientSubStatus**: client substatus.
      // - **runningStatus**: running status.
      // - **tagName**: tag name.
      // - **vendorAuthAlias**: authorized account alias.
      // - **vendorUid**: authorized account ID.
      // - **vendorUserName**: authorized account name.
      // - **namespace**: namespace.
      // - **appName**: application name.
      // - **groupName**: group name.
      // - **regionId**: region.
      // - **groupId**: group ID.
      // - **newInstance**: whether the asset is newly added.
      // - **containerStatus**: whether containers exist.
      // - **importance**: asset importance.
      // - **exposedStatus**: whether the server is exposed.
      // - **clusterId**: cluster ID.
      // - **authVersion**: authorization version.
      // - **flag**: cloud provider.
      // - **ipList**: IP list.
      // - **uuidList**: UUID.
      // - **aiStatus**: whether AI components exist.
      // - **tagKeyValue**: ECS tag.
      // - **ecsType**: server type.
      // - **alisecguardStatus**: self-protection status.
      // - **alihipsStatus**: AliHips status.
      // - **alinetStatus**: AliNet status.
      // - **alidetectStatus**: endpoint engine status.
      // - **yundunMonitorStatus**: information collection component status.
      // - **clusterNodeStatus**: whether the asset is a cluster node.
      shared_ptr<string> name_ {};
      // The type of the query condition. Valid values:
      // 
      // - **input**: You must manually enter the query field.
      // - **select**: You must select a subtype of the query condition from the drop-down list.
      shared_ptr<string> type_ {};
      // The specific asset property values that correspond to the fuzzy match value.
      // >- When **Name** is **machineType**, the valid values are:
      // >>- **38**: Elastic Container Instance.
      // >>- **51**: RunD container instance.
      // >>- **52**: RunC container instance.
      // >- When **Name** is **osType**, the valid values are:
      // >>- **linux**: Linux.
      // >>- **windows**: Windows.
      // >- When **Name** is **hcStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **vulStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **asapVulStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **alarmStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **riskStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >>- **UNKNOWN**: Unknown.
      // >- When **Name** is **clientStatus**, the valid values are:
      // >>- **online**: Online.
      // >>- **offline**: Offline.
      // >>- **pause**: Protection paused.
      // >- When **Name** is **clientSubStatus**, the valid values are:
      // >>- **online**: Online.
      // >>- **offline**: Offline.
      // >>- **pause**: Protection paused.
      // >>- **stopped**: Shut down.
      // >>- **uninstalled**: Not installed.
      // >- When **Name** is **runningStatus**, the valid values are:
      // >>- **Running**: Running.
      // >>- **notRunning**: Shut down.
      // >>- **UNKNOWN**: Unknown.
      // >- When **Name** is **importance**, the valid values are:
      // >>- **important**: Important.
      // >>- **general**: General.
      // >>- **test**: Test.
      // >- When **Name** is **containerStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **exposedStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **authVersion**, the valid values are:
      // >>- **1**: Free Edition.
      // >>- **3**: Enterprise Edition.
      // >>- **5**: Premium Edition.
      // >>- **6**: Anti-virus Edition.
      // >>- **7**: Ultimate Edition.
      // >- When **Name** is **flag**, the valid values are:
      // >>- **0|8|15**: Alibaba Cloud.
      // >>- **1**: Non-cloud server.
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
      // >- When **Name** is **aiStatus**, the valid values are:
      // >>- **NO**: No.
      // >>- **YES**: Yes.
      // >- When **Name** is **ecsType**, the valid values are:
      // >>- **8**: Simple application server.
      // >>- **11**: Lingjun.
      // >>- **15**: RDS Custom.
      // >>- **!8**: Host server.
      // >- When **Name** is **alisecguardStatus**, the valid values are:
      // >>- **0**: Plugin online.
      // >>- **1**: Not enabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- When **Name** is **alihipsStatus**, the valid values are:
      // >>- **0**: Plugin online.
      // >>- **1**: Not enabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- When **Name** is **alinetStatus**, the valid values are:
      // >>- **0**: Plugin online.
      // >>- **1**: Not enabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- When **Name** is **alidetectStatus**, the valid values are:
      // >>- **0**: Plugin online.
      // >>- **1**: Not enabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- When **Name** is **yundunMonitorStatus**, the valid values are:
      // >>- **0**: Plugin online.
      // >>- **1**: Not enabled.
      // >>- **2**: Plugin offline.
      // >>- **-99**: Installation failed.
      // >- When **Name** is **clusterNodeStatus**, the valid values are:
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
    // The list of asset query conditions.
    shared_ptr<vector<DescribeCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
