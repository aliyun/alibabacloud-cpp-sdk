// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWATERMARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWATERMARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class DeleteWaterMarkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
    };
    DeleteWaterMarkTemplateResponseBody() = default ;
    DeleteWaterMarkTemplateResponseBody(const DeleteWaterMarkTemplateResponseBody &) = default ;
    DeleteWaterMarkTemplateResponseBody(DeleteWaterMarkTemplateResponseBody &&) = default ;
    DeleteWaterMarkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWaterMarkTemplateResponseBody() = default ;
    DeleteWaterMarkTemplateResponseBody& operator=(const DeleteWaterMarkTemplateResponseBody &) = default ;
    DeleteWaterMarkTemplateResponseBody& operator=(DeleteWaterMarkTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->waterMarkTemplateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWaterMarkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waterMarkTemplateId Field Functions 
    bool hasWaterMarkTemplateId() const { return this->waterMarkTemplateId_ != nullptr;};
    void deleteWaterMarkTemplateId() { this->waterMarkTemplateId_ = nullptr;};
    inline string getWaterMarkTemplateId() const { DARABONBA_PTR_GET_DEFAULT(waterMarkTemplateId_, "") };
    inline DeleteWaterMarkTemplateResponseBody& setWaterMarkTemplateId(string waterMarkTemplateId) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateId_, waterMarkTemplateId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the deleted watermark template.
    shared_ptr<string> waterMarkTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
