// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceNameCn, serviceNameCn_);
      DARABONBA_PTR_TO_JSON(ServiceNameEn, serviceNameEn_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceNameCn, serviceNameCn_);
      DARABONBA_PTR_FROM_JSON(ServiceNameEn, serviceNameEn_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
    };
    GetAccessKeyLastUsedProductsResponseBodyProducts() = default ;
    GetAccessKeyLastUsedProductsResponseBodyProducts(const GetAccessKeyLastUsedProductsResponseBodyProducts &) = default ;
    GetAccessKeyLastUsedProductsResponseBodyProducts(GetAccessKeyLastUsedProductsResponseBodyProducts &&) = default ;
    GetAccessKeyLastUsedProductsResponseBodyProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedProductsResponseBodyProducts() = default ;
    GetAccessKeyLastUsedProductsResponseBodyProducts& operator=(const GetAccessKeyLastUsedProductsResponseBodyProducts &) = default ;
    GetAccessKeyLastUsedProductsResponseBodyProducts& operator=(GetAccessKeyLastUsedProductsResponseBodyProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->serviceName_ == nullptr && return this->serviceNameCn_ == nullptr && return this->serviceNameEn_ == nullptr && return this->source_ == nullptr && return this->usedTimestamp_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceNameCn Field Functions 
    bool hasServiceNameCn() const { return this->serviceNameCn_ != nullptr;};
    void deleteServiceNameCn() { this->serviceNameCn_ = nullptr;};
    inline string serviceNameCn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameCn_, "") };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setServiceNameCn(string serviceNameCn) { DARABONBA_PTR_SET_VALUE(serviceNameCn_, serviceNameCn) };


    // serviceNameEn Field Functions 
    bool hasServiceNameEn() const { return this->serviceNameEn_ != nullptr;};
    void deleteServiceNameEn() { this->serviceNameEn_ = nullptr;};
    inline string serviceNameEn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameEn_, "") };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setServiceNameEn(string serviceNameEn) { DARABONBA_PTR_SET_VALUE(serviceNameEn_, serviceNameEn) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // usedTimestamp Field Functions 
    bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
    void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
    inline int64_t usedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
    inline GetAccessKeyLastUsedProductsResponseBodyProducts& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


  protected:
    // The event details.
    std::shared_ptr<string> detail_ = nullptr;
    // The Alibaba Cloud service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The Chinese name of the Alibaba Cloud service.
    std::shared_ptr<string> serviceNameCn_ = nullptr;
    // The English name of the Alibaba Cloud service.
    std::shared_ptr<string> serviceNameEn_ = nullptr;
    // The event source.
    // 
    // Valid values:
    // 
    // *   Internal
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     other events
    // 
    //     <!-- -->
    // 
    // *   ManagementEvent
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     management events
    // 
    //     <!-- -->
    // 
    // *   DataEvent
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     data events
    // 
    //     <!-- -->
    std::shared_ptr<string> source_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Unit: millisecond.
    std::shared_ptr<int64_t> usedTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
