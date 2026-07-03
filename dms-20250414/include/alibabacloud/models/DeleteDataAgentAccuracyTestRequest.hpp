// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAAGENTACCURACYTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAAGENTACCURACYTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDataAgentAccuracyTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataAgentAccuracyTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataAgentAccuracyTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDataAgentAccuracyTestRequest() = default ;
    DeleteDataAgentAccuracyTestRequest(const DeleteDataAgentAccuracyTestRequest &) = default ;
    DeleteDataAgentAccuracyTestRequest(DeleteDataAgentAccuracyTestRequest &&) = default ;
    DeleteDataAgentAccuracyTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataAgentAccuracyTestRequest() = default ;
    DeleteDataAgentAccuracyTestRequest& operator=(const DeleteDataAgentAccuracyTestRequest &) = default ;
    DeleteDataAgentAccuracyTestRequest& operator=(DeleteDataAgentAccuracyTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accuracyTestInsId_ == nullptr
        && this->dmsUnit_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // accuracyTestInsId Field Functions 
    bool hasAccuracyTestInsId() const { return this->accuracyTestInsId_ != nullptr;};
    void deleteAccuracyTestInsId() { this->accuracyTestInsId_ = nullptr;};
    inline string getAccuracyTestInsId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestInsId_, "") };
    inline DeleteDataAgentAccuracyTestRequest& setAccuracyTestInsId(string accuracyTestInsId) { DARABONBA_PTR_SET_VALUE(accuracyTestInsId_, accuracyTestInsId) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline DeleteDataAgentAccuracyTestRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDataAgentAccuracyTestRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDataAgentAccuracyTestRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accuracy test instance ID.
    shared_ptr<string> accuracyTestInsId_ {};
    // The current DMS unit.
    shared_ptr<string> dmsUnit_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
