// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapShotId, snapShotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapShotId, snapShotId_);
    };
    CreateSnapshotResponseBody() = default ;
    CreateSnapshotResponseBody(const CreateSnapshotResponseBody &) = default ;
    CreateSnapshotResponseBody(CreateSnapshotResponseBody &&) = default ;
    CreateSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotResponseBody() = default ;
    CreateSnapshotResponseBody& operator=(const CreateSnapshotResponseBody &) = default ;
    CreateSnapshotResponseBody& operator=(CreateSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr && return this->snapShotId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateSnapshotResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapShotId Field Functions 
    bool hasSnapShotId() const { return this->snapShotId_ != nullptr;};
    void deleteSnapShotId() { this->snapShotId_ = nullptr;};
    inline const vector<string> & snapShotId() const { DARABONBA_PTR_GET_CONST(snapShotId_, vector<string>) };
    inline vector<string> snapShotId() { DARABONBA_PTR_GET(snapShotId_, vector<string>) };
    inline CreateSnapshotResponseBody& setSnapShotId(const vector<string> & snapShotId) { DARABONBA_PTR_SET_VALUE(snapShotId_, snapShotId) };
    inline CreateSnapshotResponseBody& setSnapShotId(vector<string> && snapShotId) { DARABONBA_PTR_SET_RVALUE(snapShotId_, snapShotId) };


  protected:
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the snapshots.
    std::shared_ptr<vector<string>> snapShotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
