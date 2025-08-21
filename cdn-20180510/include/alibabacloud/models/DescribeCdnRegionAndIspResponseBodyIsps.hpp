// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYISPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYISPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnRegionAndIspResponseBodyIspsIsp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspResponseBodyIsps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeCdnRegionAndIspResponseBodyIsps() = default ;
    DescribeCdnRegionAndIspResponseBodyIsps(const DescribeCdnRegionAndIspResponseBodyIsps &) = default ;
    DescribeCdnRegionAndIspResponseBodyIsps(DescribeCdnRegionAndIspResponseBodyIsps &&) = default ;
    DescribeCdnRegionAndIspResponseBodyIsps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspResponseBodyIsps() = default ;
    DescribeCdnRegionAndIspResponseBodyIsps& operator=(const DescribeCdnRegionAndIspResponseBodyIsps &) = default ;
    DescribeCdnRegionAndIspResponseBodyIsps& operator=(DescribeCdnRegionAndIspResponseBodyIsps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isp_ != nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline const vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp> & isp() const { DARABONBA_PTR_GET_CONST(isp_, vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp>) };
    inline vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp> isp() { DARABONBA_PTR_GET(isp_, vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp>) };
    inline DescribeCdnRegionAndIspResponseBodyIsps& setIsp(const vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
    inline DescribeCdnRegionAndIspResponseBodyIsps& setIsp(vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnRegionAndIspResponseBodyIspsIsp>> isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
