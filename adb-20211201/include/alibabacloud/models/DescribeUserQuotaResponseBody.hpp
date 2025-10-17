// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeUserQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticACU, elasticACU_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserverdCompteACU, reserverdCompteACU_);
      DARABONBA_PTR_TO_JSON(ReserverdStorageACU, reserverdStorageACU_);
      DARABONBA_PTR_TO_JSON(ResourceGroupCount, resourceGroupCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticACU, elasticACU_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserverdCompteACU, reserverdCompteACU_);
      DARABONBA_PTR_FROM_JSON(ReserverdStorageACU, reserverdStorageACU_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupCount, resourceGroupCount_);
    };
    DescribeUserQuotaResponseBody() = default ;
    DescribeUserQuotaResponseBody(const DescribeUserQuotaResponseBody &) = default ;
    DescribeUserQuotaResponseBody(DescribeUserQuotaResponseBody &&) = default ;
    DescribeUserQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserQuotaResponseBody() = default ;
    DescribeUserQuotaResponseBody& operator=(const DescribeUserQuotaResponseBody &) = default ;
    DescribeUserQuotaResponseBody& operator=(DescribeUserQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticACU_ == nullptr
        && return this->requestId_ == nullptr && return this->reserverdCompteACU_ == nullptr && return this->reserverdStorageACU_ == nullptr && return this->resourceGroupCount_ == nullptr; };
    // elasticACU Field Functions 
    bool hasElasticACU() const { return this->elasticACU_ != nullptr;};
    void deleteElasticACU() { this->elasticACU_ = nullptr;};
    inline string elasticACU() const { DARABONBA_PTR_GET_DEFAULT(elasticACU_, "") };
    inline DescribeUserQuotaResponseBody& setElasticACU(string elasticACU) { DARABONBA_PTR_SET_VALUE(elasticACU_, elasticACU) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserverdCompteACU Field Functions 
    bool hasReserverdCompteACU() const { return this->reserverdCompteACU_ != nullptr;};
    void deleteReserverdCompteACU() { this->reserverdCompteACU_ = nullptr;};
    inline string reserverdCompteACU() const { DARABONBA_PTR_GET_DEFAULT(reserverdCompteACU_, "") };
    inline DescribeUserQuotaResponseBody& setReserverdCompteACU(string reserverdCompteACU) { DARABONBA_PTR_SET_VALUE(reserverdCompteACU_, reserverdCompteACU) };


    // reserverdStorageACU Field Functions 
    bool hasReserverdStorageACU() const { return this->reserverdStorageACU_ != nullptr;};
    void deleteReserverdStorageACU() { this->reserverdStorageACU_ = nullptr;};
    inline string reserverdStorageACU() const { DARABONBA_PTR_GET_DEFAULT(reserverdStorageACU_, "") };
    inline DescribeUserQuotaResponseBody& setReserverdStorageACU(string reserverdStorageACU) { DARABONBA_PTR_SET_VALUE(reserverdStorageACU_, reserverdStorageACU) };


    // resourceGroupCount Field Functions 
    bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
    void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
    inline string resourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, "") };
    inline DescribeUserQuotaResponseBody& setResourceGroupCount(string resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


  protected:
    // The available elastic AnalyticDB compute units (ACUs).
    std::shared_ptr<string> elasticACU_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The available reserved computing resources.
    std::shared_ptr<string> reserverdCompteACU_ = nullptr;
    // The available reserved storage resources.
    std::shared_ptr<string> reserverdStorageACU_ = nullptr;
    // The number of available resource groups.
    std::shared_ptr<string> resourceGroupCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
