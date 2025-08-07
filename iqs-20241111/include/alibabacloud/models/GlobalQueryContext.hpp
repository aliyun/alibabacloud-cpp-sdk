// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALQUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GLOBALQUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GlobalQueryContextOriginalQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GlobalQueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalQueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalQueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
    };
    GlobalQueryContext() = default ;
    GlobalQueryContext(const GlobalQueryContext &) = default ;
    GlobalQueryContext(GlobalQueryContext &&) = default ;
    GlobalQueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalQueryContext() = default ;
    GlobalQueryContext& operator=(const GlobalQueryContext &) = default ;
    GlobalQueryContext& operator=(GlobalQueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originalQuery_ != nullptr; };
    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const GlobalQueryContextOriginalQuery & originalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, GlobalQueryContextOriginalQuery) };
    inline GlobalQueryContextOriginalQuery originalQuery() { DARABONBA_PTR_GET(originalQuery_, GlobalQueryContextOriginalQuery) };
    inline GlobalQueryContext& setOriginalQuery(const GlobalQueryContextOriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline GlobalQueryContext& setOriginalQuery(GlobalQueryContextOriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


  protected:
    std::shared_ptr<GlobalQueryContextOriginalQuery> originalQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
