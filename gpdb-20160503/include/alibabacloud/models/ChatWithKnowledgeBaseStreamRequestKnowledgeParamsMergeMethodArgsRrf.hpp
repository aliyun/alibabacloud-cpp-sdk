// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSRRF_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSRRF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_TO_JSON(K, k_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_FROM_JSON(K, k_);
    };
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf &&) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf& operator=(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf& operator=(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k_ == nullptr; };
    // k Field Functions 
    bool hasK() const { return this->k_ != nullptr;};
    void deleteK() { this->k_ = nullptr;};
    inline int64_t k() const { DARABONBA_PTR_GET_DEFAULT(k_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf& setK(int64_t k) { DARABONBA_PTR_SET_VALUE(k_, k) };


  protected:
    // Formula to calculate the score: 1/(k + rank_i). The k constant must be a positive integer greater than 1.
    std::shared_ptr<int64_t> k_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
