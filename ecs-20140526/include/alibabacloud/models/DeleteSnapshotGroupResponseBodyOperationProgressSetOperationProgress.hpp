// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(RelatedItemSet, relatedItemSet_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(RelatedItemSet, relatedItemSet_);
    };
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress(const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress(DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress &&) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& operator=(const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& operator=(DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->operationStatus_ == nullptr && return this->relatedItemSet_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // relatedItemSet Field Functions 
    bool hasRelatedItemSet() const { return this->relatedItemSet_ != nullptr;};
    void deleteRelatedItemSet() { this->relatedItemSet_ = nullptr;};
    inline const Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet & relatedItemSet() const { DARABONBA_PTR_GET_CONST(relatedItemSet_, Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet) };
    inline Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet relatedItemSet() { DARABONBA_PTR_GET(relatedItemSet_, Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& setRelatedItemSet(const Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet & relatedItemSet) { DARABONBA_PTR_SET_VALUE(relatedItemSet_, relatedItemSet) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgress& setRelatedItemSet(Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet && relatedItemSet) { DARABONBA_PTR_SET_RVALUE(relatedItemSet_, relatedItemSet) };


  protected:
    // The error code. This parameter is empty when the operation is successful.
    // 
    // For information about error codes and error messages, visit the [API error center](https://error-center.aliyun.com/status/product/Ecs).
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message. This parameter is empty when the operation is successful.
    // 
    // For information about error codes and error messages, visit the [API error center](https://error-center.aliyun.com/status/product/Ecs).
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Indicates whether the operation was successful. If the operation was successful, a value of Success is returned. If the operation failed, an error code and an error message are returned.
    std::shared_ptr<string> operationStatus_ = nullptr;
    // Details about the resources.
    std::shared_ptr<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet> relatedItemSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
