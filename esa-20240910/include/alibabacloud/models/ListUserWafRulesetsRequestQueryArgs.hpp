// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserWafRulesetsRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserWafRulesetsRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserWafRulesetsRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
    };
    ListUserWafRulesetsRequestQueryArgs() = default ;
    ListUserWafRulesetsRequestQueryArgs(const ListUserWafRulesetsRequestQueryArgs &) = default ;
    ListUserWafRulesetsRequestQueryArgs(ListUserWafRulesetsRequestQueryArgs &&) = default ;
    ListUserWafRulesetsRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserWafRulesetsRequestQueryArgs() = default ;
    ListUserWafRulesetsRequestQueryArgs& operator=(const ListUserWafRulesetsRequestQueryArgs &) = default ;
    ListUserWafRulesetsRequestQueryArgs& operator=(ListUserWafRulesetsRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->nameLike_ == nullptr && return this->orderBy_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline ListUserWafRulesetsRequestQueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListUserWafRulesetsRequestQueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListUserWafRulesetsRequestQueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


  protected:
    std::shared_ptr<bool> desc_ = nullptr;
    std::shared_ptr<string> nameLike_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
