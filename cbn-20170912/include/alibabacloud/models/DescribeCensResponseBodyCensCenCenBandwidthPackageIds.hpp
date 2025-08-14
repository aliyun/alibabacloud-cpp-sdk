// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCENCENBANDWIDTHPACKAGEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCENCENBANDWIDTHPACKAGEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensResponseBodyCensCenCenBandwidthPackageIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCensCenCenBandwidthPackageIds& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCensCenCenBandwidthPackageIds& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
    };
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds() = default ;
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds(const DescribeCensResponseBodyCensCenCenBandwidthPackageIds &) = default ;
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds(DescribeCensResponseBodyCensCenCenBandwidthPackageIds &&) = default ;
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCensCenCenBandwidthPackageIds() = default ;
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds& operator=(const DescribeCensResponseBodyCensCenCenBandwidthPackageIds &) = default ;
    DescribeCensResponseBodyCensCenCenBandwidthPackageIds& operator=(DescribeCensResponseBodyCensCenCenBandwidthPackageIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackageId_ != nullptr; };
    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline const vector<string> & cenBandwidthPackageId() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackageId_, vector<string>) };
    inline vector<string> cenBandwidthPackageId() { DARABONBA_PTR_GET(cenBandwidthPackageId_, vector<string>) };
    inline DescribeCensResponseBodyCensCenCenBandwidthPackageIds& setCenBandwidthPackageId(const vector<string> & cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };
    inline DescribeCensResponseBodyCensCenCenBandwidthPackageIds& setCenBandwidthPackageId(vector<string> && cenBandwidthPackageId) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


  protected:
    std::shared_ptr<vector<string>> cenBandwidthPackageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
