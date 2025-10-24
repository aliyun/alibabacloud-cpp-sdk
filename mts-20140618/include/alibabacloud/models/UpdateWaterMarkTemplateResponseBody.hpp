// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateWaterMarkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    UpdateWaterMarkTemplateResponseBody() = default ;
    UpdateWaterMarkTemplateResponseBody(const UpdateWaterMarkTemplateResponseBody &) = default ;
    UpdateWaterMarkTemplateResponseBody(UpdateWaterMarkTemplateResponseBody &&) = default ;
    UpdateWaterMarkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaterMarkTemplateResponseBody() = default ;
    UpdateWaterMarkTemplateResponseBody& operator=(const UpdateWaterMarkTemplateResponseBody &) = default ;
    UpdateWaterMarkTemplateResponseBody& operator=(UpdateWaterMarkTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->waterMarkTemplate_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWaterMarkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waterMarkTemplate Field Functions 
    bool hasWaterMarkTemplate() const { return this->waterMarkTemplate_ != nullptr;};
    void deleteWaterMarkTemplate() { this->waterMarkTemplate_ = nullptr;};
    inline const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate & waterMarkTemplate() const { DARABONBA_PTR_GET_CONST(waterMarkTemplate_, UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate waterMarkTemplate() { DARABONBA_PTR_GET(waterMarkTemplate_, UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBody& setWaterMarkTemplate(const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate & waterMarkTemplate) { DARABONBA_PTR_SET_VALUE(waterMarkTemplate_, waterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBody& setWaterMarkTemplate(UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate && waterMarkTemplate) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplate_, waterMarkTemplate) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the watermark template.
    std::shared_ptr<UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate> waterMarkTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
