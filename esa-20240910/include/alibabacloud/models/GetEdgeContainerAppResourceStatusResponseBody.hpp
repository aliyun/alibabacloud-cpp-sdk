// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCESTATUSRESPONSEBODY_HPP_
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
  class GetEdgeContainerAppResourceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResourceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResourceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeContainerAppResourceStatusResponseBody() = default ;
    GetEdgeContainerAppResourceStatusResponseBody(const GetEdgeContainerAppResourceStatusResponseBody &) = default ;
    GetEdgeContainerAppResourceStatusResponseBody(GetEdgeContainerAppResourceStatusResponseBody &&) = default ;
    GetEdgeContainerAppResourceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResourceStatusResponseBody() = default ;
    GetEdgeContainerAppResourceStatusResponseBody& operator=(const GetEdgeContainerAppResourceStatusResponseBody &) = default ;
    GetEdgeContainerAppResourceStatusResponseBody& operator=(GetEdgeContainerAppResourceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(IsOffline, isOffline_);
        DARABONBA_PTR_TO_JSON(IsStaging, isStaging_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(Ready, ready_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(IsOffline, isOffline_);
        DARABONBA_PTR_FROM_JSON(IsStaging, isStaging_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(Ready, ready_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      virtual bool empty() const override { return this->isOffline_ == nullptr
        && this->isStaging_ == nullptr && this->isp_ == nullptr && this->ready_ == nullptr && this->region_ == nullptr && this->total_ == nullptr; };
      // isOffline Field Functions 
      bool hasIsOffline() const { return this->isOffline_ != nullptr;};
      void deleteIsOffline() { this->isOffline_ = nullptr;};
      inline bool getIsOffline() const { DARABONBA_PTR_GET_DEFAULT(isOffline_, false) };
      inline Regions& setIsOffline(bool isOffline) { DARABONBA_PTR_SET_VALUE(isOffline_, isOffline) };


      // isStaging Field Functions 
      bool hasIsStaging() const { return this->isStaging_ != nullptr;};
      void deleteIsStaging() { this->isStaging_ = nullptr;};
      inline bool getIsStaging() const { DARABONBA_PTR_GET_DEFAULT(isStaging_, false) };
      inline Regions& setIsStaging(bool isStaging) { DARABONBA_PTR_SET_VALUE(isStaging_, isStaging) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Regions& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // ready Field Functions 
      bool hasReady() const { return this->ready_ != nullptr;};
      void deleteReady() { this->ready_ = nullptr;};
      inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
      inline Regions& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Regions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Regions& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Whether smooth offline is being used.
      shared_ptr<bool> isOffline_ {};
      // Whether it is a test environment.
      shared_ptr<bool> isStaging_ {};
      // Supported ISPs are as follows. The parameter is left empty for regions outside the Chinese mainland. ISP:
      // 
      // *   China Mobile: cmcc
      // *   China Telecom: chinanet
      // *   China Unicom: unicom
      shared_ptr<string> isp_ {};
      // The number of ready replicas.
      shared_ptr<int32_t> ready_ {};
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
      // The number of replicas that are deployed.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<GetEdgeContainerAppResourceStatusResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<GetEdgeContainerAppResourceStatusResponseBody::Regions>) };
    inline vector<GetEdgeContainerAppResourceStatusResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<GetEdgeContainerAppResourceStatusResponseBody::Regions>) };
    inline GetEdgeContainerAppResourceStatusResponseBody& setRegions(const vector<GetEdgeContainerAppResourceStatusResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetEdgeContainerAppResourceStatusResponseBody& setRegions(vector<GetEdgeContainerAppResourceStatusResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppResourceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Queries the regions of deployment.
    shared_ptr<vector<GetEdgeContainerAppResourceStatusResponseBody::Regions>> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
