// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAISERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAISERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListAIServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListAIServicesResponseBody() = default ;
    ListAIServicesResponseBody(const ListAIServicesResponseBody &) = default ;
    ListAIServicesResponseBody(ListAIServicesResponseBody &&) = default ;
    ListAIServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIServicesResponseBody() = default ;
    ListAIServicesResponseBody& operator=(const ListAIServicesResponseBody &) = default ;
    ListAIServicesResponseBody& operator=(ListAIServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PrivateApiDevUrl, privateApiDevUrl_);
        DARABONBA_PTR_TO_JSON(PrivateWorkbenchUrl, privateWorkbenchUrl_);
        DARABONBA_PTR_TO_JSON(PublicApiDevUrl, publicApiDevUrl_);
        DARABONBA_PTR_TO_JSON(PublicWorkbenchUrl, publicWorkbenchUrl_);
        DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
        DARABONBA_PTR_TO_JSON(ServiceAccount, serviceAccount_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PrivateApiDevUrl, privateApiDevUrl_);
        DARABONBA_PTR_FROM_JSON(PrivateWorkbenchUrl, privateWorkbenchUrl_);
        DARABONBA_PTR_FROM_JSON(PublicApiDevUrl, publicApiDevUrl_);
        DARABONBA_PTR_FROM_JSON(PublicWorkbenchUrl, publicWorkbenchUrl_);
        DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
        DARABONBA_PTR_FROM_JSON(ServiceAccount, serviceAccount_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->privateApiDevUrl_ == nullptr && this->privateWorkbenchUrl_ == nullptr && this->publicApiDevUrl_ == nullptr && this->publicWorkbenchUrl_ == nullptr
        && this->securityIpList_ == nullptr && this->serviceAccount_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Services& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Services& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // privateApiDevUrl Field Functions 
      bool hasPrivateApiDevUrl() const { return this->privateApiDevUrl_ != nullptr;};
      void deletePrivateApiDevUrl() { this->privateApiDevUrl_ = nullptr;};
      inline string getPrivateApiDevUrl() const { DARABONBA_PTR_GET_DEFAULT(privateApiDevUrl_, "") };
      inline Services& setPrivateApiDevUrl(string privateApiDevUrl) { DARABONBA_PTR_SET_VALUE(privateApiDevUrl_, privateApiDevUrl) };


      // privateWorkbenchUrl Field Functions 
      bool hasPrivateWorkbenchUrl() const { return this->privateWorkbenchUrl_ != nullptr;};
      void deletePrivateWorkbenchUrl() { this->privateWorkbenchUrl_ = nullptr;};
      inline string getPrivateWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(privateWorkbenchUrl_, "") };
      inline Services& setPrivateWorkbenchUrl(string privateWorkbenchUrl) { DARABONBA_PTR_SET_VALUE(privateWorkbenchUrl_, privateWorkbenchUrl) };


      // publicApiDevUrl Field Functions 
      bool hasPublicApiDevUrl() const { return this->publicApiDevUrl_ != nullptr;};
      void deletePublicApiDevUrl() { this->publicApiDevUrl_ = nullptr;};
      inline string getPublicApiDevUrl() const { DARABONBA_PTR_GET_DEFAULT(publicApiDevUrl_, "") };
      inline Services& setPublicApiDevUrl(string publicApiDevUrl) { DARABONBA_PTR_SET_VALUE(publicApiDevUrl_, publicApiDevUrl) };


      // publicWorkbenchUrl Field Functions 
      bool hasPublicWorkbenchUrl() const { return this->publicWorkbenchUrl_ != nullptr;};
      void deletePublicWorkbenchUrl() { this->publicWorkbenchUrl_ = nullptr;};
      inline string getPublicWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(publicWorkbenchUrl_, "") };
      inline Services& setPublicWorkbenchUrl(string publicWorkbenchUrl) { DARABONBA_PTR_SET_VALUE(publicWorkbenchUrl_, publicWorkbenchUrl) };


      // securityIpList Field Functions 
      bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
      void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
      inline string getSecurityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
      inline Services& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


      // serviceAccount Field Functions 
      bool hasServiceAccount() const { return this->serviceAccount_ != nullptr;};
      void deleteServiceAccount() { this->serviceAccount_ = nullptr;};
      inline string getServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(serviceAccount_, "") };
      inline Services& setServiceAccount(string serviceAccount) { DARABONBA_PTR_SET_VALUE(serviceAccount_, serviceAccount) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Services& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> privateApiDevUrl_ {};
      shared_ptr<string> privateWorkbenchUrl_ {};
      shared_ptr<string> publicApiDevUrl_ {};
      shared_ptr<string> publicWorkbenchUrl_ {};
      shared_ptr<string> securityIpList_ {};
      shared_ptr<string> serviceAccount_ {};
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAIServicesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline ListAIServicesResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListAIServicesResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListAIServicesResponseBody::Services>) };
    inline vector<ListAIServicesResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListAIServicesResponseBody::Services>) };
    inline ListAIServicesResponseBody& setServices(const vector<ListAIServicesResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListAIServicesResponseBody& setServices(vector<ListAIServicesResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline ListAIServicesResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListAIServicesResponseBody::Services>> services_ {};
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
