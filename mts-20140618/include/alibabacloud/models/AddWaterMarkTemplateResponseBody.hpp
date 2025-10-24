// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWATERMARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDWATERMARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddWaterMarkTemplateResponseBodyWaterMarkTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddWaterMarkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, AddWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    AddWaterMarkTemplateResponseBody() = default ;
    AddWaterMarkTemplateResponseBody(const AddWaterMarkTemplateResponseBody &) = default ;
    AddWaterMarkTemplateResponseBody(AddWaterMarkTemplateResponseBody &&) = default ;
    AddWaterMarkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWaterMarkTemplateResponseBody() = default ;
    AddWaterMarkTemplateResponseBody& operator=(const AddWaterMarkTemplateResponseBody &) = default ;
    AddWaterMarkTemplateResponseBody& operator=(AddWaterMarkTemplateResponseBody &&) = default ;
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
    inline AddWaterMarkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waterMarkTemplate Field Functions 
    bool hasWaterMarkTemplate() const { return this->waterMarkTemplate_ != nullptr;};
    void deleteWaterMarkTemplate() { this->waterMarkTemplate_ = nullptr;};
    inline const AddWaterMarkTemplateResponseBodyWaterMarkTemplate & waterMarkTemplate() const { DARABONBA_PTR_GET_CONST(waterMarkTemplate_, AddWaterMarkTemplateResponseBodyWaterMarkTemplate) };
    inline AddWaterMarkTemplateResponseBodyWaterMarkTemplate waterMarkTemplate() { DARABONBA_PTR_GET(waterMarkTemplate_, AddWaterMarkTemplateResponseBodyWaterMarkTemplate) };
    inline AddWaterMarkTemplateResponseBody& setWaterMarkTemplate(const AddWaterMarkTemplateResponseBodyWaterMarkTemplate & waterMarkTemplate) { DARABONBA_PTR_SET_VALUE(waterMarkTemplate_, waterMarkTemplate) };
    inline AddWaterMarkTemplateResponseBody& setWaterMarkTemplate(AddWaterMarkTemplateResponseBodyWaterMarkTemplate && waterMarkTemplate) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplate_, waterMarkTemplate) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the watermark template.
    std::shared_ptr<AddWaterMarkTemplateResponseBodyWaterMarkTemplate> waterMarkTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
