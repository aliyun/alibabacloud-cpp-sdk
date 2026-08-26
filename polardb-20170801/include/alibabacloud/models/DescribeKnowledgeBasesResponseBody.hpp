// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKnowledgeBasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKnowledgeBasesResponseBody() = default ;
    DescribeKnowledgeBasesResponseBody(const DescribeKnowledgeBasesResponseBody &) = default ;
    DescribeKnowledgeBasesResponseBody(DescribeKnowledgeBasesResponseBody &&) = default ;
    DescribeKnowledgeBasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBasesResponseBody() = default ;
    DescribeKnowledgeBasesResponseBody& operator=(const DescribeKnowledgeBasesResponseBody &) = default ;
    DescribeKnowledgeBasesResponseBody& operator=(DescribeKnowledgeBasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BindingAppCount, bindingAppCount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalDocs, totalDocs_);
        DARABONBA_PTR_TO_JSON(TotalSizeBytes, totalSizeBytes_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BindingAppCount, bindingAppCount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalDocs, totalDocs_);
        DARABONBA_PTR_FROM_JSON(TotalSizeBytes, totalSizeBytes_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindingAppCount_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeSpaceId_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr && this->totalDocs_ == nullptr && this->totalSizeBytes_ == nullptr; };
      // bindingAppCount Field Functions 
      bool hasBindingAppCount() const { return this->bindingAppCount_ != nullptr;};
      void deleteBindingAppCount() { this->bindingAppCount_ = nullptr;};
      inline int32_t getBindingAppCount() const { DARABONBA_PTR_GET_DEFAULT(bindingAppCount_, 0) };
      inline Items& setBindingAppCount(int32_t bindingAppCount) { DARABONBA_PTR_SET_VALUE(bindingAppCount_, bindingAppCount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Items& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Items& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // knowledgeSpaceId Field Functions 
      bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
      void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
      inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
      inline Items& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalDocs Field Functions 
      bool hasTotalDocs() const { return this->totalDocs_ != nullptr;};
      void deleteTotalDocs() { this->totalDocs_ = nullptr;};
      inline int32_t getTotalDocs() const { DARABONBA_PTR_GET_DEFAULT(totalDocs_, 0) };
      inline Items& setTotalDocs(int32_t totalDocs) { DARABONBA_PTR_SET_VALUE(totalDocs_, totalDocs) };


      // totalSizeBytes Field Functions 
      bool hasTotalSizeBytes() const { return this->totalSizeBytes_ != nullptr;};
      void deleteTotalSizeBytes() { this->totalSizeBytes_ = nullptr;};
      inline int64_t getTotalSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(totalSizeBytes_, 0L) };
      inline Items& setTotalSizeBytes(int64_t totalSizeBytes) { DARABONBA_PTR_SET_VALUE(totalSizeBytes_, totalSizeBytes) };


    protected:
      // The number of AI applications bound to the knowledge base.
      shared_ptr<int32_t> bindingAppCount_ {};
      // The creation time.
      shared_ptr<string> creationTime_ {};
      // The description of the knowledge base.
      shared_ptr<string> description_ {};
      // The unique identifier of the knowledge base.
      shared_ptr<string> knowledgeBaseId_ {};
      // The ID of the knowledge space.
      shared_ptr<string> knowledgeSpaceId_ {};
      // The name of the knowledge base.
      shared_ptr<string> name_ {};
      // The status of the knowledge base.
      shared_ptr<string> status_ {};
      // The total number of documents.
      shared_ptr<int32_t> totalDocs_ {};
      // The total size in bytes.
      shared_ptr<int64_t> totalSizeBytes_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeKnowledgeBasesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeKnowledgeBasesResponseBody::Items>) };
    inline vector<DescribeKnowledgeBasesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeKnowledgeBasesResponseBody::Items>) };
    inline DescribeKnowledgeBasesResponseBody& setItems(const vector<DescribeKnowledgeBasesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeKnowledgeBasesResponseBody& setItems(vector<DescribeKnowledgeBasesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKnowledgeBasesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKnowledgeBasesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKnowledgeBasesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of knowledge bases.
    shared_ptr<vector<DescribeKnowledgeBasesResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **30**, **50**, and **100**.
    //                               
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
