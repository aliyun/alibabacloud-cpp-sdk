// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityTemplateResponseBodyDataQualityTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityTemplate, dataQualityTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityTemplate, dataQualityTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityTemplateResponseBody() = default ;
    GetDataQualityTemplateResponseBody(const GetDataQualityTemplateResponseBody &) = default ;
    GetDataQualityTemplateResponseBody(GetDataQualityTemplateResponseBody &&) = default ;
    GetDataQualityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityTemplateResponseBody() = default ;
    GetDataQualityTemplateResponseBody& operator=(const GetDataQualityTemplateResponseBody &) = default ;
    GetDataQualityTemplateResponseBody& operator=(GetDataQualityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityTemplate_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityTemplate Field Functions 
    bool hasDataQualityTemplate() const { return this->dataQualityTemplate_ != nullptr;};
    void deleteDataQualityTemplate() { this->dataQualityTemplate_ = nullptr;};
    inline const GetDataQualityTemplateResponseBodyDataQualityTemplate & dataQualityTemplate() const { DARABONBA_PTR_GET_CONST(dataQualityTemplate_, GetDataQualityTemplateResponseBodyDataQualityTemplate) };
    inline GetDataQualityTemplateResponseBodyDataQualityTemplate dataQualityTemplate() { DARABONBA_PTR_GET(dataQualityTemplate_, GetDataQualityTemplateResponseBodyDataQualityTemplate) };
    inline GetDataQualityTemplateResponseBody& setDataQualityTemplate(const GetDataQualityTemplateResponseBodyDataQualityTemplate & dataQualityTemplate) { DARABONBA_PTR_SET_VALUE(dataQualityTemplate_, dataQualityTemplate) };
    inline GetDataQualityTemplateResponseBody& setDataQualityTemplate(GetDataQualityTemplateResponseBodyDataQualityTemplate && dataQualityTemplate) { DARABONBA_PTR_SET_RVALUE(dataQualityTemplate_, dataQualityTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data quality rule template.
    std::shared_ptr<GetDataQualityTemplateResponseBodyDataQualityTemplate> dataQualityTemplate_ = nullptr;
    // The API request ID, which is generated as a UUID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
