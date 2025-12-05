// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESBYKEYIDRESPONSEBODYALIASES_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESBYKEYIDRESPONSEBODYALIASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliasesByKeyIdResponseBodyAliasesAlias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListAliasesByKeyIdResponseBodyAliases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesByKeyIdResponseBodyAliases& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesByKeyIdResponseBodyAliases& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
    };
    ListAliasesByKeyIdResponseBodyAliases() = default ;
    ListAliasesByKeyIdResponseBodyAliases(const ListAliasesByKeyIdResponseBodyAliases &) = default ;
    ListAliasesByKeyIdResponseBodyAliases(ListAliasesByKeyIdResponseBodyAliases &&) = default ;
    ListAliasesByKeyIdResponseBodyAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesByKeyIdResponseBodyAliases() = default ;
    ListAliasesByKeyIdResponseBodyAliases& operator=(const ListAliasesByKeyIdResponseBodyAliases &) = default ;
    ListAliasesByKeyIdResponseBodyAliases& operator=(ListAliasesByKeyIdResponseBodyAliases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias>) };
    inline vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias> alias() { DARABONBA_PTR_GET(alias_, vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias>) };
    inline ListAliasesByKeyIdResponseBodyAliases& setAlias(const vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline ListAliasesByKeyIdResponseBodyAliases& setAlias(vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


  protected:
    std::shared_ptr<vector<Models::ListAliasesByKeyIdResponseBodyAliasesAlias>> alias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
