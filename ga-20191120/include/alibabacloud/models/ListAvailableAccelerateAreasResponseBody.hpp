// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEACCELERATEAREASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEACCELERATEAREASRESPONSEBODY_HPP_
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
  class ListAvailableAccelerateAreasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableAccelerateAreasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Areas, areas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableAccelerateAreasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Areas, areas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAvailableAccelerateAreasResponseBody() = default ;
    ListAvailableAccelerateAreasResponseBody(const ListAvailableAccelerateAreasResponseBody &) = default ;
    ListAvailableAccelerateAreasResponseBody(ListAvailableAccelerateAreasResponseBody &&) = default ;
    ListAvailableAccelerateAreasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableAccelerateAreasResponseBody() = default ;
    ListAvailableAccelerateAreasResponseBody& operator=(const ListAvailableAccelerateAreasResponseBody &) = default ;
    ListAvailableAccelerateAreasResponseBody& operator=(ListAvailableAccelerateAreasResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ChinaMainland, chinaMainland_);
          DARABONBA_PTR_TO_JSON(IspTypeList, ispTypeList_);
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(MultiAz, multiAz_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
        };
        friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
          DARABONBA_PTR_FROM_JSON(ChinaMainland, chinaMainland_);
          DARABONBA_PTR_FROM_JSON(IspTypeList, ispTypeList_);
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(MultiAz, multiAz_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
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
        virtual bool empty() const override { return this->chinaMainland_ == nullptr
        && this->ispTypeList_ == nullptr && this->localName_ == nullptr && this->multiAz_ == nullptr && this->regionId_ == nullptr && this->supportIpv6_ == nullptr; };
        // chinaMainland Field Functions 
        bool hasChinaMainland() const { return this->chinaMainland_ != nullptr;};
        void deleteChinaMainland() { this->chinaMainland_ = nullptr;};
        inline bool getChinaMainland() const { DARABONBA_PTR_GET_DEFAULT(chinaMainland_, false) };
        inline RegionList& setChinaMainland(bool chinaMainland) { DARABONBA_PTR_SET_VALUE(chinaMainland_, chinaMainland) };


        // ispTypeList Field Functions 
        bool hasIspTypeList() const { return this->ispTypeList_ != nullptr;};
        void deleteIspTypeList() { this->ispTypeList_ = nullptr;};
        inline const vector<string> & getIspTypeList() const { DARABONBA_PTR_GET_CONST(ispTypeList_, vector<string>) };
        inline vector<string> getIspTypeList() { DARABONBA_PTR_GET(ispTypeList_, vector<string>) };
        inline RegionList& setIspTypeList(const vector<string> & ispTypeList) { DARABONBA_PTR_SET_VALUE(ispTypeList_, ispTypeList) };
        inline RegionList& setIspTypeList(vector<string> && ispTypeList) { DARABONBA_PTR_SET_RVALUE(ispTypeList_, ispTypeList) };


        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline RegionList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // multiAz Field Functions 
        bool hasMultiAz() const { return this->multiAz_ != nullptr;};
        void deleteMultiAz() { this->multiAz_ = nullptr;};
        inline bool getMultiAz() const { DARABONBA_PTR_GET_DEFAULT(multiAz_, false) };
        inline RegionList& setMultiAz(bool multiAz) { DARABONBA_PTR_SET_VALUE(multiAz_, multiAz) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // supportIpv6 Field Functions 
        bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
        void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
        inline bool getSupportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
        inline RegionList& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


      protected:
        // Indicates whether the region is in the Chinese mainland. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> chinaMainland_ {};
        // The line type of the elastic IP address (EIP) in the acceleration region. Valid values:
        // 
        // *   **BGP**: BGP (Multi-ISP) lines.
        // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines.
        shared_ptr<vector<string>> ispTypeList_ {};
        // The acceleration region name.
        shared_ptr<string> localName_ {};
        // Indicates whether multiple zones are supported. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> multiAz_ {};
        // The ID of the acceleration region.
        shared_ptr<string> regionId_ {};
        // Indicates whether IPv6 is supported. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> supportIpv6_ {};
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
      // The ID of the acceleration area.
      shared_ptr<string> areaId_ {};
      // The acceleration area name.
      shared_ptr<string> localName_ {};
      // The information about acceleration regions.
      shared_ptr<vector<Areas::RegionList>> regionList_ {};
    };

    virtual bool empty() const override { return this->areas_ == nullptr
        && this->requestId_ == nullptr; };
    // areas Field Functions 
    bool hasAreas() const { return this->areas_ != nullptr;};
    void deleteAreas() { this->areas_ = nullptr;};
    inline const vector<ListAvailableAccelerateAreasResponseBody::Areas> & getAreas() const { DARABONBA_PTR_GET_CONST(areas_, vector<ListAvailableAccelerateAreasResponseBody::Areas>) };
    inline vector<ListAvailableAccelerateAreasResponseBody::Areas> getAreas() { DARABONBA_PTR_GET(areas_, vector<ListAvailableAccelerateAreasResponseBody::Areas>) };
    inline ListAvailableAccelerateAreasResponseBody& setAreas(const vector<ListAvailableAccelerateAreasResponseBody::Areas> & areas) { DARABONBA_PTR_SET_VALUE(areas_, areas) };
    inline ListAvailableAccelerateAreasResponseBody& setAreas(vector<ListAvailableAccelerateAreasResponseBody::Areas> && areas) { DARABONBA_PTR_SET_RVALUE(areas_, areas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableAccelerateAreasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about acceleration areas.
    shared_ptr<vector<ListAvailableAccelerateAreasResponseBody::Areas>> areas_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
