// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CopySnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody(CopySnapshotResponseBody &&) = default ;
    CopySnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody& operator=(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody& operator=(CopySnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopySnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CopySnapshotResponseBody& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the new snapshot.
    shared_ptr<string> snapshotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
