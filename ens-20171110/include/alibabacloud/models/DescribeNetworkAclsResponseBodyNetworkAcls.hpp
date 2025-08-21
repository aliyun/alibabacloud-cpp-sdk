// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAcls& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeNetworkAclsResponseBodyNetworkAcls() = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(const DescribeNetworkAclsResponseBodyNetworkAcls &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(DescribeNetworkAclsResponseBodyNetworkAcls &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAcls() = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls& operator=(const DescribeNetworkAclsResponseBodyNetworkAcls &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls& operator=(DescribeNetworkAclsResponseBodyNetworkAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->egressAclEntries_ != nullptr && this->ingressAclEntries_ != nullptr && this->networkAclId_ != nullptr && this->networkAclName_ != nullptr
        && this->resources_ != nullptr && this->status_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressAclEntries Field Functions 
    bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
    void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries> & egressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries> egressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries>) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setEgressAclEntries(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries> & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setEgressAclEntries(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries> && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


    // ingressAclEntries Field Functions 
    bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
    void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries> & ingressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries> ingressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries>) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setIngressAclEntries(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries> & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setIngressAclEntries(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries> && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkAclName Field Functions 
    bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
    void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
    inline string networkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources>) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setResources(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setResources(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the network ACL was created. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the network ACL.
    std::shared_ptr<string> description_ = nullptr;
    // Details of the outbound rules.
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsEgressAclEntries>> egressAclEntries_ = nullptr;
    // Details of the inbound rules.
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries>> ingressAclEntries_ = nullptr;
    // The ID of the network ACL.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The name of the network ACL.
    std::shared_ptr<string> networkAclName_ = nullptr;
    // Details of the associated resources.
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsResources>> resources_ = nullptr;
    // The status of the network ACL. Valid values:
    // 
    // *   **Available**: The network ACL is available.
    // *   **Modifying**: The network ACL is being configured.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
