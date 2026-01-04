// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventSrcIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventSrcIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventSrcIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventSrcIpResponseBody() = default ;
    DescribeDDosEventSrcIpResponseBody(const DescribeDDosEventSrcIpResponseBody &) = default ;
    DescribeDDosEventSrcIpResponseBody(DescribeDDosEventSrcIpResponseBody &&) = default ;
    DescribeDDosEventSrcIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventSrcIpResponseBody() = default ;
    DescribeDDosEventSrcIpResponseBody& operator=(const DescribeDDosEventSrcIpResponseBody &) = default ;
    DescribeDDosEventSrcIpResponseBody& operator=(DescribeDDosEventSrcIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ips& obj) { 
        DARABONBA_PTR_TO_JSON(AreaId, areaId_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      };
      friend void from_json(const Darabonba::Json& j, Ips& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      };
      Ips() = default ;
      Ips(const Ips &) = default ;
      Ips(Ips &&) = default ;
      Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ips() = default ;
      Ips& operator=(const Ips &) = default ;
      Ips& operator=(Ips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaId_ == nullptr
        && this->isp_ == nullptr && this->srcIp_ == nullptr; };
      // areaId Field Functions 
      bool hasAreaId() const { return this->areaId_ != nullptr;};
      void deleteAreaId() { this->areaId_ = nullptr;};
      inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
      inline Ips& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Ips& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline Ips& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    protected:
      // The code or ID of the source region. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
      shared_ptr<string> areaId_ {};
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
      shared_ptr<string> isp_ {};
      // The source IP address of the volumetric attack.
      shared_ptr<string> srcIp_ {};
    };

    virtual bool empty() const override { return this->ips_ == nullptr
        && this->requestId_ == nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DescribeDDosEventSrcIpResponseBody::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<DescribeDDosEventSrcIpResponseBody::Ips>) };
    inline vector<DescribeDDosEventSrcIpResponseBody::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<DescribeDDosEventSrcIpResponseBody::Ips>) };
    inline DescribeDDosEventSrcIpResponseBody& setIps(const vector<DescribeDDosEventSrcIpResponseBody::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DescribeDDosEventSrcIpResponseBody& setIps(vector<DescribeDDosEventSrcIpResponseBody::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventSrcIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the source IP address of the volumetric attack.
    shared_ptr<vector<DescribeDDosEventSrcIpResponseBody::Ips>> ips_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
