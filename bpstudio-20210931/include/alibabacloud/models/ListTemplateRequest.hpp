// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ListTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTemplateRequest() = default ;
    ListTemplateRequest(const ListTemplateRequest &) = default ;
    ListTemplateRequest(ListTemplateRequest &&) = default ;
    ListTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateRequest() = default ;
    ListTemplateRequest& operator=(const ListTemplateRequest &) = default ;
    ListTemplateRequest& operator=(ListTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->orderType_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr
        && this->tagList_ != nullptr && this->type_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTemplateRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline int32_t nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, 0) };
    inline ListTemplateRequest& setNextToken(int32_t nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int64_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0L) };
    inline ListTemplateRequest& setOrderType(int64_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTemplateRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTemplateRequestTag>) };
    inline vector<ListTemplateRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTemplateRequestTag>) };
    inline ListTemplateRequest& setTag(const vector<ListTemplateRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTemplateRequest& setTag(vector<ListTemplateRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline int32_t tagList() const { DARABONBA_PTR_GET_DEFAULT(tagList_, 0) };
    inline ListTemplateRequest& setTagList(int32_t tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The keyword that is used to search for templates.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> nextToken_ = nullptr;
    // The criterion by which the returned templates are sorted. Valid values:
    // 
    // *   1: The templates are sorted by the time when they are updated.
    // *   2: The templates are sorted by the time when they are created.
    // *   3: The templates are sorted by the system.
    // *   4: The templates are sorted by the number of times that they are used.
    // *   If you specify an integer other than 1, 2, 3, and 4 or do not specify any value, the templates are sorted by the system.
    std::shared_ptr<int64_t> orderType_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<ListTemplateRequestTag>> tag_ = nullptr;
    // The tag that you want to use to query templates.
    std::shared_ptr<int32_t> tagList_ = nullptr;
    // The type of the templates to be returned. Valid values: public and private
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
