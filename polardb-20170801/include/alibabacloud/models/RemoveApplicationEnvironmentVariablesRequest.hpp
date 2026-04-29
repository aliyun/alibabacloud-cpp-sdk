// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RemoveApplicationEnvironmentVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApplicationEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(VariableNames, variableNames_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApplicationEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(VariableNames, variableNames_);
    };
    RemoveApplicationEnvironmentVariablesRequest() = default ;
    RemoveApplicationEnvironmentVariablesRequest(const RemoveApplicationEnvironmentVariablesRequest &) = default ;
    RemoveApplicationEnvironmentVariablesRequest(RemoveApplicationEnvironmentVariablesRequest &&) = default ;
    RemoveApplicationEnvironmentVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApplicationEnvironmentVariablesRequest() = default ;
    RemoveApplicationEnvironmentVariablesRequest& operator=(const RemoveApplicationEnvironmentVariablesRequest &) = default ;
    RemoveApplicationEnvironmentVariablesRequest& operator=(RemoveApplicationEnvironmentVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->restart_ == nullptr && this->variableNames_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemoveApplicationEnvironmentVariablesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline RemoveApplicationEnvironmentVariablesRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // variableNames Field Functions 
    bool hasVariableNames() const { return this->variableNames_ != nullptr;};
    void deleteVariableNames() { this->variableNames_ = nullptr;};
    inline const vector<string> & getVariableNames() const { DARABONBA_PTR_GET_CONST(variableNames_, vector<string>) };
    inline vector<string> getVariableNames() { DARABONBA_PTR_GET(variableNames_, vector<string>) };
    inline RemoveApplicationEnvironmentVariablesRequest& setVariableNames(const vector<string> & variableNames) { DARABONBA_PTR_SET_VALUE(variableNames_, variableNames) };
    inline RemoveApplicationEnvironmentVariablesRequest& setVariableNames(vector<string> && variableNames) { DARABONBA_PTR_SET_RVALUE(variableNames_, variableNames) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> restart_ {};
    // This parameter is required.
    shared_ptr<vector<string>> variableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
