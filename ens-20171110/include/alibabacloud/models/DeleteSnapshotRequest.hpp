// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
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
    virtual bool empty() const override { this->snapshotId_ != nullptr; };
    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DeleteSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
