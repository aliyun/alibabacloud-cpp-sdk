// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionModels, regionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionModels, regionModels_);
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
    class RegionModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionModels& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      };
      friend void from_json(const Darabonba::Json& j, RegionModels& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      };
      RegionModels() = default ;
      RegionModels(const RegionModels &) = default ;
      RegionModels(RegionModels &&) = default ;
      RegionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionModels() = default ;
      RegionModels& operator=(const RegionModels &) = default ;
      RegionModels& operator=(RegionModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline RegionModels& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The region name.
      shared_ptr<string> regionName_ {};
    };

    virtual bool empty() const override { return this->regionModels_ == nullptr
        && this->requestId_ == nullptr; };
    // regionModels Field Functions 
    bool hasRegionModels() const { return this->regionModels_ != nullptr;};
    void deleteRegionModels() { this->regionModels_ = nullptr;};
    inline const vector<DescribeRegionsResponseBody::RegionModels> & getRegionModels() const { DARABONBA_PTR_GET_CONST(regionModels_, vector<DescribeRegionsResponseBody::RegionModels>) };
    inline vector<DescribeRegionsResponseBody::RegionModels> getRegionModels() { DARABONBA_PTR_GET(regionModels_, vector<DescribeRegionsResponseBody::RegionModels>) };
    inline DescribeRegionsResponseBody& setRegionModels(const vector<DescribeRegionsResponseBody::RegionModels> & regionModels) { DARABONBA_PTR_SET_VALUE(regionModels_, regionModels) };
    inline DescribeRegionsResponseBody& setRegionModels(vector<DescribeRegionsResponseBody::RegionModels> && regionModels) { DARABONBA_PTR_SET_RVALUE(regionModels_, regionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Available regions.
    shared_ptr<vector<DescribeRegionsResponseBody::RegionModels>> regionModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
