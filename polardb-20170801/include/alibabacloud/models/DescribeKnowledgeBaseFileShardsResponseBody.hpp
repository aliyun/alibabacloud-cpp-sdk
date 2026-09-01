// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESHARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESHARDSRESPONSEBODY_HPP_
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
  class DescribeKnowledgeBaseFileShardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseFileShardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Shards, shards_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseFileShardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Shards, shards_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKnowledgeBaseFileShardsResponseBody() = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(const DescribeKnowledgeBaseFileShardsResponseBody &) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(DescribeKnowledgeBaseFileShardsResponseBody &&) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseFileShardsResponseBody() = default ;
    DescribeKnowledgeBaseFileShardsResponseBody& operator=(const DescribeKnowledgeBaseFileShardsResponseBody &) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody& operator=(DescribeKnowledgeBaseFileShardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Shards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Shards& obj) { 
        DARABONBA_PTR_TO_JSON(Headings, headings_);
        DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_TO_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_TO_JSON(ShardIndex, shardIndex_);
      };
      friend void from_json(const Darabonba::Json& j, Shards& obj) { 
        DARABONBA_PTR_FROM_JSON(Headings, headings_);
        DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_FROM_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_FROM_JSON(ShardIndex, shardIndex_);
      };
      Shards() = default ;
      Shards(const Shards &) = default ;
      Shards(Shards &&) = default ;
      Shards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Shards() = default ;
      Shards& operator=(const Shards &) = default ;
      Shards& operator=(Shards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->headings_ == nullptr
        && this->pageNumbers_ == nullptr && this->shardContent_ == nullptr && this->shardIndex_ == nullptr; };
      // headings Field Functions 
      bool hasHeadings() const { return this->headings_ != nullptr;};
      void deleteHeadings() { this->headings_ = nullptr;};
      inline const vector<string> & getHeadings() const { DARABONBA_PTR_GET_CONST(headings_, vector<string>) };
      inline vector<string> getHeadings() { DARABONBA_PTR_GET(headings_, vector<string>) };
      inline Shards& setHeadings(const vector<string> & headings) { DARABONBA_PTR_SET_VALUE(headings_, headings) };
      inline Shards& setHeadings(vector<string> && headings) { DARABONBA_PTR_SET_RVALUE(headings_, headings) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline const vector<string> & getPageNumbers() const { DARABONBA_PTR_GET_CONST(pageNumbers_, vector<string>) };
      inline vector<string> getPageNumbers() { DARABONBA_PTR_GET(pageNumbers_, vector<string>) };
      inline Shards& setPageNumbers(const vector<string> & pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };
      inline Shards& setPageNumbers(vector<string> && pageNumbers) { DARABONBA_PTR_SET_RVALUE(pageNumbers_, pageNumbers) };


      // shardContent Field Functions 
      bool hasShardContent() const { return this->shardContent_ != nullptr;};
      void deleteShardContent() { this->shardContent_ = nullptr;};
      inline string getShardContent() const { DARABONBA_PTR_GET_DEFAULT(shardContent_, "") };
      inline Shards& setShardContent(string shardContent) { DARABONBA_PTR_SET_VALUE(shardContent_, shardContent) };


      // shardIndex Field Functions 
      bool hasShardIndex() const { return this->shardIndex_ != nullptr;};
      void deleteShardIndex() { this->shardIndex_ = nullptr;};
      inline int32_t getShardIndex() const { DARABONBA_PTR_GET_DEFAULT(shardIndex_, 0) };
      inline Shards& setShardIndex(int32_t shardIndex) { DARABONBA_PTR_SET_VALUE(shardIndex_, shardIndex) };


    protected:
      shared_ptr<vector<string>> headings_ {};
      shared_ptr<vector<string>> pageNumbers_ {};
      shared_ptr<string> shardContent_ {};
      shared_ptr<int32_t> shardIndex_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->shards_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shards Field Functions 
    bool hasShards() const { return this->shards_ != nullptr;};
    void deleteShards() { this->shards_ = nullptr;};
    inline const vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> & getShards() const { DARABONBA_PTR_GET_CONST(shards_, vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>) };
    inline vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> getShards() { DARABONBA_PTR_GET(shards_, vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setShards(const vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> & shards) { DARABONBA_PTR_SET_VALUE(shards_, shards) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setShards(vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> && shards) { DARABONBA_PTR_SET_RVALUE(shards_, shards) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>> shards_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
