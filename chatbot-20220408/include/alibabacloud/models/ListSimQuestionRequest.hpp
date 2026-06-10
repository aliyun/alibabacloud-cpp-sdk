// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIMQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSIMQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSimQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSimQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSimQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
    };
    ListSimQuestionRequest() = default ;
    ListSimQuestionRequest(const ListSimQuestionRequest &) = default ;
    ListSimQuestionRequest(ListSimQuestionRequest &&) = default ;
    ListSimQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSimQuestionRequest() = default ;
    ListSimQuestionRequest& operator=(const ListSimQuestionRequest &) = default ;
    ListSimQuestionRequest& operator=(ListSimQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->knowledgeId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListSimQuestionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline ListSimQuestionRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


  protected:
    // The key for the business space. If you do not specify this parameter, the default business space is used. You can get the key from the Business Management Page of your Alibaba Cloud account.
    shared_ptr<string> agentKey_ {};
    // The knowledge entry ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> knowledgeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
