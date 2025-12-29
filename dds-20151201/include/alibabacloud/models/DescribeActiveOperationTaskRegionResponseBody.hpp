// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeActiveOperationTaskRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTaskRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTaskRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActiveOperationTaskRegionResponseBody() = default ;
    DescribeActiveOperationTaskRegionResponseBody(const DescribeActiveOperationTaskRegionResponseBody &) = default ;
    DescribeActiveOperationTaskRegionResponseBody(DescribeActiveOperationTaskRegionResponseBody &&) = default ;
    DescribeActiveOperationTaskRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTaskRegionResponseBody() = default ;
    DescribeActiveOperationTaskRegionResponseBody& operator=(const DescribeActiveOperationTaskRegionResponseBody &) = default ;
    DescribeActiveOperationTaskRegionResponseBody& operator=(DescribeActiveOperationTaskRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->region_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline RegionList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline RegionList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The total number of tasks.
      shared_ptr<int32_t> count_ {};
      // The region ID of the instance.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->regionList_ == nullptr
        && this->requestId_ == nullptr; };
    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<DescribeActiveOperationTaskRegionResponseBody::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<DescribeActiveOperationTaskRegionResponseBody::RegionList>) };
    inline vector<DescribeActiveOperationTaskRegionResponseBody::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<DescribeActiveOperationTaskRegionResponseBody::RegionList>) };
    inline DescribeActiveOperationTaskRegionResponseBody& setRegionList(const vector<DescribeActiveOperationTaskRegionResponseBody::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline DescribeActiveOperationTaskRegionResponseBody& setRegionList(vector<DescribeActiveOperationTaskRegionResponseBody::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationTaskRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The region ID.
    shared_ptr<vector<DescribeActiveOperationTaskRegionResponseBody::RegionList>> regionList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
