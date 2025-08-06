// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSnapshotGroupResponseBodyOperationProgressSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteSnapshotGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteSnapshotGroupResponseBody() = default ;
    DeleteSnapshotGroupResponseBody(const DeleteSnapshotGroupResponseBody &) = default ;
    DeleteSnapshotGroupResponseBody(DeleteSnapshotGroupResponseBody &&) = default ;
    DeleteSnapshotGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotGroupResponseBody() = default ;
    DeleteSnapshotGroupResponseBody& operator=(const DeleteSnapshotGroupResponseBody &) = default ;
    DeleteSnapshotGroupResponseBody& operator=(DeleteSnapshotGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationProgressSet_ != nullptr
        && this->requestId_ != nullptr; };
    // operationProgressSet Field Functions 
    bool hasOperationProgressSet() const { return this->operationProgressSet_ != nullptr;};
    void deleteOperationProgressSet() { this->operationProgressSet_ = nullptr;};
    inline const DeleteSnapshotGroupResponseBodyOperationProgressSet & operationProgressSet() const { DARABONBA_PTR_GET_CONST(operationProgressSet_, DeleteSnapshotGroupResponseBodyOperationProgressSet) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSet operationProgressSet() { DARABONBA_PTR_GET(operationProgressSet_, DeleteSnapshotGroupResponseBodyOperationProgressSet) };
    inline DeleteSnapshotGroupResponseBody& setOperationProgressSet(const DeleteSnapshotGroupResponseBodyOperationProgressSet & operationProgressSet) { DARABONBA_PTR_SET_VALUE(operationProgressSet_, operationProgressSet) };
    inline DeleteSnapshotGroupResponseBody& setOperationProgressSet(DeleteSnapshotGroupResponseBodyOperationProgressSet && operationProgressSet) { DARABONBA_PTR_SET_RVALUE(operationProgressSet_, operationProgressSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSnapshotGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the delete operation.
    std::shared_ptr<DeleteSnapshotGroupResponseBodyOperationProgressSet> operationProgressSet_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
