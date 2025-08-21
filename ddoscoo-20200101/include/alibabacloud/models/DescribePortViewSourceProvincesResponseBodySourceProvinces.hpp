// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODYSOURCEPROVINCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODYSOURCEPROVINCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceProvincesResponseBodySourceProvinces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceProvincesResponseBodySourceProvinces& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceProvincesResponseBodySourceProvinces& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
    };
    DescribePortViewSourceProvincesResponseBodySourceProvinces() = default ;
    DescribePortViewSourceProvincesResponseBodySourceProvinces(const DescribePortViewSourceProvincesResponseBodySourceProvinces &) = default ;
    DescribePortViewSourceProvincesResponseBodySourceProvinces(DescribePortViewSourceProvincesResponseBodySourceProvinces &&) = default ;
    DescribePortViewSourceProvincesResponseBodySourceProvinces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceProvincesResponseBodySourceProvinces() = default ;
    DescribePortViewSourceProvincesResponseBodySourceProvinces& operator=(const DescribePortViewSourceProvincesResponseBodySourceProvinces &) = default ;
    DescribePortViewSourceProvincesResponseBodySourceProvinces& operator=(DescribePortViewSourceProvincesResponseBodySourceProvinces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->provinceId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribePortViewSourceProvincesResponseBodySourceProvinces& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // provinceId Field Functions 
    bool hasProvinceId() const { return this->provinceId_ != nullptr;};
    void deleteProvinceId() { this->provinceId_ = nullptr;};
    inline string provinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, "") };
    inline DescribePortViewSourceProvincesResponseBodySourceProvinces& setProvinceId(string provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


  protected:
    // The total number of requests that are sent from the ISP.
    // 
    // > This parameter does not indicate the accurate number of requests. You can use this parameter to calculate the proportion of requests from different administrative regions in China.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The ID of the administrative region in China from which the requests are sent. For example, **110000** indicates Beijing, and **120000** indicates Tianjin.
    // 
    // > For more information, see [Location parameters](https://help.aliyun.com/document_detail/167926.html).
    std::shared_ptr<string> provinceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
