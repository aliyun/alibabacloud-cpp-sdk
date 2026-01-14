// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseFileChunk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class RetrieveKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseFileChunks, knowledgeBaseFileChunks_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseFileChunks, knowledgeBaseFileChunks_);
    };
    RetrieveKnowledgeBaseResponseBody() = default ;
    RetrieveKnowledgeBaseResponseBody(const RetrieveKnowledgeBaseResponseBody &) = default ;
    RetrieveKnowledgeBaseResponseBody(RetrieveKnowledgeBaseResponseBody &&) = default ;
    RetrieveKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgeBaseResponseBody() = default ;
    RetrieveKnowledgeBaseResponseBody& operator=(const RetrieveKnowledgeBaseResponseBody &) = default ;
    RetrieveKnowledgeBaseResponseBody& operator=(RetrieveKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseFileChunks_ == nullptr; };
    // knowledgeBaseFileChunks Field Functions 
    bool hasKnowledgeBaseFileChunks() const { return this->knowledgeBaseFileChunks_ != nullptr;};
    void deleteKnowledgeBaseFileChunks() { this->knowledgeBaseFileChunks_ = nullptr;};
    inline const vector<KnowledgeBaseFileChunk> & getKnowledgeBaseFileChunks() const { DARABONBA_PTR_GET_CONST(knowledgeBaseFileChunks_, vector<KnowledgeBaseFileChunk>) };
    inline vector<KnowledgeBaseFileChunk> getKnowledgeBaseFileChunks() { DARABONBA_PTR_GET(knowledgeBaseFileChunks_, vector<KnowledgeBaseFileChunk>) };
    inline RetrieveKnowledgeBaseResponseBody& setKnowledgeBaseFileChunks(const vector<KnowledgeBaseFileChunk> & knowledgeBaseFileChunks) { DARABONBA_PTR_SET_VALUE(knowledgeBaseFileChunks_, knowledgeBaseFileChunks) };
    inline RetrieveKnowledgeBaseResponseBody& setKnowledgeBaseFileChunks(vector<KnowledgeBaseFileChunk> && knowledgeBaseFileChunks) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseFileChunks_, knowledgeBaseFileChunks) };


  protected:
    shared_ptr<vector<KnowledgeBaseFileChunk>> knowledgeBaseFileChunks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
