// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETERRAFORMPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETERRAFORMPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ExecuteTerraformPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTerraformPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(stateId, stateId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTerraformPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(stateId, stateId_);
    };
    ExecuteTerraformPlanRequest() = default ;
    ExecuteTerraformPlanRequest(const ExecuteTerraformPlanRequest &) = default ;
    ExecuteTerraformPlanRequest(ExecuteTerraformPlanRequest &&) = default ;
    ExecuteTerraformPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTerraformPlanRequest() = default ;
    ExecuteTerraformPlanRequest& operator=(const ExecuteTerraformPlanRequest &) = default ;
    ExecuteTerraformPlanRequest& operator=(ExecuteTerraformPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->code_ == nullptr && return this->stateId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteTerraformPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecuteTerraformPlanRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // stateId Field Functions 
    bool hasStateId() const { return this->stateId_ != nullptr;};
    void deleteStateId() { this->stateId_ = nullptr;};
    inline string stateId() const { DARABONBA_PTR_GET_DEFAULT(stateId_, "") };
    inline ExecuteTerraformPlanRequest& setStateId(string stateId) { DARABONBA_PTR_SET_VALUE(stateId_, stateId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> stateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
