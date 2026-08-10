// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINFINITECANVASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINFINITECANVASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class UpdateInfiniteCanvasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInfiniteCanvasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanvasId, canvasId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInfiniteCanvasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanvasId, canvasId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateInfiniteCanvasResponseBody() = default ;
    UpdateInfiniteCanvasResponseBody(const UpdateInfiniteCanvasResponseBody &) = default ;
    UpdateInfiniteCanvasResponseBody(UpdateInfiniteCanvasResponseBody &&) = default ;
    UpdateInfiniteCanvasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInfiniteCanvasResponseBody() = default ;
    UpdateInfiniteCanvasResponseBody& operator=(const UpdateInfiniteCanvasResponseBody &) = default ;
    UpdateInfiniteCanvasResponseBody& operator=(UpdateInfiniteCanvasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canvasId_ == nullptr
        && this->requestId_ == nullptr; };
    // canvasId Field Functions 
    bool hasCanvasId() const { return this->canvasId_ != nullptr;};
    void deleteCanvasId() { this->canvasId_ = nullptr;};
    inline string getCanvasId() const { DARABONBA_PTR_GET_DEFAULT(canvasId_, "") };
    inline UpdateInfiniteCanvasResponseBody& setCanvasId(string canvasId) { DARABONBA_PTR_SET_VALUE(canvasId_, canvasId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateInfiniteCanvasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the infinite canvas.
    shared_ptr<string> canvasId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
