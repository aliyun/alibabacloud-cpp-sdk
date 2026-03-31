// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListOpsItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpsItems, opsItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpsItems, opsItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOpsItemsResponseBody() = default ;
    ListOpsItemsResponseBody(const ListOpsItemsResponseBody &) = default ;
    ListOpsItemsResponseBody(ListOpsItemsResponseBody &&) = default ;
    ListOpsItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsItemsResponseBody() = default ;
    ListOpsItemsResponseBody& operator=(const ListOpsItemsResponseBody &) = default ;
    ListOpsItemsResponseBody& operator=(ListOpsItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpsItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpsItems& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(OpsItemId, opsItemId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, OpsItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(OpsItemId, opsItemId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      OpsItems() = default ;
      OpsItems(const OpsItems &) = default ;
      OpsItems(OpsItems &&) = default ;
      OpsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpsItems() = default ;
      OpsItems& operator=(const OpsItems &) = default ;
      OpsItems& operator=(OpsItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->createDate_ == nullptr && this->opsItemId_ == nullptr && this->priority_ == nullptr && this->resources_ == nullptr && this->severity_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->updateDate_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline OpsItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline OpsItems& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // opsItemId Field Functions 
      bool hasOpsItemId() const { return this->opsItemId_ != nullptr;};
      void deleteOpsItemId() { this->opsItemId_ = nullptr;};
      inline string getOpsItemId() const { DARABONBA_PTR_GET_DEFAULT(opsItemId_, "") };
      inline OpsItems& setOpsItemId(string opsItemId) { DARABONBA_PTR_SET_VALUE(opsItemId_, opsItemId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline OpsItems& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
      inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
      inline OpsItems& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline OpsItems& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline OpsItems& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline OpsItems& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OpsItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline OpsItems& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline OpsItems& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline OpsItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline OpsItems& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The category.
      shared_ptr<string> category_ {};
      // The time when the O\\&M item was created.
      shared_ptr<string> createDate_ {};
      // The ID of the O\\&M item.
      shared_ptr<string> opsItemId_ {};
      // The priority.
      shared_ptr<int32_t> priority_ {};
      // The Alibaba Resource Names (ARNs) of the associated resources.
      shared_ptr<vector<string>> resources_ {};
      // The severity level.
      shared_ptr<string> severity_ {};
      // The source business.
      shared_ptr<string> source_ {};
      // The status of the O\\&M item.
      shared_ptr<string> status_ {};
      // The tags.
      Darabonba::Json tags_ {};
      // The title of the O\\&M item.
      shared_ptr<string> title_ {};
      // The time when the O\\&M item was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->opsItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // opsItems Field Functions 
    bool hasOpsItems() const { return this->opsItems_ != nullptr;};
    void deleteOpsItems() { this->opsItems_ = nullptr;};
    inline const vector<ListOpsItemsResponseBody::OpsItems> & getOpsItems() const { DARABONBA_PTR_GET_CONST(opsItems_, vector<ListOpsItemsResponseBody::OpsItems>) };
    inline vector<ListOpsItemsResponseBody::OpsItems> getOpsItems() { DARABONBA_PTR_GET(opsItems_, vector<ListOpsItemsResponseBody::OpsItems>) };
    inline ListOpsItemsResponseBody& setOpsItems(const vector<ListOpsItemsResponseBody::OpsItems> & opsItems) { DARABONBA_PTR_SET_VALUE(opsItems_, opsItems) };
    inline ListOpsItemsResponseBody& setOpsItems(vector<ListOpsItemsResponseBody::OpsItems> && opsItems) { DARABONBA_PTR_SET_RVALUE(opsItems_, opsItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpsItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOpsItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The list of O\\&M items.
    shared_ptr<vector<ListOpsItemsResponseBody::OpsItems>> opsItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
