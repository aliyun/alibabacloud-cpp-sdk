// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListConnQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
    };
    ListConnQuestionRequest() = default ;
    ListConnQuestionRequest(const ListConnQuestionRequest &) = default ;
    ListConnQuestionRequest(ListConnQuestionRequest &&) = default ;
    ListConnQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnQuestionRequest() = default ;
    ListConnQuestionRequest& operator=(const ListConnQuestionRequest &) = default ;
    ListConnQuestionRequest& operator=(ListConnQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->knowledgeId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListConnQuestionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline ListConnQuestionRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
