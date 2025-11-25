// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLDSTTOPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLDSTTOPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(TrafficBytes, trafficBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(TrafficBytes, trafficBytes_);
    };
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList(DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList &&) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& operator=(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& operator=(DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicIp_ == nullptr
        && return this->trafficBytes_ == nullptr; };
    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // trafficBytes Field Functions 
    bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
    void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
    inline int64_t trafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


  protected:
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<int64_t> trafficBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
