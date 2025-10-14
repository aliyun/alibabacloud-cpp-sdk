// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValueLike, configValueLike_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdNameLike, idNameLike_);
      DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValueLike, configValueLike_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdNameLike, idNameLike_);
      DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListWafRulesRequestQueryArgs() = default ;
    ListWafRulesRequestQueryArgs(const ListWafRulesRequestQueryArgs &) = default ;
    ListWafRulesRequestQueryArgs(ListWafRulesRequestQueryArgs &&) = default ;
    ListWafRulesRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesRequestQueryArgs() = default ;
    ListWafRulesRequestQueryArgs& operator=(const ListWafRulesRequestQueryArgs &) = default ;
    ListWafRulesRequestQueryArgs& operator=(ListWafRulesRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configValueLike_ == nullptr
        && return this->desc_ == nullptr && return this->id_ == nullptr && return this->idNameLike_ == nullptr && return this->nameLike_ == nullptr && return this->orderBy_ == nullptr
        && return this->status_ == nullptr; };
    // configValueLike Field Functions 
    bool hasConfigValueLike() const { return this->configValueLike_ != nullptr;};
    void deleteConfigValueLike() { this->configValueLike_ = nullptr;};
    inline string configValueLike() const { DARABONBA_PTR_GET_DEFAULT(configValueLike_, "") };
    inline ListWafRulesRequestQueryArgs& setConfigValueLike(string configValueLike) { DARABONBA_PTR_SET_VALUE(configValueLike_, configValueLike) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline ListWafRulesRequestQueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafRulesRequestQueryArgs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idNameLike Field Functions 
    bool hasIdNameLike() const { return this->idNameLike_ != nullptr;};
    void deleteIdNameLike() { this->idNameLike_ = nullptr;};
    inline string idNameLike() const { DARABONBA_PTR_GET_DEFAULT(idNameLike_, "") };
    inline ListWafRulesRequestQueryArgs& setIdNameLike(string idNameLike) { DARABONBA_PTR_SET_VALUE(idNameLike_, idNameLike) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListWafRulesRequestQueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListWafRulesRequestQueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafRulesRequestQueryArgs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Fuzzy search for values in IP access control.
    std::shared_ptr<string> configValueLike_ = nullptr;
    // Whether to reverse the sorting result.
    std::shared_ptr<bool> desc_ = nullptr;
    // Exact query for WAF rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Fuzzy query for WAF rule ID or name.
    std::shared_ptr<string> idNameLike_ = nullptr;
    // Fuzzy query for WAF rule name.
    std::shared_ptr<string> nameLike_ = nullptr;
    // Sort the returned list by the specified column.
    std::shared_ptr<string> orderBy_ = nullptr;
    // Exact query for WAF rule status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
