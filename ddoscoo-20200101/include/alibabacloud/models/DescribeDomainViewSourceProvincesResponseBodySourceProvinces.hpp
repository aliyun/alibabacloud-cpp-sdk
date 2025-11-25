// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODYSOURCEPROVINCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODYSOURCEPROVINCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewSourceProvincesResponseBodySourceProvinces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewSourceProvincesResponseBodySourceProvinces& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewSourceProvincesResponseBodySourceProvinces& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
    };
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces() = default ;
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces(const DescribeDomainViewSourceProvincesResponseBodySourceProvinces &) = default ;
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces(DescribeDomainViewSourceProvincesResponseBodySourceProvinces &&) = default ;
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewSourceProvincesResponseBodySourceProvinces() = default ;
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces& operator=(const DescribeDomainViewSourceProvincesResponseBodySourceProvinces &) = default ;
    DescribeDomainViewSourceProvincesResponseBodySourceProvinces& operator=(DescribeDomainViewSourceProvincesResponseBodySourceProvinces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->provinceId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainViewSourceProvincesResponseBodySourceProvinces& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // provinceId Field Functions 
    bool hasProvinceId() const { return this->provinceId_ != nullptr;};
    void deleteProvinceId() { this->provinceId_ = nullptr;};
    inline string provinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, "") };
    inline DescribeDomainViewSourceProvincesResponseBodySourceProvinces& setProvinceId(string provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


  protected:
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The ID of the region inside China. For more information, see the **Codes of administrative regions in China** section of the [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html) topic. For example, **110000** indicates Beijing, and **120000** indicates Tianjin.
    std::shared_ptr<string> provinceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
