// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveSnapshotDetectPornConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveSnapshotDetectPornConfigResponseBody() = default ;
    DeleteLiveSnapshotDetectPornConfigResponseBody(const DeleteLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DeleteLiveSnapshotDetectPornConfigResponseBody(DeleteLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    DeleteLiveSnapshotDetectPornConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotDetectPornConfigResponseBody() = default ;
    DeleteLiveSnapshotDetectPornConfigResponseBody& operator=(const DeleteLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DeleteLiveSnapshotDetectPornConfigResponseBody& operator=(DeleteLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveSnapshotDetectPornConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
