// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PutWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
    };
    friend void from_json(const Darabonba::Json& j, PutWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
    };
    PutWorkspaceRequest() = default ;
    PutWorkspaceRequest(const PutWorkspaceRequest &) = default ;
    PutWorkspaceRequest(PutWorkspaceRequest &&) = default ;
    PutWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutWorkspaceRequest() = default ;
    PutWorkspaceRequest& operator=(const PutWorkspaceRequest &) = default ;
    PutWorkspaceRequest& operator=(PutWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->slsProject_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PutWorkspaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PutWorkspaceRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline PutWorkspaceRequest& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


  protected:
    // 工作空间描述
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    // 工作空间绑定的日志服务项目名称
    // 
    // This parameter is required.
    std::shared_ptr<string> slsProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
