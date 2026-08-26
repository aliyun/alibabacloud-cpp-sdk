// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKnowledgeBaseAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindingAppCount, bindingAppCount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalDocs, totalDocs_);
      DARABONBA_PTR_TO_JSON(TotalSizeBytes, totalSizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingAppCount, bindingAppCount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalDocs, totalDocs_);
      DARABONBA_PTR_FROM_JSON(TotalSizeBytes, totalSizeBytes_);
    };
    DescribeKnowledgeBaseAttributeResponseBody() = default ;
    DescribeKnowledgeBaseAttributeResponseBody(const DescribeKnowledgeBaseAttributeResponseBody &) = default ;
    DescribeKnowledgeBaseAttributeResponseBody(DescribeKnowledgeBaseAttributeResponseBody &&) = default ;
    DescribeKnowledgeBaseAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseAttributeResponseBody() = default ;
    DescribeKnowledgeBaseAttributeResponseBody& operator=(const DescribeKnowledgeBaseAttributeResponseBody &) = default ;
    DescribeKnowledgeBaseAttributeResponseBody& operator=(DescribeKnowledgeBaseAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingAppCount_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeBaseType_ == nullptr && this->knowledgeSpaceId_ == nullptr
        && this->name_ == nullptr && this->requestId_ == nullptr && this->searchMode_ == nullptr && this->shardCount_ == nullptr && this->status_ == nullptr
        && this->totalDocs_ == nullptr && this->totalSizeBytes_ == nullptr; };
    // bindingAppCount Field Functions 
    bool hasBindingAppCount() const { return this->bindingAppCount_ != nullptr;};
    void deleteBindingAppCount() { this->bindingAppCount_ = nullptr;};
    inline int32_t getBindingAppCount() const { DARABONBA_PTR_GET_DEFAULT(bindingAppCount_, 0) };
    inline DescribeKnowledgeBaseAttributeResponseBody& setBindingAppCount(int32_t bindingAppCount) { DARABONBA_PTR_SET_VALUE(bindingAppCount_, bindingAppCount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string getKnowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline DescribeKnowledgeBaseAttributeResponseBody& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeKnowledgeBaseAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalDocs Field Functions 
    bool hasTotalDocs() const { return this->totalDocs_ != nullptr;};
    void deleteTotalDocs() { this->totalDocs_ = nullptr;};
    inline int32_t getTotalDocs() const { DARABONBA_PTR_GET_DEFAULT(totalDocs_, 0) };
    inline DescribeKnowledgeBaseAttributeResponseBody& setTotalDocs(int32_t totalDocs) { DARABONBA_PTR_SET_VALUE(totalDocs_, totalDocs) };


    // totalSizeBytes Field Functions 
    bool hasTotalSizeBytes() const { return this->totalSizeBytes_ != nullptr;};
    void deleteTotalSizeBytes() { this->totalSizeBytes_ = nullptr;};
    inline int64_t getTotalSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(totalSizeBytes_, 0L) };
    inline DescribeKnowledgeBaseAttributeResponseBody& setTotalSizeBytes(int64_t totalSizeBytes) { DARABONBA_PTR_SET_VALUE(totalSizeBytes_, totalSizeBytes) };


  protected:
    // The number of AI applications bound to the knowledge base.
    shared_ptr<int32_t> bindingAppCount_ {};
    // The creation time.
    shared_ptr<string> creationTime_ {};
    // The description of the knowledge base.
    shared_ptr<string> description_ {};
    // The unique identifier of the knowledge base.
    shared_ptr<string> knowledgeBaseId_ {};
    // The type of the knowledge base. Valid values:
    // - PUBLIC
    // - PERSONAL
    shared_ptr<string> knowledgeBaseType_ {};
    // The ID of the knowledge space.
    shared_ptr<string> knowledgeSpaceId_ {};
    // The name of the knowledge base.
    shared_ptr<string> name_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The search mode. Valid values:
    // * balanced (default)
    // * precise
    // * semantic
    // * knn
    // * rrf
    shared_ptr<string> searchMode_ {};
    // The number of shards.
    shared_ptr<int32_t> shardCount_ {};
    // The status of the knowledge base.
    shared_ptr<string> status_ {};
    // The total number of documents.
    shared_ptr<int32_t> totalDocs_ {};
    // The total size in bytes.
    shared_ptr<int64_t> totalSizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
