// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryContextOriginalQuery.hpp>
#include <alibabacloud/models/QueryContextRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class QueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_TO_JSON(rewrite, rewrite_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_FROM_JSON(rewrite, rewrite_);
    };
    QueryContext() = default ;
    QueryContext(const QueryContext &) = default ;
    QueryContext(QueryContext &&) = default ;
    QueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContext() = default ;
    QueryContext& operator=(const QueryContext &) = default ;
    QueryContext& operator=(QueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalQuery_ == nullptr
        && return this->rewrite_ == nullptr; };
    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const QueryContextOriginalQuery & originalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, QueryContextOriginalQuery) };
    inline QueryContextOriginalQuery originalQuery() { DARABONBA_PTR_GET(originalQuery_, QueryContextOriginalQuery) };
    inline QueryContext& setOriginalQuery(const QueryContextOriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline QueryContext& setOriginalQuery(QueryContextOriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const QueryContextRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, QueryContextRewrite) };
    inline QueryContextRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, QueryContextRewrite) };
    inline QueryContext& setRewrite(const QueryContextRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline QueryContext& setRewrite(QueryContextRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


  protected:
    std::shared_ptr<QueryContextOriginalQuery> originalQuery_ = nullptr;
    std::shared_ptr<QueryContextRewrite> rewrite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
