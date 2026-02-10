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
      // 
      // *   **internetIp**: the public IP address.
      // *   **intranetIp**: the private IP address.
      // *   **instanceName**: the name of the instance.
      // *   **instanceId**: the instance ID.
      // *   **vpcInstanceId**: The ID of the virtual private cloud (VPC) to which the instance belongs.
      // *   **osName**: the operating system.
      // *   **osType**: the operating system type.
      // *   **hcStatus**: indicates whether baseline risks exist.
      // *   **vulStatus**: indicates whether vulnerabilities exist.
      // *   **alarmStatus**: indicates whether security alerts exist.
      // *   **riskStatus**: indicates whether risks exist.
      // *   **clientStatus**: indicates the status of the client.
      // *   **runningStatus**: the running status of the asset.
      // *   **tagName**: the name of the tag.
      // *   **groupName**: the name of the server group.
      // *   **regionId**: the region ID.
      // *   **importance**: the importance of the asset.
      // *   **exposedStatus**: indicates whether the server is exposed.
      // *   **authVersion**: the authorization version.
      // *   **flag**: the cloud service provider.
      // *   **ipList**: the IP address list.
      // *   **uuidList** :the UUID.
      // *   **tagKeyValue**: the ECS tag.
      // *   **vendorAuthAlias**: the account name.
      shared_ptr<string> name_ {};
      // The type of the search condition. Valid values:
      // 
      // *   **input**: The search condition needs to be specified.
      // *   **select**: The search condition is an option that can be selected from the drop-down list.
      shared_ptr<string> type_ {};
      // The attribute values of the assets that match the keyword.
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
    // The information about the search conditions of assets.
    shared_ptr<vector<DescribeCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
