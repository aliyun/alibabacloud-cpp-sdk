// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListEnvironmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliasLike, aliasLike_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayNameLike, gatewayNameLike_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliasLike, aliasLike_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayNameLike, gatewayNameLike_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    ListEnvironmentsRequest() = default ;
    ListEnvironmentsRequest(const ListEnvironmentsRequest &) = default ;
    ListEnvironmentsRequest(ListEnvironmentsRequest &&) = default ;
    ListEnvironmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsRequest() = default ;
    ListEnvironmentsRequest& operator=(const ListEnvironmentsRequest &) = default ;
    ListEnvironmentsRequest& operator=(ListEnvironmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasLike_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayNameLike_ == nullptr && return this->gatewayType_ == nullptr && return this->nameLike_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // aliasLike Field Functions 
    bool hasAliasLike() const { return this->aliasLike_ != nullptr;};
    void deleteAliasLike() { this->aliasLike_ = nullptr;};
    inline string aliasLike() const { DARABONBA_PTR_GET_DEFAULT(aliasLike_, "") };
    inline ListEnvironmentsRequest& setAliasLike(string aliasLike) { DARABONBA_PTR_SET_VALUE(aliasLike_, aliasLike) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListEnvironmentsRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayNameLike Field Functions 
    bool hasGatewayNameLike() const { return this->gatewayNameLike_ != nullptr;};
    void deleteGatewayNameLike() { this->gatewayNameLike_ = nullptr;};
    inline string gatewayNameLike() const { DARABONBA_PTR_GET_DEFAULT(gatewayNameLike_, "") };
    inline ListEnvironmentsRequest& setGatewayNameLike(string gatewayNameLike) { DARABONBA_PTR_SET_VALUE(gatewayNameLike_, gatewayNameLike) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListEnvironmentsRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListEnvironmentsRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEnvironmentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEnvironmentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEnvironmentsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Environment alias, fuzzy search.
    std::shared_ptr<string> aliasLike_ = nullptr;
    // Gateway ID, exact search.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // Gateway name, fuzzy search.
    std::shared_ptr<string> gatewayNameLike_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    // Environment name, fuzzy search.
    std::shared_ptr<string> nameLike_ = nullptr;
    // Page number, default is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, default is 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
