// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODYDHCPOPTIONSSETS_HPP_
#define ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODYDHCPOPTIONSSETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions.hpp>
#include <vector>
#include <alibabacloud/models/ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListDhcpOptionsSetsResponseBodyDhcpOptionsSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateVpcCount, associateVpcCount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateVpcCount, associateVpcCount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets() = default ;
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets(const ListDhcpOptionsSetsResponseBodyDhcpOptionsSets &) = default ;
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets(ListDhcpOptionsSetsResponseBodyDhcpOptionsSets &&) = default ;
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDhcpOptionsSetsResponseBodyDhcpOptionsSets() = default ;
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& operator=(const ListDhcpOptionsSetsResponseBodyDhcpOptionsSets &) = default ;
    ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& operator=(ListDhcpOptionsSetsResponseBodyDhcpOptionsSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateVpcCount_ != nullptr
        && this->creationTime_ != nullptr && this->dhcpOptions_ != nullptr && this->dhcpOptionsSetDescription_ != nullptr && this->dhcpOptionsSetId_ != nullptr && this->dhcpOptionsSetName_ != nullptr
        && this->ownerId_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // associateVpcCount Field Functions 
    bool hasAssociateVpcCount() const { return this->associateVpcCount_ != nullptr;};
    void deleteAssociateVpcCount() { this->associateVpcCount_ = nullptr;};
    inline int32_t associateVpcCount() const { DARABONBA_PTR_GET_DEFAULT(associateVpcCount_, 0) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setAssociateVpcCount(int32_t associateVpcCount) { DARABONBA_PTR_SET_VALUE(associateVpcCount_, associateVpcCount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dhcpOptions Field Functions 
    bool hasDhcpOptions() const { return this->dhcpOptions_ != nullptr;};
    void deleteDhcpOptions() { this->dhcpOptions_ = nullptr;};
    inline const Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions & dhcpOptions() const { DARABONBA_PTR_GET_CONST(dhcpOptions_, Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions) };
    inline Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions dhcpOptions() { DARABONBA_PTR_GET(dhcpOptions_, Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setDhcpOptions(const Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions & dhcpOptions) { DARABONBA_PTR_SET_VALUE(dhcpOptions_, dhcpOptions) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setDhcpOptions(Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions && dhcpOptions) { DARABONBA_PTR_SET_RVALUE(dhcpOptions_, dhcpOptions) };


    // dhcpOptionsSetDescription Field Functions 
    bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
    void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
    inline string dhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string dhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetName Field Functions 
    bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
    void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
    inline string dhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags>) };
    inline vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags>) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setTags(const vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListDhcpOptionsSetsResponseBodyDhcpOptionsSets& setTags(vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The number of VPCs with which the DHCP options set is associated.
    std::shared_ptr<int32_t> associateVpcCount_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    // The configuration information about the DHCP options set.
    std::shared_ptr<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsDhcpOptions> dhcpOptions_ = nullptr;
    // The description of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetDescription_ = nullptr;
    // The ID of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetId_ = nullptr;
    // The name of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the DHCP options set belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group to which the DHCP options set belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the DHCP options set. Valid values:
    // 
    // *   **Available**
    // *   **InUse**
    // *   **Pending**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListDhcpOptionsSetsResponseBodyDhcpOptionsSetsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
