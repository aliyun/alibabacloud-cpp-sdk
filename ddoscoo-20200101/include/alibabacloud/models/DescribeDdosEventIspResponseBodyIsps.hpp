// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODYISPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODYISPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventIspResponseBodyIsps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventIspResponseBodyIsps& obj) { 
      DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeDDosEventIspResponseBodyIsps() = default ;
    DescribeDDosEventIspResponseBodyIsps(const DescribeDDosEventIspResponseBodyIsps &) = default ;
    DescribeDDosEventIspResponseBodyIsps(DescribeDDosEventIspResponseBodyIsps &&) = default ;
    DescribeDDosEventIspResponseBodyIsps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventIspResponseBodyIsps() = default ;
    DescribeDDosEventIspResponseBodyIsps& operator=(const DescribeDDosEventIspResponseBodyIsps &) = default ;
    DescribeDDosEventIspResponseBodyIsps& operator=(DescribeDDosEventIspResponseBodyIsps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inPkts_ != nullptr
        && this->isp_ != nullptr; };
    // inPkts Field Functions 
    bool hasInPkts() const { return this->inPkts_ != nullptr;};
    void deleteInPkts() { this->inPkts_ = nullptr;};
    inline int64_t inPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
    inline DescribeDDosEventIspResponseBodyIsps& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeDDosEventIspResponseBodyIsps& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


  protected:
    // The number of request packets that were sent from the ISP.
    std::shared_ptr<int64_t> inPkts_ = nullptr;
    // The code of the ISP. Valid values:
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
