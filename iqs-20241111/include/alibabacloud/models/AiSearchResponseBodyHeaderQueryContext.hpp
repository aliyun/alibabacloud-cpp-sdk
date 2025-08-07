// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADERQUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADERQUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiSearchResponseBodyHeaderQueryContextOriginalQuery.hpp>
#include <alibabacloud/models/AiSearchResponseBodyHeaderQueryContextRewrite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AiSearchResponseBodyHeaderQueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSearchResponseBodyHeaderQueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_TO_JSON(rewrite, rewrite_);
    };
    friend void from_json(const Darabonba::Json& j, AiSearchResponseBodyHeaderQueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
      DARABONBA_PTR_FROM_JSON(rewrite, rewrite_);
    };
    AiSearchResponseBodyHeaderQueryContext() = default ;
    AiSearchResponseBodyHeaderQueryContext(const AiSearchResponseBodyHeaderQueryContext &) = default ;
    AiSearchResponseBodyHeaderQueryContext(AiSearchResponseBodyHeaderQueryContext &&) = default ;
    AiSearchResponseBodyHeaderQueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSearchResponseBodyHeaderQueryContext() = default ;
    AiSearchResponseBodyHeaderQueryContext& operator=(const AiSearchResponseBodyHeaderQueryContext &) = default ;
    AiSearchResponseBodyHeaderQueryContext& operator=(AiSearchResponseBodyHeaderQueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originalQuery_ != nullptr
        && this->rewrite_ != nullptr; };
    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery & originalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery) };
    inline Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery originalQuery() { DARABONBA_PTR_GET(originalQuery_, Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery) };
    inline AiSearchResponseBodyHeaderQueryContext& setOriginalQuery(const Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline AiSearchResponseBodyHeaderQueryContext& setOriginalQuery(Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const Models::AiSearchResponseBodyHeaderQueryContextRewrite & rewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, Models::AiSearchResponseBodyHeaderQueryContextRewrite) };
    inline Models::AiSearchResponseBodyHeaderQueryContextRewrite rewrite() { DARABONBA_PTR_GET(rewrite_, Models::AiSearchResponseBodyHeaderQueryContextRewrite) };
    inline AiSearchResponseBodyHeaderQueryContext& setRewrite(const Models::AiSearchResponseBodyHeaderQueryContextRewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline AiSearchResponseBodyHeaderQueryContext& setRewrite(Models::AiSearchResponseBodyHeaderQueryContextRewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


  protected:
    std::shared_ptr<Models::AiSearchResponseBodyHeaderQueryContextOriginalQuery> originalQuery_ = nullptr;
    std::shared_ptr<Models::AiSearchResponseBodyHeaderQueryContextRewrite> rewrite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
