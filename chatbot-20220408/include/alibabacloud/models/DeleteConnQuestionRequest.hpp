// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONNQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONNQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteConnQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConnQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConnQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
    };
    DeleteConnQuestionRequest() = default ;
    DeleteConnQuestionRequest(const DeleteConnQuestionRequest &) = default ;
    DeleteConnQuestionRequest(DeleteConnQuestionRequest &&) = default ;
    DeleteConnQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConnQuestionRequest() = default ;
    DeleteConnQuestionRequest& operator=(const DeleteConnQuestionRequest &) = default ;
    DeleteConnQuestionRequest& operator=(DeleteConnQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->outlineId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteConnQuestionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // outlineId Field Functions 
    bool hasOutlineId() const { return this->outlineId_ != nullptr;};
    void deleteOutlineId() { this->outlineId_ = nullptr;};
    inline int64_t outlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, 0L) };
    inline DeleteConnQuestionRequest& setOutlineId(int64_t outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> outlineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
