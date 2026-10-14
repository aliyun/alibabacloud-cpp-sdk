// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPTIMIZERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPTIMIZERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateOptimizeRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOptimizeRunRequest& obj) { 
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(preview, preview_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOptimizeRunRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(preview, preview_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateOptimizeRunRequest() = default ;
    CreateOptimizeRunRequest(const CreateOptimizeRunRequest &) = default ;
    CreateOptimizeRunRequest(CreateOptimizeRunRequest &&) = default ;
    CreateOptimizeRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOptimizeRunRequest() = default ;
    CreateOptimizeRunRequest& operator=(const CreateOptimizeRunRequest &) = default ;
    CreateOptimizeRunRequest& operator=(CreateOptimizeRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->preview_ == nullptr && this->clientToken_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline CreateOptimizeRunRequest& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline CreateOptimizeRunRequest& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // preview Field Functions 
    bool hasPreview() const { return this->preview_ != nullptr;};
    void deletePreview() { this->preview_ = nullptr;};
    inline bool getPreview() const { DARABONBA_PTR_GET_DEFAULT(preview_, false) };
    inline CreateOptimizeRunRequest& setPreview(bool preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOptimizeRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The JSON input defined by the task type, preserving the original object or array structure. ExperienceMining accepts a start/end/processTimeMaxNS object. SkillOptimize accepts an inline input array, a skills/window object for SLS, or a skills/records object for ATIF or xTrace. The server validates the input based on the task type and configuration. Memory extraction continues to use the original ContextStore API.
    // 
    // This parameter is required.
    Darabonba::Json input_ {};
    // Specifies whether to execute an independent pre-run of the complete algorithm. The pre-run generates candidate results and evidence without publishing them to the target dataset or advancing the formal run history. A formal run executes the algorithm independently.
    shared_ptr<bool> preview_ {};
    // The idempotency token. Use the same value when you retry the same creation request.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
