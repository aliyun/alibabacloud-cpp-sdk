// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRITERIARESPONSEBODYCRITERIALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRITERIARESPONSEBODYCRITERIALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCriteriaResponseBodyCriteriaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_TO_JSON(MultiValues, multiValues_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiValues, multiValues_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeCriteriaResponseBodyCriteriaList() = default ;
    DescribeCriteriaResponseBodyCriteriaList(const DescribeCriteriaResponseBodyCriteriaList &) = default ;
    DescribeCriteriaResponseBodyCriteriaList(DescribeCriteriaResponseBodyCriteriaList &&) = default ;
    DescribeCriteriaResponseBodyCriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCriteriaResponseBodyCriteriaList() = default ;
    DescribeCriteriaResponseBodyCriteriaList& operator=(const DescribeCriteriaResponseBodyCriteriaList &) = default ;
    DescribeCriteriaResponseBodyCriteriaList& operator=(DescribeCriteriaResponseBodyCriteriaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multiValues_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr && return this->values_ == nullptr; };
    // multiValues Field Functions 
    bool hasMultiValues() const { return this->multiValues_ != nullptr;};
    void deleteMultiValues() { this->multiValues_ = nullptr;};
    inline string multiValues() const { DARABONBA_PTR_GET_DEFAULT(multiValues_, "") };
    inline DescribeCriteriaResponseBodyCriteriaList& setMultiValues(string multiValues) { DARABONBA_PTR_SET_VALUE(multiValues_, multiValues) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCriteriaResponseBodyCriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCriteriaResponseBodyCriteriaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline DescribeCriteriaResponseBodyCriteriaList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The structured attribute values of the assets that match the keyword. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **vendor**: providers.
    // *   **regionIds**: IDs of supported regions
    std::shared_ptr<string> multiValues_ = nullptr;
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
    std::shared_ptr<string> name_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **input**: The search condition needs to be specified.
    // *   **select**: The search condition is an option that can be selected from the drop-down list.
    std::shared_ptr<string> type_ = nullptr;
    // The attribute values of the assets that match the keyword.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
