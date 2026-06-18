// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lsn, lsn_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lsn, lsn_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteSnapshotRequest() = default ;
    DeleteSnapshotRequest(const DeleteSnapshotRequest &) = default ;
    DeleteSnapshotRequest(DeleteSnapshotRequest &&) = default ;
    DeleteSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotRequest() = default ;
    DeleteSnapshotRequest& operator=(const DeleteSnapshotRequest &) = default ;
    DeleteSnapshotRequest& operator=(DeleteSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lsn_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // lsn Field Functions 
    bool hasLsn() const { return this->lsn_ != nullptr;};
    void deleteLsn() { this->lsn_ = nullptr;};
    inline string getLsn() const { DARABONBA_PTR_GET_DEFAULT(lsn_, "") };
    inline DeleteSnapshotRequest& setLsn(string lsn) { DARABONBA_PTR_SET_VALUE(lsn_, lsn) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteSnapshotRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> lsn_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
