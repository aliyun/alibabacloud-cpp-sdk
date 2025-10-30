// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTMERGEMETHODARGSRRF_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTMERGEMETHODARGSRRF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentRequestMergeMethodArgsRrf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequestMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_TO_JSON(K, k_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequestMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_FROM_JSON(K, k_);
    };
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf() = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf(const QueryKnowledgeBasesContentRequestMergeMethodArgsRrf &) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf(QueryKnowledgeBasesContentRequestMergeMethodArgsRrf &&) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequestMergeMethodArgsRrf() = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf& operator=(const QueryKnowledgeBasesContentRequestMergeMethodArgsRrf &) = default ;
    QueryKnowledgeBasesContentRequestMergeMethodArgsRrf& operator=(QueryKnowledgeBasesContentRequestMergeMethodArgsRrf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k_ == nullptr; };
    // k Field Functions 
    bool hasK() const { return this->k_ != nullptr;};
    void deleteK() { this->k_ = nullptr;};
    inline int64_t k() const { DARABONBA_PTR_GET_DEFAULT(k_, 0L) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgsRrf& setK(int64_t k) { DARABONBA_PTR_SET_VALUE(k_, k) };


  protected:
    std::shared_ptr<int64_t> k_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
