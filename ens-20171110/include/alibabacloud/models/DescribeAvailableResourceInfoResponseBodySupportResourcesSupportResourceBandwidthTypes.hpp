// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEBANDWIDTHTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEBANDWIDTHTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthType_ == nullptr; };
    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline const vector<string> & bandwidthType() const { DARABONBA_PTR_GET_CONST(bandwidthType_, vector<string>) };
    inline vector<string> bandwidthType() { DARABONBA_PTR_GET(bandwidthType_, vector<string>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& setBandwidthType(const vector<string> & bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes& setBandwidthType(vector<string> && bandwidthType) { DARABONBA_PTR_SET_RVALUE(bandwidthType_, bandwidthType) };


  protected:
    std::shared_ptr<vector<string>> bandwidthType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
