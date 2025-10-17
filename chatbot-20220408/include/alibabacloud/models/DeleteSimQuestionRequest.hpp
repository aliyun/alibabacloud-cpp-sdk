// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESIMQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESIMQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteSimQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSimQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSimQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
    };
    DeleteSimQuestionRequest() = default ;
    DeleteSimQuestionRequest(const DeleteSimQuestionRequest &) = default ;
    DeleteSimQuestionRequest(DeleteSimQuestionRequest &&) = default ;
    DeleteSimQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSimQuestionRequest() = default ;
    DeleteSimQuestionRequest& operator=(const DeleteSimQuestionRequest &) = default ;
    DeleteSimQuestionRequest& operator=(DeleteSimQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->simQuestionId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteSimQuestionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // simQuestionId Field Functions 
    bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
    void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
    inline int64_t simQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
    inline DeleteSimQuestionRequest& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> simQuestionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
