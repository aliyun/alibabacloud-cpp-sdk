// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ItemsUsage, itemsUsage_);
      DARABONBA_PTR_TO_JSON(Lists, lists_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemsUsage, itemsUsage_);
      DARABONBA_PTR_FROM_JSON(Lists, lists_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListListsResponseBody() = default ;
    ListListsResponseBody(const ListListsResponseBody &) = default ;
    ListListsResponseBody(ListListsResponseBody &&) = default ;
    ListListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsResponseBody() = default ;
    ListListsResponseBody& operator=(const ListListsResponseBody &) = default ;
    ListListsResponseBody& operator=(ListListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Lists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Lists& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(Length, length_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Lists& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(Length, length_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Lists() = default ;
      Lists(const Lists &) = default ;
      Lists(Lists &&) = default ;
      Lists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Lists() = default ;
      Lists& operator=(const Lists &) = default ;
      Lists& operator=(Lists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->kind_ == nullptr && this->length_ == nullptr && this->name_ == nullptr && this->updateTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Lists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Lists& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Lists& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // length Field Functions 
      bool hasLength() const { return this->length_ != nullptr;};
      void deleteLength() { this->length_ = nullptr;};
      inline int64_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0L) };
      inline Lists& setLength(int64_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Lists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Lists& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The list description.
      shared_ptr<string> description_ {};
      // The ID of the custom list.[](~~2850217~~)
      shared_ptr<int64_t> id_ {};
      // The list type.
      shared_ptr<string> kind_ {};
      // The length of the list information array, which indicates how many items the list contains.
      shared_ptr<int64_t> length_ {};
      // The list name.
      shared_ptr<string> name_ {};
      // The time when the list was last modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->itemsUsage_ == nullptr
        && this->lists_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr
        && this->usage_ == nullptr; };
    // itemsUsage Field Functions 
    bool hasItemsUsage() const { return this->itemsUsage_ != nullptr;};
    void deleteItemsUsage() { this->itemsUsage_ = nullptr;};
    inline int64_t getItemsUsage() const { DARABONBA_PTR_GET_DEFAULT(itemsUsage_, 0L) };
    inline ListListsResponseBody& setItemsUsage(int64_t itemsUsage) { DARABONBA_PTR_SET_VALUE(itemsUsage_, itemsUsage) };


    // lists Field Functions 
    bool hasLists() const { return this->lists_ != nullptr;};
    void deleteLists() { this->lists_ = nullptr;};
    inline const vector<ListListsResponseBody::Lists> & getLists() const { DARABONBA_PTR_GET_CONST(lists_, vector<ListListsResponseBody::Lists>) };
    inline vector<ListListsResponseBody::Lists> getLists() { DARABONBA_PTR_GET(lists_, vector<ListListsResponseBody::Lists>) };
    inline ListListsResponseBody& setLists(const vector<ListListsResponseBody::Lists> & lists) { DARABONBA_PTR_SET_VALUE(lists_, lists) };
    inline ListListsResponseBody& setLists(vector<ListListsResponseBody::Lists> && lists) { DARABONBA_PTR_SET_RVALUE(lists_, lists) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline ListListsResponseBody& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<int64_t> itemsUsage_ {};
    // The array that contains list information, including list data after paging.
    shared_ptr<vector<ListListsResponseBody::Lists>> lists_ {};
    // The page number returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of filtered lists.
    shared_ptr<int32_t> totalCount_ {};
    // The number of created lists.
    shared_ptr<int64_t> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
