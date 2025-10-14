// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DescriptionLike, descriptionLike_);
      DARABONBA_PTR_TO_JSON(IdLike, idLike_);
      DARABONBA_PTR_TO_JSON(ItemLike, itemLike_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(NameItemLike, nameItemLike_);
      DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DescriptionLike, descriptionLike_);
      DARABONBA_PTR_FROM_JSON(IdLike, idLike_);
      DARABONBA_PTR_FROM_JSON(ItemLike, itemLike_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(NameItemLike, nameItemLike_);
      DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
    };
    ListListsRequestQueryArgs() = default ;
    ListListsRequestQueryArgs(const ListListsRequestQueryArgs &) = default ;
    ListListsRequestQueryArgs(ListListsRequestQueryArgs &&) = default ;
    ListListsRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsRequestQueryArgs() = default ;
    ListListsRequestQueryArgs& operator=(const ListListsRequestQueryArgs &) = default ;
    ListListsRequestQueryArgs& operator=(ListListsRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->descriptionLike_ == nullptr && return this->idLike_ == nullptr && return this->itemLike_ == nullptr && return this->kind_ == nullptr && return this->nameItemLike_ == nullptr
        && return this->nameLike_ == nullptr && return this->orderBy_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline ListListsRequestQueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // descriptionLike Field Functions 
    bool hasDescriptionLike() const { return this->descriptionLike_ != nullptr;};
    void deleteDescriptionLike() { this->descriptionLike_ = nullptr;};
    inline string descriptionLike() const { DARABONBA_PTR_GET_DEFAULT(descriptionLike_, "") };
    inline ListListsRequestQueryArgs& setDescriptionLike(string descriptionLike) { DARABONBA_PTR_SET_VALUE(descriptionLike_, descriptionLike) };


    // idLike Field Functions 
    bool hasIdLike() const { return this->idLike_ != nullptr;};
    void deleteIdLike() { this->idLike_ = nullptr;};
    inline string idLike() const { DARABONBA_PTR_GET_DEFAULT(idLike_, "") };
    inline ListListsRequestQueryArgs& setIdLike(string idLike) { DARABONBA_PTR_SET_VALUE(idLike_, idLike) };


    // itemLike Field Functions 
    bool hasItemLike() const { return this->itemLike_ != nullptr;};
    void deleteItemLike() { this->itemLike_ = nullptr;};
    inline string itemLike() const { DARABONBA_PTR_GET_DEFAULT(itemLike_, "") };
    inline ListListsRequestQueryArgs& setItemLike(string itemLike) { DARABONBA_PTR_SET_VALUE(itemLike_, itemLike) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListListsRequestQueryArgs& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // nameItemLike Field Functions 
    bool hasNameItemLike() const { return this->nameItemLike_ != nullptr;};
    void deleteNameItemLike() { this->nameItemLike_ = nullptr;};
    inline string nameItemLike() const { DARABONBA_PTR_GET_DEFAULT(nameItemLike_, "") };
    inline ListListsRequestQueryArgs& setNameItemLike(string nameItemLike) { DARABONBA_PTR_SET_VALUE(nameItemLike_, nameItemLike) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListListsRequestQueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListListsRequestQueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


  protected:
    // Specifies whether to sort the returned data in descending order.
    std::shared_ptr<bool> desc_ = nullptr;
    // The list description for fuzzy search.
    std::shared_ptr<string> descriptionLike_ = nullptr;
    // The list ID for fuzzy search.
    std::shared_ptr<string> idLike_ = nullptr;
    // The list content for fuzzy search.
    std::shared_ptr<string> itemLike_ = nullptr;
    // The type of the custom list.
    std::shared_ptr<string> kind_ = nullptr;
    // The list name and content for fuzzy search.
    std::shared_ptr<string> nameItemLike_ = nullptr;
    // The list name for fuzzy search.
    std::shared_ptr<string> nameLike_ = nullptr;
    // The column by which you want to sort the returned data.
    std::shared_ptr<string> orderBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
