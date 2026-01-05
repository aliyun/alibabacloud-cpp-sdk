// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAreasList, liveAreasList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAreasList, liveAreasList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePrivateLineAreasResponseBody() = default ;
    DescribeLivePrivateLineAreasResponseBody(const DescribeLivePrivateLineAreasResponseBody &) = default ;
    DescribeLivePrivateLineAreasResponseBody(DescribeLivePrivateLineAreasResponseBody &&) = default ;
    DescribeLivePrivateLineAreasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBody() = default ;
    DescribeLivePrivateLineAreasResponseBody& operator=(const DescribeLivePrivateLineAreasResponseBody &) = default ;
    DescribeLivePrivateLineAreasResponseBody& operator=(DescribeLivePrivateLineAreasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveAreasList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveAreasList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveArea, liveArea_);
      };
      friend void from_json(const Darabonba::Json& j, LiveAreasList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveArea, liveArea_);
      };
      LiveAreasList() = default ;
      LiveAreasList(const LiveAreasList &) = default ;
      LiveAreasList(LiveAreasList &&) = default ;
      LiveAreasList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveAreasList() = default ;
      LiveAreasList& operator=(const LiveAreasList &) = default ;
      LiveAreasList& operator=(LiveAreasList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveArea : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveArea& obj) { 
          DARABONBA_PTR_TO_JSON(RegionType, regionType_);
          DARABONBA_PTR_TO_JSON(Regions, regions_);
        };
        friend void from_json(const Darabonba::Json& j, LiveArea& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionType, regionType_);
          DARABONBA_PTR_FROM_JSON(Regions, regions_);
        };
        LiveArea() = default ;
        LiveArea(const LiveArea &) = default ;
        LiveArea(LiveArea &&) = default ;
        LiveArea(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveArea() = default ;
        LiveArea& operator=(const LiveArea &) = default ;
        LiveArea& operator=(LiveArea &&) = default ;
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
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            };
            friend void from_json(const Darabonba::Json& j, Region& obj) { 
              DARABONBA_PTR_FROM_JSON(LocalName, localName_);
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
            virtual bool empty() const override { return this->localName_ == nullptr
        && this->regionId_ == nullptr; };
            // localName Field Functions 
            bool hasLocalName() const { return this->localName_ != nullptr;};
            void deleteLocalName() { this->localName_ = nullptr;};
            inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
            inline Region& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          protected:
            // The region name.
            shared_ptr<string> localName_ {};
            // The region ID.
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

        virtual bool empty() const override { return this->regionType_ == nullptr
        && this->regions_ == nullptr; };
        // regionType Field Functions 
        bool hasRegionType() const { return this->regionType_ != nullptr;};
        void deleteRegionType() { this->regionType_ = nullptr;};
        inline string getRegionType() const { DARABONBA_PTR_GET_DEFAULT(regionType_, "") };
        inline LiveArea& setRegionType(string regionType) { DARABONBA_PTR_SET_VALUE(regionType_, regionType) };


        // regions Field Functions 
        bool hasRegions() const { return this->regions_ != nullptr;};
        void deleteRegions() { this->regions_ = nullptr;};
        inline const LiveArea::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, LiveArea::Regions) };
        inline LiveArea::Regions getRegions() { DARABONBA_PTR_GET(regions_, LiveArea::Regions) };
        inline LiveArea& setRegions(const LiveArea::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
        inline LiveArea& setRegions(LiveArea::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


      protected:
        // The region type. Valid values:
        // 
        // *   domestic: in the Chinese mainland
        // *   overseas: outside the Chinese mainland
        shared_ptr<string> regionType_ {};
        // The regions.
        shared_ptr<LiveArea::Regions> regions_ {};
      };

      virtual bool empty() const override { return this->liveArea_ == nullptr; };
      // liveArea Field Functions 
      bool hasLiveArea() const { return this->liveArea_ != nullptr;};
      void deleteLiveArea() { this->liveArea_ = nullptr;};
      inline const vector<LiveAreasList::LiveArea> & getLiveArea() const { DARABONBA_PTR_GET_CONST(liveArea_, vector<LiveAreasList::LiveArea>) };
      inline vector<LiveAreasList::LiveArea> getLiveArea() { DARABONBA_PTR_GET(liveArea_, vector<LiveAreasList::LiveArea>) };
      inline LiveAreasList& setLiveArea(const vector<LiveAreasList::LiveArea> & liveArea) { DARABONBA_PTR_SET_VALUE(liveArea_, liveArea) };
      inline LiveAreasList& setLiveArea(vector<LiveAreasList::LiveArea> && liveArea) { DARABONBA_PTR_SET_RVALUE(liveArea_, liveArea) };


    protected:
      shared_ptr<vector<LiveAreasList::LiveArea>> liveArea_ {};
    };

    virtual bool empty() const override { return this->liveAreasList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveAreasList Field Functions 
    bool hasLiveAreasList() const { return this->liveAreasList_ != nullptr;};
    void deleteLiveAreasList() { this->liveAreasList_ = nullptr;};
    inline const DescribeLivePrivateLineAreasResponseBody::LiveAreasList & getLiveAreasList() const { DARABONBA_PTR_GET_CONST(liveAreasList_, DescribeLivePrivateLineAreasResponseBody::LiveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBody::LiveAreasList getLiveAreasList() { DARABONBA_PTR_GET(liveAreasList_, DescribeLivePrivateLineAreasResponseBody::LiveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBody& setLiveAreasList(const DescribeLivePrivateLineAreasResponseBody::LiveAreasList & liveAreasList) { DARABONBA_PTR_SET_VALUE(liveAreasList_, liveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBody& setLiveAreasList(DescribeLivePrivateLineAreasResponseBody::LiveAreasList && liveAreasList) { DARABONBA_PTR_SET_RVALUE(liveAreasList_, liveAreasList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePrivateLineAreasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the regions.
    shared_ptr<DescribeLivePrivateLineAreasResponseBody::LiveAreasList> liveAreasList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
