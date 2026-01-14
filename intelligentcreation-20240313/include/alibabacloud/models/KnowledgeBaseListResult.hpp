// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASELISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASELISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class KnowledgeBaseListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseListResult& obj) { 
      DARABONBA_PTR_TO_JSON(knowledgeBases, knowledgeBases_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(knowledgeBases, knowledgeBases_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    KnowledgeBaseListResult() = default ;
    KnowledgeBaseListResult(const KnowledgeBaseListResult &) = default ;
    KnowledgeBaseListResult(KnowledgeBaseListResult &&) = default ;
    KnowledgeBaseListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseListResult() = default ;
    KnowledgeBaseListResult& operator=(const KnowledgeBaseListResult &) = default ;
    KnowledgeBaseListResult& operator=(KnowledgeBaseListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBases_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // knowledgeBases Field Functions 
    bool hasKnowledgeBases() const { return this->knowledgeBases_ != nullptr;};
    void deleteKnowledgeBases() { this->knowledgeBases_ = nullptr;};
    inline const vector<KnowledgeBaseInfo> & getKnowledgeBases() const { DARABONBA_PTR_GET_CONST(knowledgeBases_, vector<KnowledgeBaseInfo>) };
    inline vector<KnowledgeBaseInfo> getKnowledgeBases() { DARABONBA_PTR_GET(knowledgeBases_, vector<KnowledgeBaseInfo>) };
    inline KnowledgeBaseListResult& setKnowledgeBases(const vector<KnowledgeBaseInfo> & knowledgeBases) { DARABONBA_PTR_SET_VALUE(knowledgeBases_, knowledgeBases) };
    inline KnowledgeBaseListResult& setKnowledgeBases(vector<KnowledgeBaseInfo> && knowledgeBases) { DARABONBA_PTR_SET_RVALUE(knowledgeBases_, knowledgeBases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KnowledgeBaseListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline KnowledgeBaseListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<KnowledgeBaseInfo>> knowledgeBases_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
