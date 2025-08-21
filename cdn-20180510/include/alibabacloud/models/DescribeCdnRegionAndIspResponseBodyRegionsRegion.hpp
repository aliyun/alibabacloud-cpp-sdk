// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
      DARABONBA_PTR_TO_JSON(NameZh, nameZh_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
      DARABONBA_PTR_FROM_JSON(NameZh, nameZh_);
    };
    DescribeCdnRegionAndIspResponseBodyRegionsRegion() = default ;
    DescribeCdnRegionAndIspResponseBodyRegionsRegion(const DescribeCdnRegionAndIspResponseBodyRegionsRegion &) = default ;
    DescribeCdnRegionAndIspResponseBodyRegionsRegion(DescribeCdnRegionAndIspResponseBodyRegionsRegion &&) = default ;
    DescribeCdnRegionAndIspResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspResponseBodyRegionsRegion() = default ;
    DescribeCdnRegionAndIspResponseBodyRegionsRegion& operator=(const DescribeCdnRegionAndIspResponseBodyRegionsRegion &) = default ;
    DescribeCdnRegionAndIspResponseBodyRegionsRegion& operator=(DescribeCdnRegionAndIspResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameEn_ != nullptr
        && this->nameZh_ != nullptr; };
    // nameEn Field Functions 
    bool hasNameEn() const { return this->nameEn_ != nullptr;};
    void deleteNameEn() { this->nameEn_ = nullptr;};
    inline string nameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
    inline DescribeCdnRegionAndIspResponseBodyRegionsRegion& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


    // nameZh Field Functions 
    bool hasNameZh() const { return this->nameZh_ != nullptr;};
    void deleteNameZh() { this->nameZh_ = nullptr;};
    inline string nameZh() const { DARABONBA_PTR_GET_DEFAULT(nameZh_, "") };
    inline DescribeCdnRegionAndIspResponseBodyRegionsRegion& setNameZh(string nameZh) { DARABONBA_PTR_SET_VALUE(nameZh_, nameZh) };


  protected:
    // The English name of the region.
    std::shared_ptr<string> nameEn_ = nullptr;
    // The Chinese name of the region.
    std::shared_ptr<string> nameZh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
