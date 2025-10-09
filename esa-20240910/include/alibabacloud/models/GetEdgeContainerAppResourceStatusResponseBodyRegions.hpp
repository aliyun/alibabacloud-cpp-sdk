// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCESTATUSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCESTATUSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResourceStatusResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResourceStatusResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(IsOffline, isOffline_);
      DARABONBA_PTR_TO_JSON(IsStaging, isStaging_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResourceStatusResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(IsOffline, isOffline_);
      DARABONBA_PTR_FROM_JSON(IsStaging, isStaging_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetEdgeContainerAppResourceStatusResponseBodyRegions() = default ;
    GetEdgeContainerAppResourceStatusResponseBodyRegions(const GetEdgeContainerAppResourceStatusResponseBodyRegions &) = default ;
    GetEdgeContainerAppResourceStatusResponseBodyRegions(GetEdgeContainerAppResourceStatusResponseBodyRegions &&) = default ;
    GetEdgeContainerAppResourceStatusResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResourceStatusResponseBodyRegions() = default ;
    GetEdgeContainerAppResourceStatusResponseBodyRegions& operator=(const GetEdgeContainerAppResourceStatusResponseBodyRegions &) = default ;
    GetEdgeContainerAppResourceStatusResponseBodyRegions& operator=(GetEdgeContainerAppResourceStatusResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isOffline_ != nullptr
        && this->isStaging_ != nullptr && this->isp_ != nullptr && this->ready_ != nullptr && this->region_ != nullptr && this->total_ != nullptr; };
    // isOffline Field Functions 
    bool hasIsOffline() const { return this->isOffline_ != nullptr;};
    void deleteIsOffline() { this->isOffline_ = nullptr;};
    inline bool isOffline() const { DARABONBA_PTR_GET_DEFAULT(isOffline_, false) };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setIsOffline(bool isOffline) { DARABONBA_PTR_SET_VALUE(isOffline_, isOffline) };


    // isStaging Field Functions 
    bool hasIsStaging() const { return this->isStaging_ != nullptr;};
    void deleteIsStaging() { this->isStaging_ = nullptr;};
    inline bool isStaging() const { DARABONBA_PTR_GET_DEFAULT(isStaging_, false) };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setIsStaging(bool isStaging) { DARABONBA_PTR_SET_VALUE(isStaging_, isStaging) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int32_t ready() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetEdgeContainerAppResourceStatusResponseBodyRegions& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Whether smooth offline is being used.
    std::shared_ptr<bool> isOffline_ = nullptr;
    // Whether it is a test environment.
    std::shared_ptr<bool> isStaging_ = nullptr;
    // Supported ISPs are as follows. The parameter is left empty for regions outside the Chinese mainland. ISP:
    // 
    // *   China Mobile: cmcc
    // *   China Telecom: chinanet
    // *   China Unicom: unicom
    std::shared_ptr<string> isp_ = nullptr;
    // The number of ready replicas.
    std::shared_ptr<int32_t> ready_ = nullptr;
    // Chinese mainland:
    // 
    // *   East China: huadong
    // *   South China: huanan
    // *   Central China: huazhong
    // *   North China: huabei
    // *   Northwest China: xibei
    // *   Southwest China: xinan
    // *   Northeast China: dongbei
    // 
    // Special Administrative Regions and Overseas:
    // 
    // *   Taiwan, China: tw
    // *   Macau, China: mo
    // *   Hong Kong, China: hk
    // *   Japan: jp
    // *   United States: us
    // *   Thailand: th
    // *   Korea: kr
    // *   Russia: ru
    // *   Singapore: sg
    // *   France: fr
    // *   Spain: es
    // *   Italy: it
    // *   Sweden: se
    // *   UAE: ae
    // *   Indonesia: id
    // *   Chile: cl
    // *   Philippines: ph
    // *   Malaysia: my
    // *   Vietnam: vn
    // *   Argentina: AR
    // *   Australia: au
    // *   Brazil: br
    // *   Colombia: co
    // *   Germany: de
    // *   UK: GB
    // *   Peru: pe
    // *   Saudi Arabia: sa
    // *   Netherlands: nl
    // *   South Africa: za
    std::shared_ptr<string> region_ = nullptr;
    // The number of replicas that are deployed.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
