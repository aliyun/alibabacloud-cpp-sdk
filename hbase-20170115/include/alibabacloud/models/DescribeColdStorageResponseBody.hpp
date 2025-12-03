// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeColdStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(ColdStorageUsePercent, coldStorageUsePercent_);
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
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
        && return this->coldStorageSize_ == nullptr && return this->coldStorageUsePercent_ == nullptr && return this->openStatus_ == nullptr && return this->payType_ == nullptr && return this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeColdStorageResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline string coldStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageSize(string coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coldStorageUsePercent Field Functions 
    bool hasColdStorageUsePercent() const { return this->coldStorageUsePercent_ != nullptr;};
    void deleteColdStorageUsePercent() { this->coldStorageUsePercent_ = nullptr;};
    inline string coldStorageUsePercent() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUsePercent_, "") };
    inline DescribeColdStorageResponseBody& setColdStorageUsePercent(string coldStorageUsePercent) { DARABONBA_PTR_SET_VALUE(coldStorageUsePercent_, coldStorageUsePercent) };


    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline string openStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
    inline DescribeColdStorageResponseBody& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeColdStorageResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> coldStorageSize_ = nullptr;
    std::shared_ptr<string> coldStorageUsePercent_ = nullptr;
    std::shared_ptr<string> openStatus_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
