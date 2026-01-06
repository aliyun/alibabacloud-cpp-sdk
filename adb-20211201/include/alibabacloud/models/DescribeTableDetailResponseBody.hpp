// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AvgSize, avgSize_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AvgSize, avgSize_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTableDetailResponseBody() = default ;
    DescribeTableDetailResponseBody(const DescribeTableDetailResponseBody &) = default ;
    DescribeTableDetailResponseBody(DescribeTableDetailResponseBody &&) = default ;
    DescribeTableDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableDetailResponseBody() = default ;
    DescribeTableDetailResponseBody& operator=(const DescribeTableDetailResponseBody &) = default ;
    DescribeTableDetailResponseBody& operator=(DescribeTableDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Shard, shard_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Shard, shard_);
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
      class Shard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Shard& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, Shard& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        Shard() = default ;
        Shard(const Shard &) = default ;
        Shard(Shard &&) = default ;
        Shard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Shard() = default ;
        Shard& operator=(const Shard &) = default ;
        Shard& operator=(Shard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->size_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline Shard& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Shard& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // The shard ID. Only the numeric part of the shard name is returned.
        shared_ptr<int32_t> id_ {};
        // The number of rows in the table.
        shared_ptr<int64_t> size_ {};
      };

      virtual bool empty() const override { return this->shard_ == nullptr; };
      // shard Field Functions 
      bool hasShard() const { return this->shard_ != nullptr;};
      void deleteShard() { this->shard_ = nullptr;};
      inline const vector<Items::Shard> & getShard() const { DARABONBA_PTR_GET_CONST(shard_, vector<Items::Shard>) };
      inline vector<Items::Shard> getShard() { DARABONBA_PTR_GET(shard_, vector<Items::Shard>) };
      inline Items& setShard(const vector<Items::Shard> & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
      inline Items& setShard(vector<Items::Shard> && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


    protected:
      // The queried shards.
      shared_ptr<vector<Items::Shard>> shard_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->avgSize_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeTableDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // avgSize Field Functions 
    bool hasAvgSize() const { return this->avgSize_ != nullptr;};
    void deleteAvgSize() { this->avgSize_ = nullptr;};
    inline string getAvgSize() const { DARABONBA_PTR_GET_DEFAULT(avgSize_, "") };
    inline DescribeTableDetailResponseBody& setAvgSize(string avgSize) { DARABONBA_PTR_SET_VALUE(avgSize_, avgSize) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTableDetailResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeTableDetailResponseBody::Items) };
    inline DescribeTableDetailResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeTableDetailResponseBody::Items) };
    inline DescribeTableDetailResponseBody& setItems(const DescribeTableDetailResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTableDetailResponseBody& setItems(DescribeTableDetailResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeTableDetailResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeTableDetailResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTableDetailResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The detailed reason why the access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // The average number of rows in a shard.
    shared_ptr<string> avgSize_ {};
    // The queried data distribution.
    shared_ptr<DescribeTableDetailResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
