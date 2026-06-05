// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPECIFICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPECIFICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListSpecificationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpecificationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpecificationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSpecificationsResponseBody() = default ;
    ListSpecificationsResponseBody(const ListSpecificationsResponseBody &) = default ;
    ListSpecificationsResponseBody(ListSpecificationsResponseBody &&) = default ;
    ListSpecificationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpecificationsResponseBody() = default ;
    ListSpecificationsResponseBody& operator=(const ListSpecificationsResponseBody &) = default ;
    ListSpecificationsResponseBody& operator=(ListSpecificationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Class, class_);
        DARABONBA_PTR_TO_JSON(Cores, cores_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Shard, shard_);
        DARABONBA_PTR_TO_JSON(Specification, specification_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Class, class_);
        DARABONBA_PTR_FROM_JSON(Cores, cores_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Shard, shard_);
        DARABONBA_PTR_FROM_JSON(Specification, specification_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
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
      virtual bool empty() const override { return this->class_ == nullptr
        && this->cores_ == nullptr && this->memory_ == nullptr && this->shard_ == nullptr && this->specification_ == nullptr && this->storage_ == nullptr; };
      // class Field Functions 
      bool hasClass() const { return this->class_ != nullptr;};
      void deleteClass() { this->class_ = nullptr;};
      inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
      inline Items& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
      inline Items& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Items& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // shard Field Functions 
      bool hasShard() const { return this->shard_ != nullptr;};
      void deleteShard() { this->shard_ = nullptr;};
      inline int32_t getShard() const { DARABONBA_PTR_GET_DEFAULT(shard_, 0) };
      inline Items& setShard(int32_t shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };


      // specification Field Functions 
      bool hasSpecification() const { return this->specification_ != nullptr;};
      void deleteSpecification() { this->specification_ = nullptr;};
      inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
      inline Items& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
      inline Items& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      shared_ptr<string> class_ {};
      shared_ptr<int32_t> cores_ {};
      shared_ptr<int32_t> memory_ {};
      shared_ptr<int32_t> shard_ {};
      // `RenderingSpec`
      shared_ptr<string> specification_ {};
      shared_ptr<int32_t> storage_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSpecificationsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSpecificationsResponseBody::Items>) };
    inline vector<ListSpecificationsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSpecificationsResponseBody::Items>) };
    inline ListSpecificationsResponseBody& setItems(const vector<ListSpecificationsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSpecificationsResponseBody& setItems(vector<ListSpecificationsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSpecificationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSpecificationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSpecificationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSpecificationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListSpecificationsResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
