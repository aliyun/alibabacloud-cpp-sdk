// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    ListGatewayRequest() = default ;
    ListGatewayRequest(const ListGatewayRequest &) = default ;
    ListGatewayRequest(ListGatewayRequest &&) = default ;
    ListGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRequest() = default ;
    ListGatewayRequest& operator=(const ListGatewayRequest &) = default ;
    ListGatewayRequest& operator=(ListGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr
        && this->gatewayName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceName_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline ListGatewayRequest& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListGatewayRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    // The private gateway ID. To obtain the private gateway ID, see the private_gateway_id parameter in the response parameters of the ListResources operation.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The private gateway alias.
    std::shared_ptr<string> gatewayName_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group. To obtain a resource group ID, see the ResourceId field in the response of the [ListResources](https://help.aliyun.com/document_detail/412133.html) operation.
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
