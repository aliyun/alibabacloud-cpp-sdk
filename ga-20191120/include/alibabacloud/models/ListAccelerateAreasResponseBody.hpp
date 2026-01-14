// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATEAREASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATEAREASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListAccelerateAreasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerateAreasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Areas, areas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerateAreasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Areas, areas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccelerateAreasResponseBody() = default ;
    ListAccelerateAreasResponseBody(const ListAccelerateAreasResponseBody &) = default ;
    ListAccelerateAreasResponseBody(ListAccelerateAreasResponseBody &&) = default ;
    ListAccelerateAreasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerateAreasResponseBody() = default ;
    ListAccelerateAreasResponseBody& operator=(const ListAccelerateAreasResponseBody &) = default ;
    ListAccelerateAreasResponseBody& operator=(ListAccelerateAreasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Areas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Areas& obj) { 
        DARABONBA_PTR_TO_JSON(AreaId, areaId_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      };
      friend void from_json(const Darabonba::Json& j, Areas& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      };
      Areas() = default ;
      Areas(const Areas &) = default ;
      Areas(Areas &&) = default ;
      Areas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Areas() = default ;
      Areas& operator=(const Areas &) = default ;
      Areas& operator=(Areas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RegionList() = default ;
        RegionList(const RegionList &) = default ;
        RegionList(RegionList &&) = default ;
        RegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionList() = default ;
        RegionList& operator=(const RegionList &) = default ;
        RegionList& operator=(RegionList &&) = default ;
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
        inline RegionList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The name of the region.
        shared_ptr<string> localName_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->areaId_ == nullptr
        && this->localName_ == nullptr && this->regionList_ == nullptr; };
      // areaId Field Functions 
      bool hasAreaId() const { return this->areaId_ != nullptr;};
      void deleteAreaId() { this->areaId_ = nullptr;};
      inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
      inline Areas& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Areas& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // regionList Field Functions 
      bool hasRegionList() const { return this->regionList_ != nullptr;};
      void deleteRegionList() { this->regionList_ = nullptr;};
      inline const vector<Areas::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<Areas::RegionList>) };
      inline vector<Areas::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<Areas::RegionList>) };
      inline Areas& setRegionList(const vector<Areas::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
      inline Areas& setRegionList(vector<Areas::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    protected:
      // The area ID.
      shared_ptr<string> areaId_ {};
      // The name of the area.
      shared_ptr<string> localName_ {};
      // The regions in the acceleration area.
      shared_ptr<vector<Areas::RegionList>> regionList_ {};
    };

    virtual bool empty() const override { return this->areas_ == nullptr
        && this->requestId_ == nullptr; };
    // areas Field Functions 
    bool hasAreas() const { return this->areas_ != nullptr;};
    void deleteAreas() { this->areas_ = nullptr;};
    inline const vector<ListAccelerateAreasResponseBody::Areas> & getAreas() const { DARABONBA_PTR_GET_CONST(areas_, vector<ListAccelerateAreasResponseBody::Areas>) };
    inline vector<ListAccelerateAreasResponseBody::Areas> getAreas() { DARABONBA_PTR_GET(areas_, vector<ListAccelerateAreasResponseBody::Areas>) };
    inline ListAccelerateAreasResponseBody& setAreas(const vector<ListAccelerateAreasResponseBody::Areas> & areas) { DARABONBA_PTR_SET_VALUE(areas_, areas) };
    inline ListAccelerateAreasResponseBody& setAreas(vector<ListAccelerateAreasResponseBody::Areas> && areas) { DARABONBA_PTR_SET_RVALUE(areas_, areas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccelerateAreasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the areas.
    shared_ptr<vector<ListAccelerateAreasResponseBody::Areas>> areas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
