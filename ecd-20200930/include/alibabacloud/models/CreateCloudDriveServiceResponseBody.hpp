// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudDriveServiceResponseBodyConflictCdsAndOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(CdsName, cdsName_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ConflictCdsAndOrder, conflictCdsAndOrder_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(CdsName, cdsName_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ConflictCdsAndOrder, conflictCdsAndOrder_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudDriveServiceResponseBody() = default ;
    CreateCloudDriveServiceResponseBody(const CreateCloudDriveServiceResponseBody &) = default ;
    CreateCloudDriveServiceResponseBody(CreateCloudDriveServiceResponseBody &&) = default ;
    CreateCloudDriveServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceResponseBody() = default ;
    CreateCloudDriveServiceResponseBody& operator=(const CreateCloudDriveServiceResponseBody &) = default ;
    CreateCloudDriveServiceResponseBody& operator=(CreateCloudDriveServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->cdsName_ == nullptr && return this->cenId_ == nullptr && return this->conflictCdsAndOrder_ == nullptr && return this->domainName_ == nullptr && return this->errorCode_ == nullptr
        && return this->maxSize_ == nullptr && return this->officeSiteType_ == nullptr && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveServiceResponseBody& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // cdsName Field Functions 
    bool hasCdsName() const { return this->cdsName_ != nullptr;};
    void deleteCdsName() { this->cdsName_ = nullptr;};
    inline string cdsName() const { DARABONBA_PTR_GET_DEFAULT(cdsName_, "") };
    inline CreateCloudDriveServiceResponseBody& setCdsName(string cdsName) { DARABONBA_PTR_SET_VALUE(cdsName_, cdsName) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateCloudDriveServiceResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // conflictCdsAndOrder Field Functions 
    bool hasConflictCdsAndOrder() const { return this->conflictCdsAndOrder_ != nullptr;};
    void deleteConflictCdsAndOrder() { this->conflictCdsAndOrder_ = nullptr;};
    inline const CreateCloudDriveServiceResponseBodyConflictCdsAndOrder & conflictCdsAndOrder() const { DARABONBA_PTR_GET_CONST(conflictCdsAndOrder_, CreateCloudDriveServiceResponseBodyConflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrder conflictCdsAndOrder() { DARABONBA_PTR_GET(conflictCdsAndOrder_, CreateCloudDriveServiceResponseBodyConflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBody& setConflictCdsAndOrder(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrder & conflictCdsAndOrder) { DARABONBA_PTR_SET_VALUE(conflictCdsAndOrder_, conflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBody& setConflictCdsAndOrder(CreateCloudDriveServiceResponseBodyConflictCdsAndOrder && conflictCdsAndOrder) { DARABONBA_PTR_SET_RVALUE(conflictCdsAndOrder_, conflictCdsAndOrder) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCloudDriveServiceResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateCloudDriveServiceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline string maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, "") };
    inline CreateCloudDriveServiceResponseBody& setMaxSize(string maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline CreateCloudDriveServiceResponseBody& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCloudDriveServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudDriveServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the enterprise drive.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The name of the cloud disk that is created in Cloud Drive Service.
    std::shared_ptr<string> cdsName_ = nullptr;
    // The ID of the CEN instance.
    // 
    // >  To allow end users to connect to cloud computers via virtual private clouds (VPCs), attach your office network to a CEN instance. The CEN instance connects to your on-premises network through VPN Gateway or Express Connect.
    std::shared_ptr<string> cenId_ = nullptr;
    // The existing enterprise drive or its order that conflicts with the enterprise drive being created.
    std::shared_ptr<CreateCloudDriveServiceResponseBodyConflictCdsAndOrder> conflictCdsAndOrder_ = nullptr;
    // The domain name of the enterprise AD office network.
    std::shared_ptr<string> domainName_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The maximum storage capacity of the enterprise drive. Unit: bytes.
    std::shared_ptr<string> maxSize_ = nullptr;
    // The type of the office network.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience office network.
    // *   AD_CONNECTOR: enterprise AD office network.
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The ID of the order. You can obtain an order ID on the Orders page in the Expenses and Costs console.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
