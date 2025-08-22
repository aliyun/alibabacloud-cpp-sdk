// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODYISPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODYISPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnRegionAndIspResponseBodyIspsIsp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRegionAndIspResponseBodyIsps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRegionAndIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRegionAndIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeDcdnRegionAndIspResponseBodyIsps() = default ;
    DescribeDcdnRegionAndIspResponseBodyIsps(const DescribeDcdnRegionAndIspResponseBodyIsps &) = default ;
    DescribeDcdnRegionAndIspResponseBodyIsps(DescribeDcdnRegionAndIspResponseBodyIsps &&) = default ;
    DescribeDcdnRegionAndIspResponseBodyIsps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRegionAndIspResponseBodyIsps() = default ;
    DescribeDcdnRegionAndIspResponseBodyIsps& operator=(const DescribeDcdnRegionAndIspResponseBodyIsps &) = default ;
    DescribeDcdnRegionAndIspResponseBodyIsps& operator=(DescribeDcdnRegionAndIspResponseBodyIsps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isp_ != nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline const vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp> & isp() const { DARABONBA_PTR_GET_CONST(isp_, vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp>) };
    inline vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp> isp() { DARABONBA_PTR_GET(isp_, vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp>) };
    inline DescribeDcdnRegionAndIspResponseBodyIsps& setIsp(const vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
    inline DescribeDcdnRegionAndIspResponseBodyIsps& setIsp(vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnRegionAndIspResponseBodyIspsIsp>> isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
