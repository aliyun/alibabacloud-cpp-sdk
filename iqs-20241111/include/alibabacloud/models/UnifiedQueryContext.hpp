// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDQUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDQUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnifiedOriginalQuery.hpp>
#include <alibabacloud/models/UnifiedRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedQueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedQueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(engineType, engineType_);
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_TO_JSON(rewrite, rewrite_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedQueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(engineType, engineType_);
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_FROM_JSON(rewrite, rewrite_);
    };
    UnifiedQueryContext() = default ;
    UnifiedQueryContext(const UnifiedQueryContext &) = default ;
    UnifiedQueryContext(UnifiedQueryContext &&) = default ;
    UnifiedQueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedQueryContext() = default ;
    UnifiedQueryContext& operator=(const UnifiedQueryContext &) = default ;
    UnifiedQueryContext& operator=(UnifiedQueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineType_ != nullptr
        && this->originalQuery_ != nullptr && this->rewrite_ != nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline UnifiedQueryContext& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const UnifiedOriginalQuery & originalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, UnifiedOriginalQuery) };
    inline UnifiedOriginalQuery originalQuery() { DARABONBA_PTR_GET(originalQuery_, UnifiedOriginalQuery) };
    inline UnifiedQueryContext& setOriginalQuery(const UnifiedOriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline UnifiedQueryContext& setOriginalQuery(UnifiedOriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const UnifiedRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, UnifiedRewrite) };
    inline UnifiedRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, UnifiedRewrite) };
    inline UnifiedQueryContext& setRewrite(const UnifiedRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline UnifiedQueryContext& setRewrite(UnifiedRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


  protected:
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<UnifiedOriginalQuery> originalQuery_ = nullptr;
    std::shared_ptr<UnifiedRewrite> rewrite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
