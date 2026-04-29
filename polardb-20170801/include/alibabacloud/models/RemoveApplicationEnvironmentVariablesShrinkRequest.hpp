// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RemoveApplicationEnvironmentVariablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApplicationEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(VariableNames, variableNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApplicationEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(VariableNames, variableNamesShrink_);
    };
    RemoveApplicationEnvironmentVariablesShrinkRequest() = default ;
    RemoveApplicationEnvironmentVariablesShrinkRequest(const RemoveApplicationEnvironmentVariablesShrinkRequest &) = default ;
    RemoveApplicationEnvironmentVariablesShrinkRequest(RemoveApplicationEnvironmentVariablesShrinkRequest &&) = default ;
    RemoveApplicationEnvironmentVariablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApplicationEnvironmentVariablesShrinkRequest() = default ;
    RemoveApplicationEnvironmentVariablesShrinkRequest& operator=(const RemoveApplicationEnvironmentVariablesShrinkRequest &) = default ;
    RemoveApplicationEnvironmentVariablesShrinkRequest& operator=(RemoveApplicationEnvironmentVariablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->restart_ == nullptr && this->variableNamesShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemoveApplicationEnvironmentVariablesShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline RemoveApplicationEnvironmentVariablesShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // variableNamesShrink Field Functions 
    bool hasVariableNamesShrink() const { return this->variableNamesShrink_ != nullptr;};
    void deleteVariableNamesShrink() { this->variableNamesShrink_ = nullptr;};
    inline string getVariableNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(variableNamesShrink_, "") };
    inline RemoveApplicationEnvironmentVariablesShrinkRequest& setVariableNamesShrink(string variableNamesShrink) { DARABONBA_PTR_SET_VALUE(variableNamesShrink_, variableNamesShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> restart_ {};
    // This parameter is required.
    shared_ptr<string> variableNamesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
