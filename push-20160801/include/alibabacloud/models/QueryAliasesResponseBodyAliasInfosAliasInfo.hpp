// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODYALIASINFOSALIASINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODYALIASINFOSALIASINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryAliasesResponseBodyAliasInfosAliasInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAliasesResponseBodyAliasInfosAliasInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAliasesResponseBodyAliasInfosAliasInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
    };
    QueryAliasesResponseBodyAliasInfosAliasInfo() = default ;
    QueryAliasesResponseBodyAliasInfosAliasInfo(const QueryAliasesResponseBodyAliasInfosAliasInfo &) = default ;
    QueryAliasesResponseBodyAliasInfosAliasInfo(QueryAliasesResponseBodyAliasInfosAliasInfo &&) = default ;
    QueryAliasesResponseBodyAliasInfosAliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAliasesResponseBodyAliasInfosAliasInfo() = default ;
    QueryAliasesResponseBodyAliasInfosAliasInfo& operator=(const QueryAliasesResponseBodyAliasInfosAliasInfo &) = default ;
    QueryAliasesResponseBodyAliasInfosAliasInfo& operator=(QueryAliasesResponseBodyAliasInfosAliasInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline QueryAliasesResponseBodyAliasInfosAliasInfo& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
