// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEREGISTRYMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEREGISTRYMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ExecuteRegistryModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteRegistryModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteRegistryModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
    };
    ExecuteRegistryModuleRequest() = default ;
    ExecuteRegistryModuleRequest(const ExecuteRegistryModuleRequest &) = default ;
    ExecuteRegistryModuleRequest(ExecuteRegistryModuleRequest &&) = default ;
    ExecuteRegistryModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteRegistryModuleRequest() = default ;
    ExecuteRegistryModuleRequest& operator=(const ExecuteRegistryModuleRequest &) = default ;
    ExecuteRegistryModuleRequest& operator=(ExecuteRegistryModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->parameters_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteRegistryModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline ExecuteRegistryModuleRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ExecuteRegistryModuleRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
