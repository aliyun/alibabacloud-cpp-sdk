// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEPOLARFSBASICSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEPOLARFSBASICSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ClonePolarFsBasicSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClonePolarFsBasicSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
    };
    friend void from_json(const Darabonba::Json& j, ClonePolarFsBasicSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
    };
    ClonePolarFsBasicSnapshotResponseBody() = default ;
    ClonePolarFsBasicSnapshotResponseBody(const ClonePolarFsBasicSnapshotResponseBody &) = default ;
    ClonePolarFsBasicSnapshotResponseBody(ClonePolarFsBasicSnapshotResponseBody &&) = default ;
    ClonePolarFsBasicSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClonePolarFsBasicSnapshotResponseBody() = default ;
    ClonePolarFsBasicSnapshotResponseBody& operator=(const ClonePolarFsBasicSnapshotResponseBody &) = default ;
    ClonePolarFsBasicSnapshotResponseBody& operator=(ClonePolarFsBasicSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->requestId_ == nullptr && this->sourcePath_ == nullptr && this->targetPath_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ClonePolarFsBasicSnapshotResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ClonePolarFsBasicSnapshotResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClonePolarFsBasicSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline ClonePolarFsBasicSnapshotResponseBody& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline ClonePolarFsBasicSnapshotResponseBody& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourcePath_ {};
    shared_ptr<string> targetPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
