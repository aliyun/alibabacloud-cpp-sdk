// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnRegionAndIspResponseBody() = default ;
    DescribeCdnRegionAndIspResponseBody(const DescribeCdnRegionAndIspResponseBody &) = default ;
    DescribeCdnRegionAndIspResponseBody(DescribeCdnRegionAndIspResponseBody &&) = default ;
    DescribeCdnRegionAndIspResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspResponseBody() = default ;
    DescribeCdnRegionAndIspResponseBody& operator=(const DescribeCdnRegionAndIspResponseBody &) = default ;
    DescribeCdnRegionAndIspResponseBody& operator=(DescribeCdnRegionAndIspResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
          DARABONBA_PTR_TO_JSON(NameZh, nameZh_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
          DARABONBA_PTR_FROM_JSON(NameZh, nameZh_);
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
        virtual bool empty() const override { return this->nameEn_ == nullptr
        && this->nameZh_ == nullptr; };
        // nameEn Field Functions 
        bool hasNameEn() const { return this->nameEn_ != nullptr;};
        void deleteNameEn() { this->nameEn_ = nullptr;};
        inline string getNameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
        inline Region& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


        // nameZh Field Functions 
        bool hasNameZh() const { return this->nameZh_ != nullptr;};
        void deleteNameZh() { this->nameZh_ = nullptr;};
        inline string getNameZh() const { DARABONBA_PTR_GET_DEFAULT(nameZh_, "") };
        inline Region& setNameZh(string nameZh) { DARABONBA_PTR_SET_VALUE(nameZh_, nameZh) };


      protected:
        shared_ptr<string> nameEn_ {};
        shared_ptr<string> nameZh_ {};
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

    class Isps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Isps& obj) { 
        DARABONBA_PTR_TO_JSON(Isp, isp_);
      };
      friend void from_json(const Darabonba::Json& j, Isps& obj) { 
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
      };
      Isps() = default ;
      Isps(const Isps &) = default ;
      Isps(Isps &&) = default ;
      Isps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Isps() = default ;
      Isps& operator=(const Isps &) = default ;
      Isps& operator=(Isps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Isp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Isp& obj) { 
          DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
          DARABONBA_PTR_TO_JSON(NameZh, nameZh_);
        };
        friend void from_json(const Darabonba::Json& j, Isp& obj) { 
          DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
          DARABONBA_PTR_FROM_JSON(NameZh, nameZh_);
        };
        Isp() = default ;
        Isp(const Isp &) = default ;
        Isp(Isp &&) = default ;
        Isp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Isp() = default ;
        Isp& operator=(const Isp &) = default ;
        Isp& operator=(Isp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nameEn_ == nullptr
        && this->nameZh_ == nullptr; };
        // nameEn Field Functions 
        bool hasNameEn() const { return this->nameEn_ != nullptr;};
        void deleteNameEn() { this->nameEn_ = nullptr;};
        inline string getNameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
        inline Isp& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


        // nameZh Field Functions 
        bool hasNameZh() const { return this->nameZh_ != nullptr;};
        void deleteNameZh() { this->nameZh_ = nullptr;};
        inline string getNameZh() const { DARABONBA_PTR_GET_DEFAULT(nameZh_, "") };
        inline Isp& setNameZh(string nameZh) { DARABONBA_PTR_SET_VALUE(nameZh_, nameZh) };


      protected:
        shared_ptr<string> nameEn_ {};
        shared_ptr<string> nameZh_ {};
      };

      virtual bool empty() const override { return this->isp_ == nullptr; };
      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline const vector<Isps::Isp> & getIsp() const { DARABONBA_PTR_GET_CONST(isp_, vector<Isps::Isp>) };
      inline vector<Isps::Isp> getIsp() { DARABONBA_PTR_GET(isp_, vector<Isps::Isp>) };
      inline Isps& setIsp(const vector<Isps::Isp> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
      inline Isps& setIsp(vector<Isps::Isp> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


    protected:
      shared_ptr<vector<Isps::Isp>> isp_ {};
    };

    virtual bool empty() const override { return this->isps_ == nullptr
        && this->regions_ == nullptr && this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const DescribeCdnRegionAndIspResponseBody::Isps & getIsps() const { DARABONBA_PTR_GET_CONST(isps_, DescribeCdnRegionAndIspResponseBody::Isps) };
    inline DescribeCdnRegionAndIspResponseBody::Isps getIsps() { DARABONBA_PTR_GET(isps_, DescribeCdnRegionAndIspResponseBody::Isps) };
    inline DescribeCdnRegionAndIspResponseBody& setIsps(const DescribeCdnRegionAndIspResponseBody::Isps & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeCdnRegionAndIspResponseBody& setIsps(DescribeCdnRegionAndIspResponseBody::Isps && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeCdnRegionAndIspResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeCdnRegionAndIspResponseBody::Regions) };
    inline DescribeCdnRegionAndIspResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeCdnRegionAndIspResponseBody::Regions) };
    inline DescribeCdnRegionAndIspResponseBody& setRegions(const DescribeCdnRegionAndIspResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeCdnRegionAndIspResponseBody& setRegions(DescribeCdnRegionAndIspResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnRegionAndIspResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCdnRegionAndIspResponseBody::Isps> isps_ {};
    shared_ptr<DescribeCdnRegionAndIspResponseBody::Regions> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
