// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAliasesResponseBodyAliasInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasInfos, aliasInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasInfos, aliasInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAliasesResponseBody() = default ;
    QueryAliasesResponseBody(const QueryAliasesResponseBody &) = default ;
    QueryAliasesResponseBody(QueryAliasesResponseBody &&) = default ;
    QueryAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAliasesResponseBody() = default ;
    QueryAliasesResponseBody& operator=(const QueryAliasesResponseBody &) = default ;
    QueryAliasesResponseBody& operator=(QueryAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // aliasInfos Field Functions 
    bool hasAliasInfos() const { return this->aliasInfos_ != nullptr;};
    void deleteAliasInfos() { this->aliasInfos_ = nullptr;};
    inline const QueryAliasesResponseBodyAliasInfos & aliasInfos() const { DARABONBA_PTR_GET_CONST(aliasInfos_, QueryAliasesResponseBodyAliasInfos) };
    inline QueryAliasesResponseBodyAliasInfos aliasInfos() { DARABONBA_PTR_GET(aliasInfos_, QueryAliasesResponseBodyAliasInfos) };
    inline QueryAliasesResponseBody& setAliasInfos(const QueryAliasesResponseBodyAliasInfos & aliasInfos) { DARABONBA_PTR_SET_VALUE(aliasInfos_, aliasInfos) };
    inline QueryAliasesResponseBody& setAliasInfos(QueryAliasesResponseBodyAliasInfos && aliasInfos) { DARABONBA_PTR_SET_RVALUE(aliasInfos_, aliasInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryAliasesResponseBodyAliasInfos> aliasInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
