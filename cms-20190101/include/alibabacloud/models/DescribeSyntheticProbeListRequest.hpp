// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSyntheticProbeListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyntheticProbeListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(IdcProbe, idcProbe_);
      DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(LmProbe, lmProbe_);
      DARABONBA_PTR_TO_JSON(MbProbe, mbProbe_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ViewAll, viewAll_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyntheticProbeListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(IdcProbe, idcProbe_);
      DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(LmProbe, lmProbe_);
      DARABONBA_PTR_FROM_JSON(MbProbe, mbProbe_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ViewAll, viewAll_);
    };
    DescribeSyntheticProbeListRequest() = default ;
    DescribeSyntheticProbeListRequest(const DescribeSyntheticProbeListRequest &) = default ;
    DescribeSyntheticProbeListRequest(DescribeSyntheticProbeListRequest &&) = default ;
    DescribeSyntheticProbeListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyntheticProbeListRequest() = default ;
    DescribeSyntheticProbeListRequest& operator=(const DescribeSyntheticProbeListRequest &) = default ;
    DescribeSyntheticProbeListRequest& operator=(DescribeSyntheticProbeListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->idcProbe_ != nullptr && this->ipv4_ != nullptr && this->ipv6_ != nullptr && this->isp_ != nullptr && this->lmProbe_ != nullptr
        && this->mbProbe_ != nullptr && this->regionId_ != nullptr && this->viewAll_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSyntheticProbeListRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // idcProbe Field Functions 
    bool hasIdcProbe() const { return this->idcProbe_ != nullptr;};
    void deleteIdcProbe() { this->idcProbe_ = nullptr;};
    inline bool idcProbe() const { DARABONBA_PTR_GET_DEFAULT(idcProbe_, false) };
    inline DescribeSyntheticProbeListRequest& setIdcProbe(bool idcProbe) { DARABONBA_PTR_SET_VALUE(idcProbe_, idcProbe) };


    // ipv4 Field Functions 
    bool hasIpv4() const { return this->ipv4_ != nullptr;};
    void deleteIpv4() { this->ipv4_ = nullptr;};
    inline bool ipv4() const { DARABONBA_PTR_GET_DEFAULT(ipv4_, false) };
    inline DescribeSyntheticProbeListRequest& setIpv4(bool ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline bool ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, false) };
    inline DescribeSyntheticProbeListRequest& setIpv6(bool ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSyntheticProbeListRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // lmProbe Field Functions 
    bool hasLmProbe() const { return this->lmProbe_ != nullptr;};
    void deleteLmProbe() { this->lmProbe_ = nullptr;};
    inline bool lmProbe() const { DARABONBA_PTR_GET_DEFAULT(lmProbe_, false) };
    inline DescribeSyntheticProbeListRequest& setLmProbe(bool lmProbe) { DARABONBA_PTR_SET_VALUE(lmProbe_, lmProbe) };


    // mbProbe Field Functions 
    bool hasMbProbe() const { return this->mbProbe_ != nullptr;};
    void deleteMbProbe() { this->mbProbe_ = nullptr;};
    inline bool mbProbe() const { DARABONBA_PTR_GET_DEFAULT(mbProbe_, false) };
    inline DescribeSyntheticProbeListRequest& setMbProbe(bool mbProbe) { DARABONBA_PTR_SET_VALUE(mbProbe_, mbProbe) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyntheticProbeListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // viewAll Field Functions 
    bool hasViewAll() const { return this->viewAll_ != nullptr;};
    void deleteViewAll() { this->viewAll_ = nullptr;};
    inline bool viewAll() const { DARABONBA_PTR_GET_DEFAULT(viewAll_, false) };
    inline DescribeSyntheticProbeListRequest& setViewAll(bool viewAll) { DARABONBA_PTR_SET_VALUE(viewAll_, viewAll) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<bool> idcProbe_ = nullptr;
    std::shared_ptr<bool> ipv4_ = nullptr;
    std::shared_ptr<bool> ipv6_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<bool> lmProbe_ = nullptr;
    std::shared_ptr<bool> mbProbe_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> viewAll_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
