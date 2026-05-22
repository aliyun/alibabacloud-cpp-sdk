// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
    };
    ListListsRequest() = default ;
    ListListsRequest(const ListListsRequest &) = default ;
    ListListsRequest(ListListsRequest &&) = default ;
    ListListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsRequest() = default ;
    ListListsRequest& operator=(const ListListsRequest &) = default ;
    ListListsRequest& operator=(ListListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(DescriptionLike, descriptionLike_);
        DARABONBA_PTR_TO_JSON(IdLike, idLike_);
        DARABONBA_PTR_TO_JSON(ItemLike, itemLike_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(NameItemLike, nameItemLike_);
        DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
        DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(DescriptionLike, descriptionLike_);
        DARABONBA_PTR_FROM_JSON(IdLike, idLike_);
        DARABONBA_PTR_FROM_JSON(ItemLike, itemLike_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(NameItemLike, nameItemLike_);
        DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
        DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      };
      QueryArgs() = default ;
      QueryArgs(const QueryArgs &) = default ;
      QueryArgs(QueryArgs &&) = default ;
      QueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryArgs() = default ;
      QueryArgs& operator=(const QueryArgs &) = default ;
      QueryArgs& operator=(QueryArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->descriptionLike_ == nullptr && this->idLike_ == nullptr && this->itemLike_ == nullptr && this->kind_ == nullptr && this->nameItemLike_ == nullptr
        && this->nameLike_ == nullptr && this->orderBy_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline bool getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
      inline QueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // descriptionLike Field Functions 
      bool hasDescriptionLike() const { return this->descriptionLike_ != nullptr;};
      void deleteDescriptionLike() { this->descriptionLike_ = nullptr;};
      inline string getDescriptionLike() const { DARABONBA_PTR_GET_DEFAULT(descriptionLike_, "") };
      inline QueryArgs& setDescriptionLike(string descriptionLike) { DARABONBA_PTR_SET_VALUE(descriptionLike_, descriptionLike) };


      // idLike Field Functions 
      bool hasIdLike() const { return this->idLike_ != nullptr;};
      void deleteIdLike() { this->idLike_ = nullptr;};
      inline string getIdLike() const { DARABONBA_PTR_GET_DEFAULT(idLike_, "") };
      inline QueryArgs& setIdLike(string idLike) { DARABONBA_PTR_SET_VALUE(idLike_, idLike) };


      // itemLike Field Functions 
      bool hasItemLike() const { return this->itemLike_ != nullptr;};
      void deleteItemLike() { this->itemLike_ = nullptr;};
      inline string getItemLike() const { DARABONBA_PTR_GET_DEFAULT(itemLike_, "") };
      inline QueryArgs& setItemLike(string itemLike) { DARABONBA_PTR_SET_VALUE(itemLike_, itemLike) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline QueryArgs& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // nameItemLike Field Functions 
      bool hasNameItemLike() const { return this->nameItemLike_ != nullptr;};
      void deleteNameItemLike() { this->nameItemLike_ = nullptr;};
      inline string getNameItemLike() const { DARABONBA_PTR_GET_DEFAULT(nameItemLike_, "") };
      inline QueryArgs& setNameItemLike(string nameItemLike) { DARABONBA_PTR_SET_VALUE(nameItemLike_, nameItemLike) };


      // nameLike Field Functions 
      bool hasNameLike() const { return this->nameLike_ != nullptr;};
      void deleteNameLike() { this->nameLike_ = nullptr;};
      inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
      inline QueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


      // orderBy Field Functions 
      bool hasOrderBy() const { return this->orderBy_ != nullptr;};
      void deleteOrderBy() { this->orderBy_ = nullptr;};
      inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
      inline QueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    protected:
      // Specifies whether to sort the returned data in descending order.
      shared_ptr<bool> desc_ {};
      // The list description for fuzzy search.
      shared_ptr<string> descriptionLike_ {};
      // The list ID for fuzzy search.
      shared_ptr<string> idLike_ {};
      // The list content for fuzzy search.
      shared_ptr<string> itemLike_ {};
      // The type of the custom list.
      shared_ptr<string> kind_ {};
      // The list name and content for fuzzy search.
      shared_ptr<string> nameItemLike_ {};
      // The list name for fuzzy search.
      shared_ptr<string> nameLike_ {};
      // The column by which you want to sort the returned data.
      shared_ptr<string> orderBy_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->queryArgs_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListListsRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListListsRequest::QueryArgs) };
    inline ListListsRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListListsRequest::QueryArgs) };
    inline ListListsRequest& setQueryArgs(const ListListsRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListListsRequest& setQueryArgs(ListListsRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The query arguments in the JSON format, which contain filter conditions.
    shared_ptr<ListListsRequest::QueryArgs> queryArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
