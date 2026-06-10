// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESIMQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESIMQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateSimQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSimQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSimQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateSimQuestionRequest() = default ;
    UpdateSimQuestionRequest(const UpdateSimQuestionRequest &) = default ;
    UpdateSimQuestionRequest(UpdateSimQuestionRequest &&) = default ;
    UpdateSimQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSimQuestionRequest() = default ;
    UpdateSimQuestionRequest& operator=(const UpdateSimQuestionRequest &) = default ;
    UpdateSimQuestionRequest& operator=(UpdateSimQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->simQuestionId_ == nullptr && this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateSimQuestionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // simQuestionId Field Functions 
    bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
    void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
    inline int64_t getSimQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
    inline UpdateSimQuestionRequest& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateSimQuestionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The key of the workspace. If you do not specify this parameter, the default workspace is used. You can find the key on the Business Management page of your master account.
    shared_ptr<string> agentKey_ {};
    // The ID of the similar question that you want to update.
    // 
    // This parameter is required.
    shared_ptr<int64_t> simQuestionId_ {};
    // The new title of the similar question. The title can be up to 120 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
