// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFREENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFreeNodesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFreeNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperatingStates, operatingStates_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperatingStates, operatingStates_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListFreeNodesRequest() = default ;
    ListFreeNodesRequest(const ListFreeNodesRequest &) = default ;
    ListFreeNodesRequest(ListFreeNodesRequest &&) = default ;
    ListFreeNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeNodesRequest() = default ;
    ListFreeNodesRequest& operator=(const ListFreeNodesRequest &) = default ;
    ListFreeNodesRequest& operator=(ListFreeNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpnZone_ == nullptr
        && return this->machineType_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->operatingStates_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tags_ == nullptr; };
    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListFreeNodesRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListFreeNodesRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListFreeNodesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFreeNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operatingStates Field Functions 
    bool hasOperatingStates() const { return this->operatingStates_ != nullptr;};
    void deleteOperatingStates() { this->operatingStates_ = nullptr;};
    inline const vector<string> & operatingStates() const { DARABONBA_PTR_GET_CONST(operatingStates_, vector<string>) };
    inline vector<string> operatingStates() { DARABONBA_PTR_GET(operatingStates_, vector<string>) };
    inline ListFreeNodesRequest& setOperatingStates(const vector<string> & operatingStates) { DARABONBA_PTR_SET_VALUE(operatingStates_, operatingStates) };
    inline ListFreeNodesRequest& setOperatingStates(vector<string> && operatingStates) { DARABONBA_PTR_SET_RVALUE(operatingStates_, operatingStates) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListFreeNodesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListFreeNodesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListFreeNodesRequestTags>) };
    inline vector<ListFreeNodesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListFreeNodesRequestTags>) };
    inline ListFreeNodesRequest& setTags(const vector<ListFreeNodesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListFreeNodesRequest& setTags(vector<ListFreeNodesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The cluster number.
    std::shared_ptr<string> hpnZone_ = nullptr;
    // The instance type.
    std::shared_ptr<string> machineType_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The token that determines the start position of the query. Set this parameter to the value of the NextToken parameter that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The types of the returned nodes that are not used.
    std::shared_ptr<vector<string>> operatingStates_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListFreeNodesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
