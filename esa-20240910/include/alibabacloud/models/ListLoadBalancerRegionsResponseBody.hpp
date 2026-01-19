// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODY_HPP_
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
  class ListLoadBalancerRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListLoadBalancerRegionsResponseBody() = default ;
    ListLoadBalancerRegionsResponseBody(const ListLoadBalancerRegionsResponseBody &) = default ;
    ListLoadBalancerRegionsResponseBody(ListLoadBalancerRegionsResponseBody &&) = default ;
    ListLoadBalancerRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerRegionsResponseBody() = default ;
    ListLoadBalancerRegionsResponseBody& operator=(const ListLoadBalancerRegionsResponseBody &) = default ;
    ListLoadBalancerRegionsResponseBody& operator=(ListLoadBalancerRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(RegionCnName, regionCnName_);
        DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_TO_JSON(RegionEnName, regionEnName_);
        DARABONBA_PTR_TO_JSON(SubRegions, subRegions_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionCnName, regionCnName_);
        DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_FROM_JSON(RegionEnName, regionEnName_);
        DARABONBA_PTR_FROM_JSON(SubRegions, subRegions_);
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
      class SubRegions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubRegions& obj) { 
          DARABONBA_PTR_TO_JSON(SubRegionCnName, subRegionCnName_);
          DARABONBA_PTR_TO_JSON(SubRegionCode, subRegionCode_);
          DARABONBA_PTR_TO_JSON(SubRegionEnName, subRegionEnName_);
        };
        friend void from_json(const Darabonba::Json& j, SubRegions& obj) { 
          DARABONBA_PTR_FROM_JSON(SubRegionCnName, subRegionCnName_);
          DARABONBA_PTR_FROM_JSON(SubRegionCode, subRegionCode_);
          DARABONBA_PTR_FROM_JSON(SubRegionEnName, subRegionEnName_);
        };
        SubRegions() = default ;
        SubRegions(const SubRegions &) = default ;
        SubRegions(SubRegions &&) = default ;
        SubRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubRegions() = default ;
        SubRegions& operator=(const SubRegions &) = default ;
        SubRegions& operator=(SubRegions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->subRegionCnName_ == nullptr
        && this->subRegionCode_ == nullptr && this->subRegionEnName_ == nullptr; };
        // subRegionCnName Field Functions 
        bool hasSubRegionCnName() const { return this->subRegionCnName_ != nullptr;};
        void deleteSubRegionCnName() { this->subRegionCnName_ = nullptr;};
        inline string getSubRegionCnName() const { DARABONBA_PTR_GET_DEFAULT(subRegionCnName_, "") };
        inline SubRegions& setSubRegionCnName(string subRegionCnName) { DARABONBA_PTR_SET_VALUE(subRegionCnName_, subRegionCnName) };


        // subRegionCode Field Functions 
        bool hasSubRegionCode() const { return this->subRegionCode_ != nullptr;};
        void deleteSubRegionCode() { this->subRegionCode_ = nullptr;};
        inline string getSubRegionCode() const { DARABONBA_PTR_GET_DEFAULT(subRegionCode_, "") };
        inline SubRegions& setSubRegionCode(string subRegionCode) { DARABONBA_PTR_SET_VALUE(subRegionCode_, subRegionCode) };


        // subRegionEnName Field Functions 
        bool hasSubRegionEnName() const { return this->subRegionEnName_ != nullptr;};
        void deleteSubRegionEnName() { this->subRegionEnName_ = nullptr;};
        inline string getSubRegionEnName() const { DARABONBA_PTR_GET_DEFAULT(subRegionEnName_, "") };
        inline SubRegions& setSubRegionEnName(string subRegionEnName) { DARABONBA_PTR_SET_VALUE(subRegionEnName_, subRegionEnName) };


      protected:
        // Secondary region Chinese full name
        shared_ptr<string> subRegionCnName_ {};
        // Secondary region code
        shared_ptr<string> subRegionCode_ {};
        // Secondary region English full name
        shared_ptr<string> subRegionEnName_ {};
      };

      virtual bool empty() const override { return this->regionCnName_ == nullptr
        && this->regionCode_ == nullptr && this->regionEnName_ == nullptr && this->subRegions_ == nullptr; };
      // regionCnName Field Functions 
      bool hasRegionCnName() const { return this->regionCnName_ != nullptr;};
      void deleteRegionCnName() { this->regionCnName_ = nullptr;};
      inline string getRegionCnName() const { DARABONBA_PTR_GET_DEFAULT(regionCnName_, "") };
      inline Regions& setRegionCnName(string regionCnName) { DARABONBA_PTR_SET_VALUE(regionCnName_, regionCnName) };


      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline Regions& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // regionEnName Field Functions 
      bool hasRegionEnName() const { return this->regionEnName_ != nullptr;};
      void deleteRegionEnName() { this->regionEnName_ = nullptr;};
      inline string getRegionEnName() const { DARABONBA_PTR_GET_DEFAULT(regionEnName_, "") };
      inline Regions& setRegionEnName(string regionEnName) { DARABONBA_PTR_SET_VALUE(regionEnName_, regionEnName) };


      // subRegions Field Functions 
      bool hasSubRegions() const { return this->subRegions_ != nullptr;};
      void deleteSubRegions() { this->subRegions_ = nullptr;};
      inline const vector<Regions::SubRegions> & getSubRegions() const { DARABONBA_PTR_GET_CONST(subRegions_, vector<Regions::SubRegions>) };
      inline vector<Regions::SubRegions> getSubRegions() { DARABONBA_PTR_GET(subRegions_, vector<Regions::SubRegions>) };
      inline Regions& setSubRegions(const vector<Regions::SubRegions> & subRegions) { DARABONBA_PTR_SET_VALUE(subRegions_, subRegions) };
      inline Regions& setSubRegions(vector<Regions::SubRegions> && subRegions) { DARABONBA_PTR_SET_RVALUE(subRegions_, subRegions) };


    protected:
      // Primary region Chinese full name
      shared_ptr<string> regionCnName_ {};
      // Primary region code
      shared_ptr<string> regionCode_ {};
      // Primary region English full name
      shared_ptr<string> regionEnName_ {};
      // List of secondary region information
      shared_ptr<vector<Regions::SubRegions>> subRegions_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regions_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLoadBalancerRegionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLoadBalancerRegionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListLoadBalancerRegionsResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListLoadBalancerRegionsResponseBody::Regions>) };
    inline vector<ListLoadBalancerRegionsResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<ListLoadBalancerRegionsResponseBody::Regions>) };
    inline ListLoadBalancerRegionsResponseBody& setRegions(const vector<ListLoadBalancerRegionsResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListLoadBalancerRegionsResponseBody& setRegions(vector<ListLoadBalancerRegionsResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancerRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancerRegionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListLoadBalancerRegionsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Page number
    shared_ptr<int32_t> pageNumber_ {};
    // Number of records per page
    shared_ptr<int32_t> pageSize_ {};
    // List of region information
    shared_ptr<vector<ListLoadBalancerRegionsResponseBody::Regions>> regions_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total number of records
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
