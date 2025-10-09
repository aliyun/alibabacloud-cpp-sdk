// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUESTRESERVESET_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUESTRESERVESET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppResourceReserveRequestReserveSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppResourceReserveRequestReserveSet& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppResourceReserveRequestReserveSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
    };
    UpdateEdgeContainerAppResourceReserveRequestReserveSet() = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(const UpdateEdgeContainerAppResourceReserveRequestReserveSet &) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(UpdateEdgeContainerAppResourceReserveRequestReserveSet &&) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppResourceReserveRequestReserveSet() = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet& operator=(const UpdateEdgeContainerAppResourceReserveRequestReserveSet &) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet& operator=(UpdateEdgeContainerAppResourceReserveRequestReserveSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isp_ != nullptr
        && this->region_ != nullptr && this->replicas_ != nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


  protected:
    // The ISP. The following types are supported. You do not need to enter the ISP in regions outside the Chinese mainland:
    // 
    // *   China Mobile: cmcc
    // *   China Telecom: chinanet
    // *   China Unicom: unicom
    std::shared_ptr<string> isp_ = nullptr;
    // Information about the region. The Chinese mainland supports the input of regions and special administrative regions, and the regions outside the Chinese mainland support the input of countries. The following is the corresponding parameter mapping:
    // 
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
    // Special Administrative Regions and overseas:
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
    // The number of container replicas.
    std::shared_ptr<int32_t> replicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
