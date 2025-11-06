// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListEurekaInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEurekaInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEurekaInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListEurekaInstancesRequest() = default ;
    ListEurekaInstancesRequest(const ListEurekaInstancesRequest &) = default ;
    ListEurekaInstancesRequest(ListEurekaInstancesRequest &&) = default ;
    ListEurekaInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEurekaInstancesRequest() = default ;
    ListEurekaInstancesRequest& operator=(const ListEurekaInstancesRequest &) = default ;
    ListEurekaInstancesRequest& operator=(ListEurekaInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestPars_ == nullptr && return this->serviceName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListEurekaInstancesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListEurekaInstancesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListEurekaInstancesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEurekaInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListEurekaInstancesRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListEurekaInstancesRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The name of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
