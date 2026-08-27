// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetServiceLinkedRoleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetServiceLinkedRoleTemplateRequest() = default ;
    GetServiceLinkedRoleTemplateRequest(const GetServiceLinkedRoleTemplateRequest &) = default ;
    GetServiceLinkedRoleTemplateRequest(GetServiceLinkedRoleTemplateRequest &&) = default ;
    GetServiceLinkedRoleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleTemplateRequest() = default ;
    GetServiceLinkedRoleTemplateRequest& operator=(const GetServiceLinkedRoleTemplateRequest &) = default ;
    GetServiceLinkedRoleTemplateRequest& operator=(GetServiceLinkedRoleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceName_ == nullptr; };
    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceLinkedRoleTemplateRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The cloud service name.
    // 
    // For more information, see the **Cloud service identity** column in [Cloud services that support service-linked roles](https://help.aliyun.com/document_detail/461722.html).
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
