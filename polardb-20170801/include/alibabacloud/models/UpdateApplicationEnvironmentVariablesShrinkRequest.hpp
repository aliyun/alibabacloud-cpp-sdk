// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateApplicationEnvironmentVariablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(Variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(Variables, variablesShrink_);
    };
    UpdateApplicationEnvironmentVariablesShrinkRequest() = default ;
    UpdateApplicationEnvironmentVariablesShrinkRequest(const UpdateApplicationEnvironmentVariablesShrinkRequest &) = default ;
    UpdateApplicationEnvironmentVariablesShrinkRequest(UpdateApplicationEnvironmentVariablesShrinkRequest &&) = default ;
    UpdateApplicationEnvironmentVariablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationEnvironmentVariablesShrinkRequest() = default ;
    UpdateApplicationEnvironmentVariablesShrinkRequest& operator=(const UpdateApplicationEnvironmentVariablesShrinkRequest &) = default ;
    UpdateApplicationEnvironmentVariablesShrinkRequest& operator=(UpdateApplicationEnvironmentVariablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->restart_ == nullptr && this->variablesShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationEnvironmentVariablesShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdateApplicationEnvironmentVariablesShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string getVariablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline UpdateApplicationEnvironmentVariablesShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> restart_ {};
    shared_ptr<string> variablesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
