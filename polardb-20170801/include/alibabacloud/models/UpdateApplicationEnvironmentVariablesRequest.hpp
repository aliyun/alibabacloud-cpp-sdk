// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONENVIRONMENTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONENVIRONMENTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateApplicationEnvironmentVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_ANY_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_ANY_FROM_JSON(Variables, variables_);
    };
    UpdateApplicationEnvironmentVariablesRequest() = default ;
    UpdateApplicationEnvironmentVariablesRequest(const UpdateApplicationEnvironmentVariablesRequest &) = default ;
    UpdateApplicationEnvironmentVariablesRequest(UpdateApplicationEnvironmentVariablesRequest &&) = default ;
    UpdateApplicationEnvironmentVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationEnvironmentVariablesRequest() = default ;
    UpdateApplicationEnvironmentVariablesRequest& operator=(const UpdateApplicationEnvironmentVariablesRequest &) = default ;
    UpdateApplicationEnvironmentVariablesRequest& operator=(UpdateApplicationEnvironmentVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->restart_ == nullptr && this->variables_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationEnvironmentVariablesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdateApplicationEnvironmentVariablesRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & getVariables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & getVariables() { DARABONBA_GET(variables_) };
    inline UpdateApplicationEnvironmentVariablesRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline UpdateApplicationEnvironmentVariablesRequest& setVariables(Darabonba::Json && variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> restart_ {};
    Darabonba::Json variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
