// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupGatewayListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupGatewayListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupGatewayListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeBackupGatewayListRequest() = default ;
    DescribeBackupGatewayListRequest(const DescribeBackupGatewayListRequest &) = default ;
    DescribeBackupGatewayListRequest(DescribeBackupGatewayListRequest &&) = default ;
    DescribeBackupGatewayListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupGatewayListRequest() = default ;
    DescribeBackupGatewayListRequest& operator=(const DescribeBackupGatewayListRequest &) = default ;
    DescribeBackupGatewayListRequest& operator=(DescribeBackupGatewayListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->identifier_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBackupGatewayListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeBackupGatewayListRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeBackupGatewayListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupGatewayListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupGatewayListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeBackupGatewayListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // A client token used to ensure the idempotence of the request. This prevents duplicate requests.
    shared_ptr<string> clientToken_ {};
    // The unique identifier of the backup gateway. You can query multiple gateways by separating the identifiers with commas (,).
    shared_ptr<string> identifier_ {};
    shared_ptr<string> ownerId_ {};
    // The page number. The value must be greater than or equal to 0 and cannot exceed the maximum value of an integer. The default value is 0.
    shared_ptr<int32_t> pageNum_ {};
    // The number of records on each page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    // 
    // > The default value is 30.
    shared_ptr<int32_t> pageSize_ {};
    // The region of the DBS instance. Valid values:
    // 
    // - **cn-hangzhou**: China (Hangzhou)
    // 
    // - **cn-shanghai**: China (Shanghai)
    // 
    // - **cn-qingdao**: China (Qingdao)
    // 
    // - **cn-beijing**: China (Beijing)
    // 
    // - **cn-shenzhen**: China (Shenzhen)
    // 
    // - **cn-hongkong**: China (Hong Kong)
    // 
    // - **ap-southeast-1**: Singapore
    // 
    // - **cn-hangzhou-finance**: Hangzhou Finance Cloud
    // 
    // - **cn-shanghai-finance**: Shanghai Finance Cloud
    // 
    // - **cn-shenzhen-finance**: Shenzhen Finance Cloud
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
