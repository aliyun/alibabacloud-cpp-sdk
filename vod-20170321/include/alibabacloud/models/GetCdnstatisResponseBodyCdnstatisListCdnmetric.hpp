// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCDNSTATISRESPONSEBODYCDNSTATISLISTCDNMETRIC_HPP_
#define ALIBABACLOUD_MODELS_GETCDNSTATISRESPONSEBODYCDNSTATISLISTCDNMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCDNStatisResponseBodyCDNStatisListCDNMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCDNStatisResponseBodyCDNStatisListCDNMetric& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataDomesticValue, bpsDataDomesticValue_);
      DARABONBA_PTR_TO_JSON(BpsDataOverseasValue, bpsDataOverseasValue_);
      DARABONBA_PTR_TO_JSON(BpsDataValue, bpsDataValue_);
      DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_TO_JSON(FlowDataDomesticValue, flowDataDomesticValue_);
      DARABONBA_PTR_TO_JSON(FlowDataOverseasValue, flowDataOverseasValue_);
      DARABONBA_PTR_TO_JSON(FlowDataValue, flowDataValue_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StatTime, statTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCDNStatisResponseBodyCDNStatisListCDNMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataDomesticValue, bpsDataDomesticValue_);
      DARABONBA_PTR_FROM_JSON(BpsDataOverseasValue, bpsDataOverseasValue_);
      DARABONBA_PTR_FROM_JSON(BpsDataValue, bpsDataValue_);
      DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_FROM_JSON(FlowDataDomesticValue, flowDataDomesticValue_);
      DARABONBA_PTR_FROM_JSON(FlowDataOverseasValue, flowDataOverseasValue_);
      DARABONBA_PTR_FROM_JSON(FlowDataValue, flowDataValue_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
    };
    GetCDNStatisResponseBodyCDNStatisListCDNMetric() = default ;
    GetCDNStatisResponseBodyCDNStatisListCDNMetric(const GetCDNStatisResponseBodyCDNStatisListCDNMetric &) = default ;
    GetCDNStatisResponseBodyCDNStatisListCDNMetric(GetCDNStatisResponseBodyCDNStatisListCDNMetric &&) = default ;
    GetCDNStatisResponseBodyCDNStatisListCDNMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCDNStatisResponseBodyCDNStatisListCDNMetric() = default ;
    GetCDNStatisResponseBodyCDNStatisListCDNMetric& operator=(const GetCDNStatisResponseBodyCDNStatisListCDNMetric &) = default ;
    GetCDNStatisResponseBodyCDNStatisListCDNMetric& operator=(GetCDNStatisResponseBodyCDNStatisListCDNMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataDomesticValue_ != nullptr
        && this->bpsDataOverseasValue_ != nullptr && this->bpsDataValue_ != nullptr && this->cdnDomain_ != nullptr && this->flowDataDomesticValue_ != nullptr && this->flowDataOverseasValue_ != nullptr
        && this->flowDataValue_ != nullptr && this->id_ != nullptr && this->statTime_ != nullptr; };
    // bpsDataDomesticValue Field Functions 
    bool hasBpsDataDomesticValue() const { return this->bpsDataDomesticValue_ != nullptr;};
    void deleteBpsDataDomesticValue() { this->bpsDataDomesticValue_ = nullptr;};
    inline int64_t bpsDataDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(bpsDataDomesticValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setBpsDataDomesticValue(int64_t bpsDataDomesticValue) { DARABONBA_PTR_SET_VALUE(bpsDataDomesticValue_, bpsDataDomesticValue) };


    // bpsDataOverseasValue Field Functions 
    bool hasBpsDataOverseasValue() const { return this->bpsDataOverseasValue_ != nullptr;};
    void deleteBpsDataOverseasValue() { this->bpsDataOverseasValue_ = nullptr;};
    inline int64_t bpsDataOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(bpsDataOverseasValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setBpsDataOverseasValue(int64_t bpsDataOverseasValue) { DARABONBA_PTR_SET_VALUE(bpsDataOverseasValue_, bpsDataOverseasValue) };


    // bpsDataValue Field Functions 
    bool hasBpsDataValue() const { return this->bpsDataValue_ != nullptr;};
    void deleteBpsDataValue() { this->bpsDataValue_ = nullptr;};
    inline int64_t bpsDataValue() const { DARABONBA_PTR_GET_DEFAULT(bpsDataValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setBpsDataValue(int64_t bpsDataValue) { DARABONBA_PTR_SET_VALUE(bpsDataValue_, bpsDataValue) };


    // cdnDomain Field Functions 
    bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
    void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
    inline string cdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


    // flowDataDomesticValue Field Functions 
    bool hasFlowDataDomesticValue() const { return this->flowDataDomesticValue_ != nullptr;};
    void deleteFlowDataDomesticValue() { this->flowDataDomesticValue_ = nullptr;};
    inline int64_t flowDataDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(flowDataDomesticValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setFlowDataDomesticValue(int64_t flowDataDomesticValue) { DARABONBA_PTR_SET_VALUE(flowDataDomesticValue_, flowDataDomesticValue) };


    // flowDataOverseasValue Field Functions 
    bool hasFlowDataOverseasValue() const { return this->flowDataOverseasValue_ != nullptr;};
    void deleteFlowDataOverseasValue() { this->flowDataOverseasValue_ = nullptr;};
    inline int64_t flowDataOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(flowDataOverseasValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setFlowDataOverseasValue(int64_t flowDataOverseasValue) { DARABONBA_PTR_SET_VALUE(flowDataOverseasValue_, flowDataOverseasValue) };


    // flowDataValue Field Functions 
    bool hasFlowDataValue() const { return this->flowDataValue_ != nullptr;};
    void deleteFlowDataValue() { this->flowDataValue_ = nullptr;};
    inline int64_t flowDataValue() const { DARABONBA_PTR_GET_DEFAULT(flowDataValue_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setFlowDataValue(int64_t flowDataValue) { DARABONBA_PTR_SET_VALUE(flowDataValue_, flowDataValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // statTime Field Functions 
    bool hasStatTime() const { return this->statTime_ != nullptr;};
    void deleteStatTime() { this->statTime_ = nullptr;};
    inline string statTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
    inline GetCDNStatisResponseBodyCDNStatisListCDNMetric& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


  protected:
    std::shared_ptr<int64_t> bpsDataDomesticValue_ = nullptr;
    std::shared_ptr<int64_t> bpsDataOverseasValue_ = nullptr;
    std::shared_ptr<int64_t> bpsDataValue_ = nullptr;
    std::shared_ptr<string> cdnDomain_ = nullptr;
    std::shared_ptr<int64_t> flowDataDomesticValue_ = nullptr;
    std::shared_ptr<int64_t> flowDataOverseasValue_ = nullptr;
    std::shared_ptr<int64_t> flowDataValue_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> statTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
