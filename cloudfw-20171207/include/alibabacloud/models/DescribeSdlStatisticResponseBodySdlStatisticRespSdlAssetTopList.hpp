// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLASSETTOPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLASSETTOPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(TrafficBytes, trafficBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(TrafficBytes, trafficBytes_);
    };
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList(DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList &&) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& operator=(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& operator=(DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->publicIp_ == nullptr && return this->trafficBytes_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // trafficBytes Field Functions 
    bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
    void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
    inline int64_t trafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


  protected:
    std::shared_ptr<string> assetType_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<int64_t> trafficBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
