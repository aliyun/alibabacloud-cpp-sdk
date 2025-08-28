// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDhcpOptionsSetResponseBodyAssociateVpcs.hpp>
#include <alibabacloud/models/GetDhcpOptionsSetResponseBodyDhcpOptions.hpp>
#include <alibabacloud/models/GetDhcpOptionsSetResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetDhcpOptionsSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateVpcs, associateVpcs_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateVpcs, associateVpcs_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetDhcpOptionsSetResponseBody() = default ;
    GetDhcpOptionsSetResponseBody(const GetDhcpOptionsSetResponseBody &) = default ;
    GetDhcpOptionsSetResponseBody(GetDhcpOptionsSetResponseBody &&) = default ;
    GetDhcpOptionsSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDhcpOptionsSetResponseBody() = default ;
    GetDhcpOptionsSetResponseBody& operator=(const GetDhcpOptionsSetResponseBody &) = default ;
    GetDhcpOptionsSetResponseBody& operator=(GetDhcpOptionsSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateVpcs_ != nullptr
        && this->creationTime_ != nullptr && this->dhcpOptions_ != nullptr && this->dhcpOptionsSetDescription_ != nullptr && this->dhcpOptionsSetId_ != nullptr && this->dhcpOptionsSetName_ != nullptr
        && this->ownerId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // associateVpcs Field Functions 
    bool hasAssociateVpcs() const { return this->associateVpcs_ != nullptr;};
    void deleteAssociateVpcs() { this->associateVpcs_ = nullptr;};
    inline const vector<GetDhcpOptionsSetResponseBodyAssociateVpcs> & associateVpcs() const { DARABONBA_PTR_GET_CONST(associateVpcs_, vector<GetDhcpOptionsSetResponseBodyAssociateVpcs>) };
    inline vector<GetDhcpOptionsSetResponseBodyAssociateVpcs> associateVpcs() { DARABONBA_PTR_GET(associateVpcs_, vector<GetDhcpOptionsSetResponseBodyAssociateVpcs>) };
    inline GetDhcpOptionsSetResponseBody& setAssociateVpcs(const vector<GetDhcpOptionsSetResponseBodyAssociateVpcs> & associateVpcs) { DARABONBA_PTR_SET_VALUE(associateVpcs_, associateVpcs) };
    inline GetDhcpOptionsSetResponseBody& setAssociateVpcs(vector<GetDhcpOptionsSetResponseBodyAssociateVpcs> && associateVpcs) { DARABONBA_PTR_SET_RVALUE(associateVpcs_, associateVpcs) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetDhcpOptionsSetResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dhcpOptions Field Functions 
    bool hasDhcpOptions() const { return this->dhcpOptions_ != nullptr;};
    void deleteDhcpOptions() { this->dhcpOptions_ = nullptr;};
    inline const GetDhcpOptionsSetResponseBodyDhcpOptions & dhcpOptions() const { DARABONBA_PTR_GET_CONST(dhcpOptions_, GetDhcpOptionsSetResponseBodyDhcpOptions) };
    inline GetDhcpOptionsSetResponseBodyDhcpOptions dhcpOptions() { DARABONBA_PTR_GET(dhcpOptions_, GetDhcpOptionsSetResponseBodyDhcpOptions) };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptions(const GetDhcpOptionsSetResponseBodyDhcpOptions & dhcpOptions) { DARABONBA_PTR_SET_VALUE(dhcpOptions_, dhcpOptions) };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptions(GetDhcpOptionsSetResponseBodyDhcpOptions && dhcpOptions) { DARABONBA_PTR_SET_RVALUE(dhcpOptions_, dhcpOptions) };


    // dhcpOptionsSetDescription Field Functions 
    bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
    void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
    inline string dhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string dhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetName Field Functions 
    bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
    void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
    inline string dhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetDhcpOptionsSetResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDhcpOptionsSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetDhcpOptionsSetResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDhcpOptionsSetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetDhcpOptionsSetResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetDhcpOptionsSetResponseBodyTags>) };
    inline vector<GetDhcpOptionsSetResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetDhcpOptionsSetResponseBodyTags>) };
    inline GetDhcpOptionsSetResponseBody& setTags(const vector<GetDhcpOptionsSetResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetDhcpOptionsSetResponseBody& setTags(vector<GetDhcpOptionsSetResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The information about the virtual private cloud (VPC) that is associated with the DHCP options set.
    std::shared_ptr<vector<GetDhcpOptionsSetResponseBodyAssociateVpcs>> associateVpcs_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    // The configuration information about the DHCP options set.
    std::shared_ptr<GetDhcpOptionsSetResponseBodyDhcpOptions> dhcpOptions_ = nullptr;
    // The description of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetDescription_ = nullptr;
    // The ID of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetId_ = nullptr;
    // The name of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the DHCP options set belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the DHCP options set. Valid values:
    // 
    // *   **Available**: available
    // *   **InUse**: in use
    // *   **Deleted**: deleted
    // *   **Pending**: being configured
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<GetDhcpOptionsSetResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
