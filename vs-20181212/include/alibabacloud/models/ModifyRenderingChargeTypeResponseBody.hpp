// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRENDERINGCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRENDERINGCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyRenderingChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRenderingChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRenderingChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyRenderingChargeTypeResponseBody() = default ;
    ModifyRenderingChargeTypeResponseBody(const ModifyRenderingChargeTypeResponseBody &) = default ;
    ModifyRenderingChargeTypeResponseBody(ModifyRenderingChargeTypeResponseBody &&) = default ;
    ModifyRenderingChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRenderingChargeTypeResponseBody() = default ;
    ModifyRenderingChargeTypeResponseBody& operator=(const ModifyRenderingChargeTypeResponseBody &) = default ;
    ModifyRenderingChargeTypeResponseBody& operator=(ModifyRenderingChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstanceId_ == nullptr
        && this->requestId_ == nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ModifyRenderingChargeTypeResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRenderingChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> renderingInstanceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
