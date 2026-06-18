// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCECAPACITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCECAPACITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResourceCapacityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResourceCapacityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResourceCapacityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeContainerAppResourceCapacityResponseBody() = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(const GetEdgeContainerAppResourceCapacityResponseBody &) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(GetEdgeContainerAppResourceCapacityResponseBody &&) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResourceCapacityResponseBody() = default ;
    GetEdgeContainerAppResourceCapacityResponseBody& operator=(const GetEdgeContainerAppResourceCapacityResponseBody &) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody& operator=(GetEdgeContainerAppResourceCapacityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isp_ == nullptr
        && this->region_ == nullptr && this->replicas_ == nullptr; };
      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Regions& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Regions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
      inline Regions& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    protected:
      // The carrier. This parameter is returned only for regions in the Chinese mainland. Valid values:
      // 
      // - cmcc: China Mobile
      // 
      // - chinanet: China Telecom
      // 
      // - unicom: China Unicom
      shared_ptr<string> isp_ {};
      // The Chinese mainland:
      // 
      // - huadong: East China
      // 
      // - huanan: South China
      // 
      // - huazhong: Central China
      // 
      // - huabei: North China
      // 
      // - xibei: Northwest China
      // 
      // - xinan: Southwest China
      // 
      // - dongbei: Northeast China
      // 
      // Special administrative regions and regions outside the Chinese mainland:
      // 
      // - tw: Taiwan (China)
      // 
      // - mo: Macao (China)
      // 
      // - hk: Hong Kong (China)
      // 
      // - jp: Japan
      // 
      // - us: US
      // 
      // - th: Thailand
      // 
      // - kr: South Korea
      // 
      // - ru: Russia
      // 
      // - sg: Singapore
      // 
      // - fr: France
      // 
      // - es: Spain
      // 
      // - it: Italy
      // 
      // - se: Sweden
      // 
      // - ae: UAE
      // 
      // - id: Indonesia
      // 
      // - cl: Chile
      // 
      // - ph: Philippines
      // 
      // - my: Malaysia
      // 
      // - vn: Vietnam
      // 
      // - ar: Argentina
      // 
      // - au: Australia
      // 
      // - br: Brazil
      // 
      // - co: Colombia
      // 
      // - de: Germany
      // 
      // - gb: UK
      // 
      // - pe: Peru
      // 
      // - sa: Saudi Arabia
      // 
      // - nl: Netherlands
      // 
      // - za: South Africa
      shared_ptr<string> region_ {};
      // The number of container replicas that can be deployed.
      shared_ptr<int32_t> replicas_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions>) };
    inline vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions>) };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRegions(const vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRegions(vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available regions.
    shared_ptr<vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions>> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
