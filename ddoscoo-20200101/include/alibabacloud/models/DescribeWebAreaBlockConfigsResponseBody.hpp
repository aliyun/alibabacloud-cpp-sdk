// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAreaBlockConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAreaBlockConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AreaBlockConfigs, areaBlockConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAreaBlockConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaBlockConfigs, areaBlockConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebAreaBlockConfigsResponseBody() = default ;
    DescribeWebAreaBlockConfigsResponseBody(const DescribeWebAreaBlockConfigsResponseBody &) = default ;
    DescribeWebAreaBlockConfigsResponseBody(DescribeWebAreaBlockConfigsResponseBody &&) = default ;
    DescribeWebAreaBlockConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAreaBlockConfigsResponseBody() = default ;
    DescribeWebAreaBlockConfigsResponseBody& operator=(const DescribeWebAreaBlockConfigsResponseBody &) = default ;
    DescribeWebAreaBlockConfigsResponseBody& operator=(DescribeWebAreaBlockConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AreaBlockConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AreaBlockConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      };
      friend void from_json(const Darabonba::Json& j, AreaBlockConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      };
      AreaBlockConfigs() = default ;
      AreaBlockConfigs(const AreaBlockConfigs &) = default ;
      AreaBlockConfigs(AreaBlockConfigs &&) = default ;
      AreaBlockConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AreaBlockConfigs() = default ;
      AreaBlockConfigs& operator=(const AreaBlockConfigs &) = default ;
      AreaBlockConfigs& operator=(AreaBlockConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
          DARABONBA_PTR_TO_JSON(Block, block_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Block, block_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
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
        virtual bool empty() const override { return this->block_ == nullptr
        && this->region_ == nullptr; };
        // block Field Functions 
        bool hasBlock() const { return this->block_ != nullptr;};
        void deleteBlock() { this->block_ = nullptr;};
        inline int32_t getBlock() const { DARABONBA_PTR_GET_DEFAULT(block_, 0) };
        inline RegionList& setBlock(int32_t block) { DARABONBA_PTR_SET_VALUE(block_, block) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // Indicates whether the location is blocked. Valid values:
        // 
        // *   **0**: yes
        // *   **1**: no
        shared_ptr<int32_t> block_ {};
        // The name of the location.
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->regionList_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline AreaBlockConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // regionList Field Functions 
      bool hasRegionList() const { return this->regionList_ != nullptr;};
      void deleteRegionList() { this->regionList_ = nullptr;};
      inline const vector<AreaBlockConfigs::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<AreaBlockConfigs::RegionList>) };
      inline vector<AreaBlockConfigs::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<AreaBlockConfigs::RegionList>) };
      inline AreaBlockConfigs& setRegionList(const vector<AreaBlockConfigs::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
      inline AreaBlockConfigs& setRegionList(vector<AreaBlockConfigs::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The configuration of the blocked locations.
      shared_ptr<vector<AreaBlockConfigs::RegionList>> regionList_ {};
    };

    virtual bool empty() const override { return this->areaBlockConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // areaBlockConfigs Field Functions 
    bool hasAreaBlockConfigs() const { return this->areaBlockConfigs_ != nullptr;};
    void deleteAreaBlockConfigs() { this->areaBlockConfigs_ = nullptr;};
    inline const vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs> & getAreaBlockConfigs() const { DARABONBA_PTR_GET_CONST(areaBlockConfigs_, vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs>) };
    inline vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs> getAreaBlockConfigs() { DARABONBA_PTR_GET(areaBlockConfigs_, vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs>) };
    inline DescribeWebAreaBlockConfigsResponseBody& setAreaBlockConfigs(const vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs> & areaBlockConfigs) { DARABONBA_PTR_SET_VALUE(areaBlockConfigs_, areaBlockConfigs) };
    inline DescribeWebAreaBlockConfigsResponseBody& setAreaBlockConfigs(vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs> && areaBlockConfigs) { DARABONBA_PTR_SET_RVALUE(areaBlockConfigs_, areaBlockConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAreaBlockConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the Location Blacklist (Domain Names) policy.
    shared_ptr<vector<DescribeWebAreaBlockConfigsResponseBody::AreaBlockConfigs>> areaBlockConfigs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
