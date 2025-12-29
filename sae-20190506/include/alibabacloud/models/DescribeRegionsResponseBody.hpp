// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      class Region : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Region& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RecommendZones, recommendZones_);
          DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RecommendZones, recommendZones_);
          DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        Region() = default ;
        Region(const Region &) = default ;
        Region(Region &&) = default ;
        Region(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Region() = default ;
        Region& operator=(const Region &) = default ;
        Region& operator=(Region &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecommendZones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecommendZones& obj) { 
            DARABONBA_PTR_TO_JSON(RecommendZone, recommendZone_);
          };
          friend void from_json(const Darabonba::Json& j, RecommendZones& obj) { 
            DARABONBA_PTR_FROM_JSON(RecommendZone, recommendZone_);
          };
          RecommendZones() = default ;
          RecommendZones(const RecommendZones &) = default ;
          RecommendZones(RecommendZones &&) = default ;
          RecommendZones(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecommendZones() = default ;
          RecommendZones& operator=(const RecommendZones &) = default ;
          RecommendZones& operator=(RecommendZones &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->recommendZone_ == nullptr; };
          // recommendZone Field Functions 
          bool hasRecommendZone() const { return this->recommendZone_ != nullptr;};
          void deleteRecommendZone() { this->recommendZone_ = nullptr;};
          inline const vector<string> & getRecommendZone() const { DARABONBA_PTR_GET_CONST(recommendZone_, vector<string>) };
          inline vector<string> getRecommendZone() { DARABONBA_PTR_GET(recommendZone_, vector<string>) };
          inline RecommendZones& setRecommendZone(const vector<string> & recommendZone) { DARABONBA_PTR_SET_VALUE(recommendZone_, recommendZone) };
          inline RecommendZones& setRecommendZone(vector<string> && recommendZone) { DARABONBA_PTR_SET_RVALUE(recommendZone_, recommendZone) };


        protected:
          shared_ptr<vector<string>> recommendZone_ {};
        };

        virtual bool empty() const override { return this->localName_ == nullptr
        && this->recommendZones_ == nullptr && this->regionEndpoint_ == nullptr && this->regionId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Region& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // recommendZones Field Functions 
        bool hasRecommendZones() const { return this->recommendZones_ != nullptr;};
        void deleteRecommendZones() { this->recommendZones_ = nullptr;};
        inline const Region::RecommendZones & getRecommendZones() const { DARABONBA_PTR_GET_CONST(recommendZones_, Region::RecommendZones) };
        inline Region::RecommendZones getRecommendZones() { DARABONBA_PTR_GET(recommendZones_, Region::RecommendZones) };
        inline Region& setRecommendZones(const Region::RecommendZones & recommendZones) { DARABONBA_PTR_SET_VALUE(recommendZones_, recommendZones) };
        inline Region& setRecommendZones(Region::RecommendZones && recommendZones) { DARABONBA_PTR_SET_RVALUE(recommendZones_, recommendZones) };


        // regionEndpoint Field Functions 
        bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
        void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
        inline string getRegionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
        inline Region& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The region name. Valid values:
        // 
        // *   **China (Hangzhou)**
        // *   **China (Shanghai)**
        // *   **China (Beijing)**
        // *   **China (Zhangjiakou)**
        // *   **China (Shenzhen)**
        // *   **China (Guangzhou)**
        // *   **China (Hong Kong)**
        // *   **Singapore**
        // *   **US (Silicon Valley)**
        shared_ptr<string> localName_ {};
        // The recommended zones.
        shared_ptr<Region::RecommendZones> recommendZones_ {};
        // The endpoint for the region. Valid values:
        // 
        // *   **sae.cn-hangzhou.aliyuncs.com**
        // *   **sae.cn-shanghai.aliyuncs.com**
        // *   **sae.cn-beijing.aliyuncs.com**
        // *   **sae.cn-zhangjiakou.aliyuncs.com**
        // *   **sae.cn-shenzhen.aliyuncs.com**
        // *   **sae.cn-guangzhou.aliyuncs.com**
        // *   **sae.cn-hongkong.aliyuncs.com**
        // *   **sae.ap-southeast-1.aliyuncs.com**
        // *   **sae.us-west-1.aliyuncs.com**
        shared_ptr<string> regionEndpoint_ {};
        // The region ID. Valid values:
        // 
        // *   **cn-hangzhou**: the ID of the China (Hangzhou) region
        // *   **cn-shanghai**: the ID of the China (Shanghai) region
        // *   **cn-beijing**: the ID of the China (Beijing) region
        // *   **cn-zhangjiakou**: the ID of the China (Zhangjiakou) region
        // *   **cn-shenzhen**: the ID of the China (Shenzhen) region
        // *   **cn-guangzhou**: the ID of the China (Guangzhou) region
        // *   **cn-hongkong**: the ID of the China (Hong Kong) region
        // *   **ap-southeast-1**: the ID of the Singapore region
        // *   **us-west-1**: the ID of the US (Silicon Valley) region
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->region_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline const vector<Regions::Region> & getRegion() const { DARABONBA_PTR_GET_CONST(region_, vector<Regions::Region>) };
      inline vector<Regions::Region> getRegion() { DARABONBA_PTR_GET(region_, vector<Regions::Region>) };
      inline Regions& setRegion(const vector<Regions::Region> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
      inline Regions& setRegion(vector<Regions::Region> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


    protected:
      shared_ptr<vector<Regions::Region>> region_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->regions_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeRegionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionsResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody& setRegions(const DescribeRegionsResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsResponseBody& setRegions(DescribeRegionsResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The regions.
    shared_ptr<DescribeRegionsResponseBody::Regions> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
