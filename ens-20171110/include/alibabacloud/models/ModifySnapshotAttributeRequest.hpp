// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSNAPSHOTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSNAPSHOTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifySnapshotAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySnapshotAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySnapshotAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
    };
    ModifySnapshotAttributeRequest() = default ;
    ModifySnapshotAttributeRequest(const ModifySnapshotAttributeRequest &) = default ;
    ModifySnapshotAttributeRequest(ModifySnapshotAttributeRequest &&) = default ;
    ModifySnapshotAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySnapshotAttributeRequest() = default ;
    ModifySnapshotAttributeRequest& operator=(const ModifySnapshotAttributeRequest &) = default ;
    ModifySnapshotAttributeRequest& operator=(ModifySnapshotAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifySnapshotAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ModifySnapshotAttributeRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline ModifySnapshotAttributeRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


  protected:
    // The description of the snapshot. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The ID of the snapshot.
    // 
    // This parameter is required.
    shared_ptr<string> snapshotId_ {};
    // The name of the snapshot. The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // The name cannot start with **auto** because snapshots whose names start with auto are recognized as automatic snapshots.
    shared_ptr<string> snapshotName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
