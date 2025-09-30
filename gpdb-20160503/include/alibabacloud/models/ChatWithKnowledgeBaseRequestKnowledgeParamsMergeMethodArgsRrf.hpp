// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSRRF_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSRRF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_TO_JSON(K, k_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf& obj) { 
      DARABONBA_PTR_FROM_JSON(K, k_);
    };
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf &&) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf& operator=(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf& operator=(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->k_ != nullptr; };
    // k Field Functions 
    bool hasK() const { return this->k_ != nullptr;};
    void deleteK() { this->k_ = nullptr;};
    inline int64_t k() const { DARABONBA_PTR_GET_DEFAULT(k_, 0L) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf& setK(int64_t k) { DARABONBA_PTR_SET_VALUE(k_, k) };


  protected:
    std::shared_ptr<int64_t> k_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
