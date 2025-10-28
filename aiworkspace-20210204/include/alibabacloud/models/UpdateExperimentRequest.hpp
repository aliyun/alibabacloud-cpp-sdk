// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateExperimentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateExperimentRequest() = default ;
    UpdateExperimentRequest(const UpdateExperimentRequest &) = default ;
    UpdateExperimentRequest(UpdateExperimentRequest &&) = default ;
    UpdateExperimentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentRequest() = default ;
    UpdateExperimentRequest& operator=(const UpdateExperimentRequest &) = default ;
    UpdateExperimentRequest& operator=(UpdateExperimentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->name_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateExperimentRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateExperimentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The accessibility of the experiment in the workspace. Valid values:
    // 
    // *   PRIVATE: The experiment is accessible only to you and the administrator of the workspace.
    // *   PUBLIC: The experiment is accessible to all users in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The experiment name. The name must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be 1 to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
