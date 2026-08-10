// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINFINITECANVASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINFINITECANVASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetInfiniteCanvasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInfiniteCanvasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CanvasId, canvasId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInfiniteCanvasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CanvasId, canvasId_);
    };
    GetInfiniteCanvasRequest() = default ;
    GetInfiniteCanvasRequest(const GetInfiniteCanvasRequest &) = default ;
    GetInfiniteCanvasRequest(GetInfiniteCanvasRequest &&) = default ;
    GetInfiniteCanvasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInfiniteCanvasRequest() = default ;
    GetInfiniteCanvasRequest& operator=(const GetInfiniteCanvasRequest &) = default ;
    GetInfiniteCanvasRequest& operator=(GetInfiniteCanvasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canvasId_ == nullptr; };
    // canvasId Field Functions 
    bool hasCanvasId() const { return this->canvasId_ != nullptr;};
    void deleteCanvasId() { this->canvasId_ = nullptr;};
    inline string getCanvasId() const { DARABONBA_PTR_GET_DEFAULT(canvasId_, "") };
    inline GetInfiniteCanvasRequest& setCanvasId(string canvasId) { DARABONBA_PTR_SET_VALUE(canvasId_, canvasId) };


  protected:
    // The ID of the infinite canvas.
    // 
    // This parameter is required.
    shared_ptr<string> canvasId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
