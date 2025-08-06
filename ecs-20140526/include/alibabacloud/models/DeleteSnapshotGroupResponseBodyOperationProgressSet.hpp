// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSET_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteSnapshotGroupResponseBodyOperationProgressSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotGroupResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgress, operationProgress_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotGroupResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgress, operationProgress_);
    };
    DeleteSnapshotGroupResponseBodyOperationProgressSet() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSet(const DeleteSnapshotGroupResponseBodyOperationProgressSet &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSet(DeleteSnapshotGroupResponseBodyOperationProgressSet &&) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotGroupResponseBodyOperationProgressSet() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSet& operator=(const DeleteSnapshotGroupResponseBodyOperationProgressSet &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSet& operator=(DeleteSnapshotGroupResponseBodyOperationProgressSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationProgress_ != nullptr; };
    // operationProgress Field Functions 
    bool hasOperationProgress() const { return this->operationProgress_ != nullptr;};
    void deleteOperationProgress() { this->operationProgress_ = nullptr;};
    inline const vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress> & operationProgress() const { DARABONBA_PTR_GET_CONST(operationProgress_, vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress>) };
    inline vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress> operationProgress() { DARABONBA_PTR_GET(operationProgress_, vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress>) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSet& setOperationProgress(const vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress> & operationProgress) { DARABONBA_PTR_SET_VALUE(operationProgress_, operationProgress) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSet& setOperationProgress(vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress> && operationProgress) { DARABONBA_PTR_SET_RVALUE(operationProgress_, operationProgress) };


  protected:
    std::shared_ptr<vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress>> operationProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
