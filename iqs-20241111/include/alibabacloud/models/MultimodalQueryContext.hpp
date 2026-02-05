// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALQUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALQUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MultimodalOriginalQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MultimodalQueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalQueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalQueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
    };
    MultimodalQueryContext() = default ;
    MultimodalQueryContext(const MultimodalQueryContext &) = default ;
    MultimodalQueryContext(MultimodalQueryContext &&) = default ;
    MultimodalQueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalQueryContext() = default ;
    MultimodalQueryContext& operator=(const MultimodalQueryContext &) = default ;
    MultimodalQueryContext& operator=(MultimodalQueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalQuery_ == nullptr; };
    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const MultimodalOriginalQuery & getOriginalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, MultimodalOriginalQuery) };
    inline MultimodalOriginalQuery getOriginalQuery() { DARABONBA_PTR_GET(originalQuery_, MultimodalOriginalQuery) };
    inline MultimodalQueryContext& setOriginalQuery(const MultimodalOriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline MultimodalQueryContext& setOriginalQuery(MultimodalOriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


  protected:
    shared_ptr<MultimodalOriginalQuery> originalQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
