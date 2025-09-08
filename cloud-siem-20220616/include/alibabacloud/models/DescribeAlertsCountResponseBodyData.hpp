// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(CountMap, countMap_);
      DARABONBA_PTR_TO_JSON(High, high_);
      DARABONBA_PTR_TO_JSON(Low, low_);
      DARABONBA_PTR_TO_JSON(Medium, medium_);
      DARABONBA_PTR_TO_JSON(ProductNum, productNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(CountMap, countMap_);
      DARABONBA_PTR_FROM_JSON(High, high_);
      DARABONBA_PTR_FROM_JSON(Low, low_);
      DARABONBA_PTR_FROM_JSON(Medium, medium_);
      DARABONBA_PTR_FROM_JSON(ProductNum, productNum_);
    };
    DescribeAlertsCountResponseBodyData() = default ;
    DescribeAlertsCountResponseBodyData(const DescribeAlertsCountResponseBodyData &) = default ;
    DescribeAlertsCountResponseBodyData(DescribeAlertsCountResponseBodyData &&) = default ;
    DescribeAlertsCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsCountResponseBodyData() = default ;
    DescribeAlertsCountResponseBodyData& operator=(const DescribeAlertsCountResponseBodyData &) = default ;
    DescribeAlertsCountResponseBodyData& operator=(DescribeAlertsCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->countMap_ != nullptr && this->high_ != nullptr && this->low_ != nullptr && this->medium_ != nullptr && this->productNum_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline int64_t all() const { DARABONBA_PTR_GET_DEFAULT(all_, 0L) };
    inline DescribeAlertsCountResponseBodyData& setAll(int64_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // countMap Field Functions 
    bool hasCountMap() const { return this->countMap_ != nullptr;};
    void deleteCountMap() { this->countMap_ = nullptr;};
    inline const map<string, int64_t> & countMap() const { DARABONBA_PTR_GET_CONST(countMap_, map<string, int64_t>) };
    inline map<string, int64_t> countMap() { DARABONBA_PTR_GET(countMap_, map<string, int64_t>) };
    inline DescribeAlertsCountResponseBodyData& setCountMap(const map<string, int64_t> & countMap) { DARABONBA_PTR_SET_VALUE(countMap_, countMap) };
    inline DescribeAlertsCountResponseBodyData& setCountMap(map<string, int64_t> && countMap) { DARABONBA_PTR_SET_RVALUE(countMap_, countMap) };


    // high Field Functions 
    bool hasHigh() const { return this->high_ != nullptr;};
    void deleteHigh() { this->high_ = nullptr;};
    inline int64_t high() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
    inline DescribeAlertsCountResponseBodyData& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


    // low Field Functions 
    bool hasLow() const { return this->low_ != nullptr;};
    void deleteLow() { this->low_ = nullptr;};
    inline int64_t low() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
    inline DescribeAlertsCountResponseBodyData& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline int64_t medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
    inline DescribeAlertsCountResponseBodyData& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    // productNum Field Functions 
    bool hasProductNum() const { return this->productNum_ != nullptr;};
    void deleteProductNum() { this->productNum_ = nullptr;};
    inline int32_t productNum() const { DARABONBA_PTR_GET_DEFAULT(productNum_, 0) };
    inline DescribeAlertsCountResponseBodyData& setProductNum(int32_t productNum) { DARABONBA_PTR_SET_VALUE(productNum_, productNum) };


  protected:
    // The total number of alerts.
    std::shared_ptr<int64_t> all_ = nullptr;
    std::shared_ptr<map<string, int64_t>> countMap_ = nullptr;
    // The number of high-risk alerts.
    std::shared_ptr<int64_t> high_ = nullptr;
    // The number of low-risk alerts.
    std::shared_ptr<int64_t> low_ = nullptr;
    // The number of medium-risk alerts.
    std::shared_ptr<int64_t> medium_ = nullptr;
    // The number of connected services.
    std::shared_ptr<int32_t> productNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
