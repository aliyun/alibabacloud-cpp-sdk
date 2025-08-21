// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODYALIASINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODYALIASINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAliasesResponseBodyAliasInfosAliasInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryAliasesResponseBodyAliasInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAliasesResponseBodyAliasInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AliasInfo, aliasInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAliasesResponseBodyAliasInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasInfo, aliasInfo_);
    };
    QueryAliasesResponseBodyAliasInfos() = default ;
    QueryAliasesResponseBodyAliasInfos(const QueryAliasesResponseBodyAliasInfos &) = default ;
    QueryAliasesResponseBodyAliasInfos(QueryAliasesResponseBodyAliasInfos &&) = default ;
    QueryAliasesResponseBodyAliasInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAliasesResponseBodyAliasInfos() = default ;
    QueryAliasesResponseBodyAliasInfos& operator=(const QueryAliasesResponseBodyAliasInfos &) = default ;
    QueryAliasesResponseBodyAliasInfos& operator=(QueryAliasesResponseBodyAliasInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasInfo_ != nullptr; };
    // aliasInfo Field Functions 
    bool hasAliasInfo() const { return this->aliasInfo_ != nullptr;};
    void deleteAliasInfo() { this->aliasInfo_ = nullptr;};
    inline const vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo> & aliasInfo() const { DARABONBA_PTR_GET_CONST(aliasInfo_, vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo>) };
    inline vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo> aliasInfo() { DARABONBA_PTR_GET(aliasInfo_, vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo>) };
    inline QueryAliasesResponseBodyAliasInfos& setAliasInfo(const vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo> & aliasInfo) { DARABONBA_PTR_SET_VALUE(aliasInfo_, aliasInfo) };
    inline QueryAliasesResponseBodyAliasInfos& setAliasInfo(vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo> && aliasInfo) { DARABONBA_PTR_SET_RVALUE(aliasInfo_, aliasInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryAliasesResponseBodyAliasInfosAliasInfo>> aliasInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
