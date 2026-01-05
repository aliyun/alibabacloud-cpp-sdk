// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEPOLARFSBASICSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEPOLARFSBASICSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ClonePolarFsBasicSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClonePolarFsBasicSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
    };
    friend void from_json(const Darabonba::Json& j, ClonePolarFsBasicSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
    };
    ClonePolarFsBasicSnapshotRequest() = default ;
    ClonePolarFsBasicSnapshotRequest(const ClonePolarFsBasicSnapshotRequest &) = default ;
    ClonePolarFsBasicSnapshotRequest(ClonePolarFsBasicSnapshotRequest &&) = default ;
    ClonePolarFsBasicSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClonePolarFsBasicSnapshotRequest() = default ;
    ClonePolarFsBasicSnapshotRequest& operator=(const ClonePolarFsBasicSnapshotRequest &) = default ;
    ClonePolarFsBasicSnapshotRequest& operator=(ClonePolarFsBasicSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->sourcePath_ == nullptr && this->targetPath_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ClonePolarFsBasicSnapshotRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ClonePolarFsBasicSnapshotRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline ClonePolarFsBasicSnapshotRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline ClonePolarFsBasicSnapshotRequest& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    shared_ptr<string> sourcePath_ {};
    shared_ptr<string> targetPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
