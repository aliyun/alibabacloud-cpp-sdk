// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteAgentSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deleteCmsWorkspace, deleteCmsWorkspace_);
      DARABONBA_PTR_TO_JSON(deleteMseNamespace, deleteMseNamespace_);
      DARABONBA_PTR_TO_JSON(deleteSlsProject, deleteSlsProject_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteCmsWorkspace, deleteCmsWorkspace_);
      DARABONBA_PTR_FROM_JSON(deleteMseNamespace, deleteMseNamespace_);
      DARABONBA_PTR_FROM_JSON(deleteSlsProject, deleteSlsProject_);
    };
    DeleteAgentSpaceRequest() = default ;
    DeleteAgentSpaceRequest(const DeleteAgentSpaceRequest &) = default ;
    DeleteAgentSpaceRequest(DeleteAgentSpaceRequest &&) = default ;
    DeleteAgentSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentSpaceRequest() = default ;
    DeleteAgentSpaceRequest& operator=(const DeleteAgentSpaceRequest &) = default ;
    DeleteAgentSpaceRequest& operator=(DeleteAgentSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteCmsWorkspace_ == nullptr
        && this->deleteMseNamespace_ == nullptr && this->deleteSlsProject_ == nullptr; };
    // deleteCmsWorkspace Field Functions 
    bool hasDeleteCmsWorkspace() const { return this->deleteCmsWorkspace_ != nullptr;};
    void deleteDeleteCmsWorkspace() { this->deleteCmsWorkspace_ = nullptr;};
    inline bool getDeleteCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(deleteCmsWorkspace_, false) };
    inline DeleteAgentSpaceRequest& setDeleteCmsWorkspace(bool deleteCmsWorkspace) { DARABONBA_PTR_SET_VALUE(deleteCmsWorkspace_, deleteCmsWorkspace) };


    // deleteMseNamespace Field Functions 
    bool hasDeleteMseNamespace() const { return this->deleteMseNamespace_ != nullptr;};
    void deleteDeleteMseNamespace() { this->deleteMseNamespace_ = nullptr;};
    inline bool getDeleteMseNamespace() const { DARABONBA_PTR_GET_DEFAULT(deleteMseNamespace_, false) };
    inline DeleteAgentSpaceRequest& setDeleteMseNamespace(bool deleteMseNamespace) { DARABONBA_PTR_SET_VALUE(deleteMseNamespace_, deleteMseNamespace) };


    // deleteSlsProject Field Functions 
    bool hasDeleteSlsProject() const { return this->deleteSlsProject_ != nullptr;};
    void deleteDeleteSlsProject() { this->deleteSlsProject_ = nullptr;};
    inline bool getDeleteSlsProject() const { DARABONBA_PTR_GET_DEFAULT(deleteSlsProject_, false) };
    inline DeleteAgentSpaceRequest& setDeleteSlsProject(bool deleteSlsProject) { DARABONBA_PTR_SET_VALUE(deleteSlsProject_, deleteSlsProject) };


  protected:
    shared_ptr<bool> deleteCmsWorkspace_ {};
    shared_ptr<bool> deleteMseNamespace_ {};
    shared_ptr<bool> deleteSlsProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
