// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesetsRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(AnyLike, anyLike_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(AnyLike, anyLike_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
    };
    ListWafRulesetsRequestQueryArgs() = default ;
    ListWafRulesetsRequestQueryArgs(const ListWafRulesetsRequestQueryArgs &) = default ;
    ListWafRulesetsRequestQueryArgs(ListWafRulesetsRequestQueryArgs &&) = default ;
    ListWafRulesetsRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsRequestQueryArgs() = default ;
    ListWafRulesetsRequestQueryArgs& operator=(const ListWafRulesetsRequestQueryArgs &) = default ;
    ListWafRulesetsRequestQueryArgs& operator=(ListWafRulesetsRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anyLike_ != nullptr
        && this->desc_ != nullptr && this->nameLike_ != nullptr && this->orderBy_ != nullptr; };
    // anyLike Field Functions 
    bool hasAnyLike() const { return this->anyLike_ != nullptr;};
    void deleteAnyLike() { this->anyLike_ = nullptr;};
    inline string anyLike() const { DARABONBA_PTR_GET_DEFAULT(anyLike_, "") };
    inline ListWafRulesetsRequestQueryArgs& setAnyLike(string anyLike) { DARABONBA_PTR_SET_VALUE(anyLike_, anyLike) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline ListWafRulesetsRequestQueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListWafRulesetsRequestQueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListWafRulesetsRequestQueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


  protected:
    // Fuzzy search for rule set ID, rule set name, rule ID, and rule name.
    std::shared_ptr<string> anyLike_ = nullptr;
    // Whether to sort in descending order.
    std::shared_ptr<bool> desc_ = nullptr;
    // Fuzzy search for rule set name.
    std::shared_ptr<string> nameLike_ = nullptr;
    // Specify the column to sort by.
    std::shared_ptr<string> orderBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
