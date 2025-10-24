// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREEHYPERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFREEHYPERNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFreeHyperNodesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFreeHyperNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeHyperNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeHyperNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListFreeHyperNodesRequest() = default ;
    ListFreeHyperNodesRequest(const ListFreeHyperNodesRequest &) = default ;
    ListFreeHyperNodesRequest(ListFreeHyperNodesRequest &&) = default ;
    ListFreeHyperNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeHyperNodesRequest() = default ;
    ListFreeHyperNodesRequest& operator=(const ListFreeHyperNodesRequest &) = default ;
    ListFreeHyperNodesRequest& operator=(ListFreeHyperNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpnZone_ == nullptr
        && return this->machineType_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr; };
    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListFreeHyperNodesRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListFreeHyperNodesRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFreeHyperNodesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFreeHyperNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListFreeHyperNodesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListFreeHyperNodesRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListFreeHyperNodesRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListFreeHyperNodesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListFreeHyperNodesRequestTags>) };
    inline vector<ListFreeHyperNodesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListFreeHyperNodesRequestTags>) };
    inline ListFreeHyperNodesRequest& setTags(const vector<ListFreeHyperNodesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListFreeHyperNodesRequest& setTags(vector<ListFreeHyperNodesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> hpnZone_ = nullptr;
    std::shared_ptr<string> machineType_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<vector<ListFreeHyperNodesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
