// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunAgentResponseBodyDataResponseChoices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentResponseBodyDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentResponseBodyDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(choices, choices_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentResponseBodyDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(choices, choices_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RunAgentResponseBodyDataResponse() = default ;
    RunAgentResponseBodyDataResponse(const RunAgentResponseBodyDataResponse &) = default ;
    RunAgentResponseBodyDataResponse(RunAgentResponseBodyDataResponse &&) = default ;
    RunAgentResponseBodyDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentResponseBodyDataResponse() = default ;
    RunAgentResponseBodyDataResponse& operator=(const RunAgentResponseBodyDataResponse &) = default ;
    RunAgentResponseBodyDataResponse& operator=(RunAgentResponseBodyDataResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->id_ == nullptr && return this->modelId_ == nullptr && return this->time_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<Models::RunAgentResponseBodyDataResponseChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Models::RunAgentResponseBodyDataResponseChoices>) };
    inline vector<Models::RunAgentResponseBodyDataResponseChoices> choices() { DARABONBA_PTR_GET(choices_, vector<Models::RunAgentResponseBodyDataResponseChoices>) };
    inline RunAgentResponseBodyDataResponse& setChoices(const vector<Models::RunAgentResponseBodyDataResponseChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline RunAgentResponseBodyDataResponse& setChoices(vector<Models::RunAgentResponseBodyDataResponseChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline RunAgentResponseBodyDataResponse& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunAgentResponseBodyDataResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunAgentResponseBodyDataResponse& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RunAgentResponseBodyDataResponse& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<vector<Models::RunAgentResponseBodyDataResponseChoices>> choices_ = nullptr;
    std::shared_ptr<int64_t> created_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
