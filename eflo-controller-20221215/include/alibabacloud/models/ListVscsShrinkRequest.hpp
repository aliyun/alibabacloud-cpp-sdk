// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSCSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVSCSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVscsShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListVscsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVscsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VscName, vscName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVscsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VscName, vscName_);
    };
    ListVscsShrinkRequest() = default ;
    ListVscsShrinkRequest(const ListVscsShrinkRequest &) = default ;
    ListVscsShrinkRequest(ListVscsShrinkRequest &&) = default ;
    ListVscsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVscsShrinkRequest() = default ;
    ListVscsShrinkRequest& operator=(const ListVscsShrinkRequest &) = default ;
    ListVscsShrinkRequest& operator=(ListVscsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->nodeIdsShrink_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr && return this->vscName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVscsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVscsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeIdsShrink Field Functions 
    bool hasNodeIdsShrink() const { return this->nodeIdsShrink_ != nullptr;};
    void deleteNodeIdsShrink() { this->nodeIdsShrink_ = nullptr;};
    inline string nodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdsShrink_, "") };
    inline ListVscsShrinkRequest& setNodeIdsShrink(string nodeIdsShrink) { DARABONBA_PTR_SET_VALUE(nodeIdsShrink_, nodeIdsShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVscsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVscsShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVscsShrinkRequestTag>) };
    inline vector<ListVscsShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListVscsShrinkRequestTag>) };
    inline ListVscsShrinkRequest& setTag(const vector<ListVscsShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVscsShrinkRequest& setTag(vector<ListVscsShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vscName Field Functions 
    bool hasVscName() const { return this->vscName_ != nullptr;};
    void deleteVscName() { this->vscName_ = nullptr;};
    inline string vscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
    inline ListVscsShrinkRequest& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


  protected:
    // The maximum number of data entries to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The IDs of the nodes.
    std::shared_ptr<string> nodeIdsShrink_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListVscsShrinkRequestTag>> tag_ = nullptr;
    // The VSC name.
    std::shared_ptr<string> vscName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
