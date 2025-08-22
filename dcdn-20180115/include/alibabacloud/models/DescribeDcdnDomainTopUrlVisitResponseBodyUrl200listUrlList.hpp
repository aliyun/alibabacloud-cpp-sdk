// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL200LISTURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL200LISTURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(Flow, flow_);
      DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
      DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
      DARABONBA_PTR_TO_JSON(VisitData, visitData_);
      DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
      DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
      DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
      DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
      DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
    };
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList(DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList &&) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& operator=(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& operator=(DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flow_ != nullptr
        && this->flowProportion_ != nullptr && this->urlDetail_ != nullptr && this->visitData_ != nullptr && this->visitProportion_ != nullptr; };
    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline string flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


    // flowProportion Field Functions 
    bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
    void deleteFlowProportion() { this->flowProportion_ = nullptr;};
    inline float flowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


    // urlDetail Field Functions 
    bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
    void deleteUrlDetail() { this->urlDetail_ = nullptr;};
    inline string urlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


    // visitData Field Functions 
    bool hasVisitData() const { return this->visitData_ != nullptr;};
    void deleteVisitData() { this->visitData_ = nullptr;};
    inline string visitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


    // visitProportion Field Functions 
    bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
    void deleteVisitProportion() { this->visitProportion_ = nullptr;};
    inline float visitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl200ListUrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


  protected:
    // The amount of network traffic. (Unit: bytes)
    std::shared_ptr<string> flow_ = nullptr;
    // The proportion of network traffic consumed to access the URL.
    std::shared_ptr<float> flowProportion_ = nullptr;
    // The complete URL.
    std::shared_ptr<string> urlDetail_ = nullptr;
    // The number of visits.
    std::shared_ptr<string> visitData_ = nullptr;
    // The proportion of visits.
    std::shared_ptr<float> visitProportion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
