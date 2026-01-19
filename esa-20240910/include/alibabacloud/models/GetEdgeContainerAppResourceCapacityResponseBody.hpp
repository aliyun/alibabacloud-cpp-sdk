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
      // Supported ISPs are as follows. The parameter is left empty for regions outside the Chinese mainland. ISP:
      // 
      // *   China Mobile: cmcc
      // *   China Telecom: chinanet
      // *   China Unicom: unicom
      shared_ptr<string> isp_ {};
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
    // The queried region.
    shared_ptr<vector<GetEdgeContainerAppResourceCapacityResponseBody::Regions>> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
