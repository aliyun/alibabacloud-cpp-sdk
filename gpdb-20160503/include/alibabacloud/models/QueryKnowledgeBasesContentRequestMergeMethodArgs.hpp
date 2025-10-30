// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTMERGEMETHODARGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTMERGEMETHODARGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestMergeMethodArgsRrf.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestMergeMethodArgsWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentRequestMergeMethodArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequestMergeMethodArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Rrf, rrf_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequestMergeMethodArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Rrf, rrf_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    QueryKnowledgeBasesContentRequestMergeMethodArgs() = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgs(const QueryKnowledgeBasesContentRequestMergeMethodArgs &) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgs(QueryKnowledgeBasesContentRequestMergeMethodArgs &&) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequestMergeMethodArgs() = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgs& operator=(const QueryKnowledgeBasesContentRequestMergeMethodArgs &) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgs& operator=(QueryKnowledgeBasesContentRequestMergeMethodArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rrf_ == nullptr
        && return this->weight_ == nullptr; };
    // rrf Field Functions 
    bool hasRrf() const { return this->rrf_ != nullptr;};
    void deleteRrf() { this->rrf_ = nullptr;};
    inline const Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf & rrf() const { DARABONBA_PTR_GET_CONST(rrf_, Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf) };
    inline Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf rrf() { DARABONBA_PTR_GET(rrf_, Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgs& setRrf(const Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf & rrf) { DARABONBA_PTR_SET_VALUE(rrf_, rrf) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgs& setRrf(Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf && rrf) { DARABONBA_PTR_SET_RVALUE(rrf_, rrf) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline const Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight & weight() const { DARABONBA_PTR_GET_CONST(weight_, Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight) };
    inline Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight weight() { DARABONBA_PTR_GET(weight_, Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgs& setWeight(const Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight & weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgs& setWeight(Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight && weight) { DARABONBA_PTR_SET_RVALUE(weight_, weight) };


  protected:
    std::shared_ptr<Models::QueryKnowledgeBasesContentRequestMergeMethodArgsRrf> rrf_ = nullptr;
    std::shared_ptr<Models::QueryKnowledgeBasesContentRequestMergeMethodArgsWeight> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
