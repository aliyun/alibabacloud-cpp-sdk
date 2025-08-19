// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(indices, indices_);
      DARABONBA_PTR_TO_JSON(snapshot, snapshot_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(indices, indices_);
      DARABONBA_PTR_FROM_JSON(snapshot, snapshot_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateSnapshotRequest() = default ;
    CreateSnapshotRequest(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest(CreateSnapshotRequest &&) = default ;
    CreateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotRequest() = default ;
    CreateSnapshotRequest& operator=(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest& operator=(CreateSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indices_ != nullptr
        && this->snapshot_ != nullptr && this->dryRun_ != nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline string indices() const { DARABONBA_PTR_GET_DEFAULT(indices_, "") };
    inline CreateSnapshotRequest& setIndices(string indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline string snapshot() const { DARABONBA_PTR_GET_DEFAULT(snapshot_, "") };
    inline CreateSnapshotRequest& setSnapshot(string snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSnapshotRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> indices_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> snapshot_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
