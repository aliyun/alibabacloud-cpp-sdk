// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeApiMeteringResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiMeteringResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiMeteringResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeApiMeteringResponseBodyResult() = default ;
    DescribeApiMeteringResponseBodyResult(const DescribeApiMeteringResponseBodyResult &) = default ;
    DescribeApiMeteringResponseBodyResult(DescribeApiMeteringResponseBodyResult &&) = default ;
    DescribeApiMeteringResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiMeteringResponseBodyResult() = default ;
    DescribeApiMeteringResponseBodyResult& operator=(const DescribeApiMeteringResponseBodyResult &) = default ;
    DescribeApiMeteringResponseBodyResult& operator=(DescribeApiMeteringResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunPk_ != nullptr
        && this->productCode_ != nullptr && this->productName_ != nullptr && this->totalCapacity_ != nullptr && this->totalQuota_ != nullptr && this->totalUsage_ != nullptr
        && this->unit_ != nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline int64_t aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, 0L) };
    inline DescribeApiMeteringResponseBodyResult& setAliyunPk(int64_t aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeApiMeteringResponseBodyResult& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeApiMeteringResponseBodyResult& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline int64_t totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
    inline DescribeApiMeteringResponseBodyResult& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t totalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline DescribeApiMeteringResponseBodyResult& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // totalUsage Field Functions 
    bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
    void deleteTotalUsage() { this->totalUsage_ = nullptr;};
    inline int64_t totalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0L) };
    inline DescribeApiMeteringResponseBodyResult& setTotalUsage(int64_t totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeApiMeteringResponseBodyResult& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<int64_t> aliyunPk_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<int64_t> totalCapacity_ = nullptr;
    std::shared_ptr<int64_t> totalQuota_ = nullptr;
    std::shared_ptr<int64_t> totalUsage_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
