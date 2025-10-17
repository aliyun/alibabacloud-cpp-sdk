// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESOLUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESOLUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteSolutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSolutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSolutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    DeleteSolutionRequest() = default ;
    DeleteSolutionRequest(const DeleteSolutionRequest &) = default ;
    DeleteSolutionRequest(DeleteSolutionRequest &&) = default ;
    DeleteSolutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSolutionRequest() = default ;
    DeleteSolutionRequest& operator=(const DeleteSolutionRequest &) = default ;
    DeleteSolutionRequest& operator=(DeleteSolutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->solutionId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteSolutionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline DeleteSolutionRequest& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
