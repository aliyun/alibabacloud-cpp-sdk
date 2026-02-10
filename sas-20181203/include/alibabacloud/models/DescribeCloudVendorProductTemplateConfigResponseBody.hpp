// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORPRODUCTTEMPLATECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORPRODUCTTEMPLATECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorProductTemplateConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorProductTemplateConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorProductTemplateConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudVendorProductTemplateConfigResponseBody() = default ;
    DescribeCloudVendorProductTemplateConfigResponseBody(const DescribeCloudVendorProductTemplateConfigResponseBody &) = default ;
    DescribeCloudVendorProductTemplateConfigResponseBody(DescribeCloudVendorProductTemplateConfigResponseBody &&) = default ;
    DescribeCloudVendorProductTemplateConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorProductTemplateConfigResponseBody() = default ;
    DescribeCloudVendorProductTemplateConfigResponseBody& operator=(const DescribeCloudVendorProductTemplateConfigResponseBody &) = default ;
    DescribeCloudVendorProductTemplateConfigResponseBody& operator=(DescribeCloudVendorProductTemplateConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeCloudVendorProductTemplateConfigResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudVendorProductTemplateConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Template configuration. This parameter is a JSON structure that includes the following fields: - **vendors**: A collection of vendor template configuration information. - **vendorType**: Vendor code, **CHAITIN** takes the value **100**, **FORTINET** takes the value **101**, and **THREATBOOK** takes the value **102**. - **vendor**: Vendor. Takes the values **CHAITIN**, **FORTINET**, or **THREATBOOK**. - **displayName**: Display name. Takes the values **Chaitin**, **Fortinet**, or **Threatbook**. - **products**: A list of template configuration information. This parameter is a JSON structure that includes the following fields: - **product**: Product code. When **vendor** is **CHAITIN**, it takes the value **webFirewall**; when **vendor** is **FORTINET**, it takes the value **fortigate**; when **vendor** is **THREATBOOK**, it takes the value **threatIntelligence**. - **displayName**: Product display name. When **vendor** is **CHAITIN**, it takes the value **WAF**; when **vendor** is **FORTINET**, it takes the value **FortiGate Firewall**; when **vendor** is **THREATBOOK**, it takes the value **Threat Intelligence API**. - **description**: Link to the technical support document for the product. - **backendConfig**: A list of API field mapping rules. This parameter is a JSON structure that includes the following fields: - **apiParams**: API field mapping rules. This parameter is a Map structure where the key is the backend field mapping key. The value is a JSON structure that includes the following fields: - **field**: Property key. - **format**: Type of the property value, which can be **text** or **json**. - **fields**: Fields that need to be filled in the template. This parameter is a JSON structure that includes the following fields: - **displayName**: Field display name. - **editable**: Whether the field is editable. Takes the values **true** or **false**. **true** means editable, **false** means not editable. - **fieldType**: Type of the field value. Takes the values **text** or **password**. - **required**: Whether the field is required. Takes the values **true** or **false**. **true** means required, **false** means not required. - **fieldId**: Field key.
    shared_ptr<string> data_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for this request, and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
