// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSBYINSTANCEIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSBYINSTANCEIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListSnapshotReposByInstanceIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotReposByInstanceIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(snapWarehouse, snapWarehouse_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotReposByInstanceIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(snapWarehouse, snapWarehouse_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListSnapshotReposByInstanceIdResponseBodyResult() = default ;
    ListSnapshotReposByInstanceIdResponseBodyResult(const ListSnapshotReposByInstanceIdResponseBodyResult &) = default ;
    ListSnapshotReposByInstanceIdResponseBodyResult(ListSnapshotReposByInstanceIdResponseBodyResult &&) = default ;
    ListSnapshotReposByInstanceIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotReposByInstanceIdResponseBodyResult() = default ;
    ListSnapshotReposByInstanceIdResponseBodyResult& operator=(const ListSnapshotReposByInstanceIdResponseBodyResult &) = default ;
    ListSnapshotReposByInstanceIdResponseBodyResult& operator=(ListSnapshotReposByInstanceIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->repoPath_ != nullptr && this->snapWarehouse_ != nullptr && this->status_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSnapshotReposByInstanceIdResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline ListSnapshotReposByInstanceIdResponseBodyResult& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


    // snapWarehouse Field Functions 
    bool hasSnapWarehouse() const { return this->snapWarehouse_ != nullptr;};
    void deleteSnapWarehouse() { this->snapWarehouse_ = nullptr;};
    inline string snapWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snapWarehouse_, "") };
    inline ListSnapshotReposByInstanceIdResponseBodyResult& setSnapWarehouse(string snapWarehouse) { DARABONBA_PTR_SET_VALUE(snapWarehouse_, snapWarehouse) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSnapshotReposByInstanceIdResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Reference instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The address of the repository.
    std::shared_ptr<string> repoPath_ = nullptr;
    // Reference warehouse name.
    std::shared_ptr<string> snapWarehouse_ = nullptr;
    // Reference warehouse status. available indicates that it is valid. unavailable indicates that it is invalid.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
