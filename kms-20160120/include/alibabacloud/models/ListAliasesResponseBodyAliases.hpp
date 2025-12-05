// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODYALIASES_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODYALIASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliasesResponseBodyAliasesAlias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListAliasesResponseBodyAliases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesResponseBodyAliases& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesResponseBodyAliases& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
    };
    ListAliasesResponseBodyAliases() = default ;
    ListAliasesResponseBodyAliases(const ListAliasesResponseBodyAliases &) = default ;
    ListAliasesResponseBodyAliases(ListAliasesResponseBodyAliases &&) = default ;
    ListAliasesResponseBodyAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesResponseBodyAliases() = default ;
    ListAliasesResponseBodyAliases& operator=(const ListAliasesResponseBodyAliases &) = default ;
    ListAliasesResponseBodyAliases& operator=(ListAliasesResponseBodyAliases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<Models::ListAliasesResponseBodyAliasesAlias> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<Models::ListAliasesResponseBodyAliasesAlias>) };
    inline vector<Models::ListAliasesResponseBodyAliasesAlias> alias() { DARABONBA_PTR_GET(alias_, vector<Models::ListAliasesResponseBodyAliasesAlias>) };
    inline ListAliasesResponseBodyAliases& setAlias(const vector<Models::ListAliasesResponseBodyAliasesAlias> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline ListAliasesResponseBodyAliases& setAlias(vector<Models::ListAliasesResponseBodyAliasesAlias> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


  protected:
    std::shared_ptr<vector<Models::ListAliasesResponseBodyAliasesAlias>> alias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
