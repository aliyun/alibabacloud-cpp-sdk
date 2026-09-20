// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeColdStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(ColdStorageType, coldStorageType_);
      DARABONBA_PTR_TO_JSON(ColdStorageUseAmount, coldStorageUseAmount_);
      DARABONBA_PTR_TO_JSON(ColdStorageUsePercent, coldStorageUsePercent_);
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(ColdStorageType, coldStorageType_);
      DARABONBA_PTR_FROM_JSON(ColdStorageUseAmount, coldStorageUseAmount_);
      DARABONBA_PTR_FROM_JSON(ColdStorageUsePercent, coldStorageUsePercent_);
      DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColdStorageResponseBody() = default ;
    DescribeColdStorageResponseBody(const DescribeColdStorageResponseBody &) = default ;
    DescribeColdStorageResponseBody(DescribeColdStorageResponseBody &&) = default ;
    DescribeColdStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageResponseBody() = default ;
    DescribeColdStorageResponseBody& operator=(const DescribeColdStorageResponseBody &) = default ;
    DescribeColdStorageResponseBody& operator=(DescribeColdStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->coldStorageSize_ == nullptr && this->coldStorageType_ == nullptr && this->coldStorageUseAmount_ == nullptr && this->coldStorageUsePercent_ == nullptr && this->openStatus_ == nullptr
        && this->payType_ == nullptr && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeColdStorageResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline string getColdStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageSize(string coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coldStorageType Field Functions 
    bool hasColdStorageType() const { return this->coldStorageType_ != nullptr;};
    void deleteColdStorageType() { this->coldStorageType_ = nullptr;};
    inline string getColdStorageType() const { DARABONBA_PTR_GET_DEFAULT(coldStorageType_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageType(string coldStorageType) { DARABONBA_PTR_SET_VALUE(coldStorageType_, coldStorageType) };


    // coldStorageUseAmount Field Functions 
    bool hasColdStorageUseAmount() const { return this->coldStorageUseAmount_ != nullptr;};
    void deleteColdStorageUseAmount() { this->coldStorageUseAmount_ = nullptr;};
    inline string getColdStorageUseAmount() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUseAmount_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageUseAmount(string coldStorageUseAmount) { DARABONBA_PTR_SET_VALUE(coldStorageUseAmount_, coldStorageUseAmount) };


    // coldStorageUsePercent Field Functions 
    bool hasColdStorageUsePercent() const { return this->coldStorageUsePercent_ != nullptr;};
    void deleteColdStorageUsePercent() { this->coldStorageUsePercent_ = nullptr;};
    inline string getColdStorageUsePercent() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUsePercent_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageUsePercent(string coldStorageUsePercent) { DARABONBA_PTR_SET_VALUE(coldStorageUsePercent_, coldStorageUsePercent) };


    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline string getOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
    inline DescribeColdStorageResponseBody& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeColdStorageResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> clusterId_ {};
    // The total storage capacity of cold storage, in GB.
    // 
    // > This parameter is returned only when **OpenStatus** is **open**.
    shared_ptr<string> coldStorageSize_ {};
    // The cold storage type. For newly created BDS instances, the cold storage type is **BdsColdStorage**. This parameter is not returned for other instances by default.
    shared_ptr<string> coldStorageType_ {};
    // The amount of cold storage space used, in GB.
    // 
    // > This parameter is returned only when **OpenStatus** is **open**.
    shared_ptr<string> coldStorageUseAmount_ {};
    // The usage of the cold storage space, in percentage (%).
    // 
    // > This parameter is returned only when **OpenStatus** is **open**.
    shared_ptr<string> coldStorageUsePercent_ {};
    // The enabling status of cold storage. Valid values:
    // - **open**: Cold storage is enabled.
    // - **close**: Cold storage is not enabled.
    shared_ptr<string> openStatus_ {};
    // The billing method of the instance. Valid values:
    // - **PREPAY**: subscription.
    // - **POSTPAY**: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
