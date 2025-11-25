// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODYIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODYIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventSrcIpResponseBodyIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventSrcIpResponseBodyIps& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventSrcIpResponseBodyIps& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    DescribeDDosEventSrcIpResponseBodyIps() = default ;
    DescribeDDosEventSrcIpResponseBodyIps(const DescribeDDosEventSrcIpResponseBodyIps &) = default ;
    DescribeDDosEventSrcIpResponseBodyIps(DescribeDDosEventSrcIpResponseBodyIps &&) = default ;
    DescribeDDosEventSrcIpResponseBodyIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventSrcIpResponseBodyIps() = default ;
    DescribeDDosEventSrcIpResponseBodyIps& operator=(const DescribeDDosEventSrcIpResponseBodyIps &) = default ;
    DescribeDDosEventSrcIpResponseBodyIps& operator=(DescribeDDosEventSrcIpResponseBodyIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->isp_ == nullptr && return this->srcIp_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline DescribeDDosEventSrcIpResponseBodyIps& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeDDosEventSrcIpResponseBodyIps& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeDDosEventSrcIpResponseBodyIps& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The code or ID of the source region. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
    std::shared_ptr<string> areaId_ = nullptr;
    // The Internet service provider (ISP) for the volumetric attack. Valid values:
    // 
    // *   **100017**: China Telecom
    // *   **100026**: China Unicom
    // *   **100025**: China Mobile
    // *   **100027**: China Education and Research Network
    // *   **100020**: China Mobile Tietong
    // *   **1000143**: Dr.Peng Telecom & Media Group
    // *   **100080**: Beijing Gehua CATV Network
    // *   **1000139**: National Radio and Television Administration
    // *   **100023**: Oriental Cable Network
    // *   **100063**: Founder Broadband
    // *   **1000337**: China Internet Exchange
    // *   **100021**: 21Vianet Group
    // *   **1000333**: Wasu Media Holding
    // *   **100093**: Wangsu Science & Technology
    // *   **1000401**: Tencent
    // *   **100099**: Baidu
    // *   **1000323**: Alibaba Cloud
    // *   **100098**: Alibaba
    std::shared_ptr<string> isp_ = nullptr;
    // The source IP address of the volumetric attack.
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
