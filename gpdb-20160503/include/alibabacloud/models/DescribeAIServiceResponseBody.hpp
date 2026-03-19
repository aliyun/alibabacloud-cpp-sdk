// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAIServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PrivateApiDevUrl, privateApiDevUrl_);
      DARABONBA_PTR_TO_JSON(PrivateWorkbenchUrl, privateWorkbenchUrl_);
      DARABONBA_PTR_TO_JSON(PublicApiDevUrl, publicApiDevUrl_);
      DARABONBA_PTR_TO_JSON(PublicWorkbenchUrl, publicWorkbenchUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_TO_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PrivateApiDevUrl, privateApiDevUrl_);
      DARABONBA_PTR_FROM_JSON(PrivateWorkbenchUrl, privateWorkbenchUrl_);
      DARABONBA_PTR_FROM_JSON(PublicApiDevUrl, publicApiDevUrl_);
      DARABONBA_PTR_FROM_JSON(PublicWorkbenchUrl, publicWorkbenchUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_FROM_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAIServiceResponseBody() = default ;
    DescribeAIServiceResponseBody(const DescribeAIServiceResponseBody &) = default ;
    DescribeAIServiceResponseBody(DescribeAIServiceResponseBody &&) = default ;
    DescribeAIServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIServiceResponseBody() = default ;
    DescribeAIServiceResponseBody& operator=(const DescribeAIServiceResponseBody &) = default ;
    DescribeAIServiceResponseBody& operator=(DescribeAIServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->privateApiDevUrl_ == nullptr && this->privateWorkbenchUrl_ == nullptr && this->publicApiDevUrl_ == nullptr && this->publicWorkbenchUrl_ == nullptr
        && this->requestId_ == nullptr && this->securityIpList_ == nullptr && this->serviceAccount_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAIServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAIServiceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // privateApiDevUrl Field Functions 
    bool hasPrivateApiDevUrl() const { return this->privateApiDevUrl_ != nullptr;};
    void deletePrivateApiDevUrl() { this->privateApiDevUrl_ = nullptr;};
    inline string getPrivateApiDevUrl() const { DARABONBA_PTR_GET_DEFAULT(privateApiDevUrl_, "") };
    inline DescribeAIServiceResponseBody& setPrivateApiDevUrl(string privateApiDevUrl) { DARABONBA_PTR_SET_VALUE(privateApiDevUrl_, privateApiDevUrl) };


    // privateWorkbenchUrl Field Functions 
    bool hasPrivateWorkbenchUrl() const { return this->privateWorkbenchUrl_ != nullptr;};
    void deletePrivateWorkbenchUrl() { this->privateWorkbenchUrl_ = nullptr;};
    inline string getPrivateWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(privateWorkbenchUrl_, "") };
    inline DescribeAIServiceResponseBody& setPrivateWorkbenchUrl(string privateWorkbenchUrl) { DARABONBA_PTR_SET_VALUE(privateWorkbenchUrl_, privateWorkbenchUrl) };


    // publicApiDevUrl Field Functions 
    bool hasPublicApiDevUrl() const { return this->publicApiDevUrl_ != nullptr;};
    void deletePublicApiDevUrl() { this->publicApiDevUrl_ = nullptr;};
    inline string getPublicApiDevUrl() const { DARABONBA_PTR_GET_DEFAULT(publicApiDevUrl_, "") };
    inline DescribeAIServiceResponseBody& setPublicApiDevUrl(string publicApiDevUrl) { DARABONBA_PTR_SET_VALUE(publicApiDevUrl_, publicApiDevUrl) };


    // publicWorkbenchUrl Field Functions 
    bool hasPublicWorkbenchUrl() const { return this->publicWorkbenchUrl_ != nullptr;};
    void deletePublicWorkbenchUrl() { this->publicWorkbenchUrl_ = nullptr;};
    inline string getPublicWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(publicWorkbenchUrl_, "") };
    inline DescribeAIServiceResponseBody& setPublicWorkbenchUrl(string publicWorkbenchUrl) { DARABONBA_PTR_SET_VALUE(publicWorkbenchUrl_, publicWorkbenchUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline string getSecurityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
    inline DescribeAIServiceResponseBody& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


    // serviceAccount Field Functions 
    bool hasServiceAccount() const { return this->serviceAccount_ != nullptr;};
    void deleteServiceAccount() { this->serviceAccount_ = nullptr;};
    inline string getServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(serviceAccount_, "") };
    inline DescribeAIServiceResponseBody& setServiceAccount(string serviceAccount) { DARABONBA_PTR_SET_VALUE(serviceAccount_, serviceAccount) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeAIServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAIServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> privateApiDevUrl_ {};
    shared_ptr<string> privateWorkbenchUrl_ {};
    shared_ptr<string> publicApiDevUrl_ {};
    shared_ptr<string> publicWorkbenchUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityIpList_ {};
    shared_ptr<string> serviceAccount_ {};
    shared_ptr<string> serviceId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
