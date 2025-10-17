// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODYVSCS_HPP_
#define ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODYVSCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVscsResponseBodyVscsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListVscsResponseBodyVscs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVscsResponseBodyVscs& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
      DARABONBA_PTR_TO_JSON(VscName, vscName_);
      DARABONBA_PTR_TO_JSON(VscType, vscType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVscsResponseBodyVscs& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      DARABONBA_PTR_FROM_JSON(VscName, vscName_);
      DARABONBA_PTR_FROM_JSON(VscType, vscType_);
    };
    ListVscsResponseBodyVscs() = default ;
    ListVscsResponseBodyVscs(const ListVscsResponseBodyVscs &) = default ;
    ListVscsResponseBodyVscs(ListVscsResponseBodyVscs &&) = default ;
    ListVscsResponseBodyVscs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVscsResponseBodyVscs() = default ;
    ListVscsResponseBodyVscs& operator=(const ListVscsResponseBodyVscs &) = default ;
    ListVscsResponseBodyVscs& operator=(ListVscsResponseBodyVscs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vscId_ == nullptr && return this->vscName_ == nullptr
        && return this->vscType_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListVscsResponseBodyVscs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVscsResponseBodyVscs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVscsResponseBodyVscs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVscsResponseBodyVscsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVscsResponseBodyVscsTags>) };
    inline vector<Models::ListVscsResponseBodyVscsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVscsResponseBodyVscsTags>) };
    inline ListVscsResponseBodyVscs& setTags(const vector<Models::ListVscsResponseBodyVscsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVscsResponseBodyVscs& setTags(vector<Models::ListVscsResponseBodyVscsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline ListVscsResponseBodyVscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    // vscName Field Functions 
    bool hasVscName() const { return this->vscName_ != nullptr;};
    void deleteVscName() { this->vscName_ = nullptr;};
    inline string vscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
    inline ListVscsResponseBodyVscs& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


    // vscType Field Functions 
    bool hasVscType() const { return this->vscType_ != nullptr;};
    void deleteVscType() { this->vscType_ = nullptr;};
    inline string vscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
    inline ListVscsResponseBodyVscs& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


  protected:
    // The ID of the Lingjun node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The VSC status.
    // 
    // Valid values:
    // 
    // *   Creating
    // *   Normal
    // *   Deleting
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListVscsResponseBodyVscsTags>> tags_ = nullptr;
    // The VSC ID.
    std::shared_ptr<string> vscId_ = nullptr;
    // The custom name of the VSC.
    std::shared_ptr<string> vscName_ = nullptr;
    // The VSC type. Valid values: primary and standard.
    std::shared_ptr<string> vscType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
