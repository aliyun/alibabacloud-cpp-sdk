// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListMcpServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createFromTypes, createFromTypes_);
      DARABONBA_PTR_TO_JSON(deployStatuses, deployStatuses_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createFromTypes, createFromTypes_);
      DARABONBA_PTR_FROM_JSON(deployStatuses, deployStatuses_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMcpServersRequest() = default ;
    ListMcpServersRequest(const ListMcpServersRequest &) = default ;
    ListMcpServersRequest(ListMcpServersRequest &&) = default ;
    ListMcpServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServersRequest() = default ;
    ListMcpServersRequest& operator=(const ListMcpServersRequest &) = default ;
    ListMcpServersRequest& operator=(ListMcpServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createFromTypes_ == nullptr
        && return this->deployStatuses_ == nullptr && return this->gatewayId_ == nullptr && return this->nameLike_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->type_ == nullptr; };
    // createFromTypes Field Functions 
    bool hasCreateFromTypes() const { return this->createFromTypes_ != nullptr;};
    void deleteCreateFromTypes() { this->createFromTypes_ = nullptr;};
    inline string createFromTypes() const { DARABONBA_PTR_GET_DEFAULT(createFromTypes_, "") };
    inline ListMcpServersRequest& setCreateFromTypes(string createFromTypes) { DARABONBA_PTR_SET_VALUE(createFromTypes_, createFromTypes) };


    // deployStatuses Field Functions 
    bool hasDeployStatuses() const { return this->deployStatuses_ != nullptr;};
    void deleteDeployStatuses() { this->deployStatuses_ = nullptr;};
    inline string deployStatuses() const { DARABONBA_PTR_GET_DEFAULT(deployStatuses_, "") };
    inline ListMcpServersRequest& setDeployStatuses(string deployStatuses) { DARABONBA_PTR_SET_VALUE(deployStatuses_, deployStatuses) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListMcpServersRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListMcpServersRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMcpServersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcpServersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMcpServersRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of source to create from.
    std::shared_ptr<string> createFromTypes_ = nullptr;
    // The deployment status of the MCP server.
    std::shared_ptr<string> deployStatuses_ = nullptr;
    // The gateway instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The name to perform a fuzzy search on the MCP server.
    std::shared_ptr<string> nameLike_ = nullptr;
    // The page number to return. Pages start from 1. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the MCP server.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
