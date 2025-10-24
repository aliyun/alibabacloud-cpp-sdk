// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBucketsResponseBodyDataOssObjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBucketsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBucketsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(ExtranetEndpoint, extranetEndpoint_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OssObjectList, ossObjectList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBucketsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(ExtranetEndpoint, extranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OssObjectList, ossObjectList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeBucketsResponseBodyData() = default ;
    DescribeBucketsResponseBodyData(const DescribeBucketsResponseBodyData &) = default ;
    DescribeBucketsResponseBodyData(DescribeBucketsResponseBodyData &&) = default ;
    DescribeBucketsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBucketsResponseBodyData() = default ;
    DescribeBucketsResponseBodyData& operator=(const DescribeBucketsResponseBodyData &) = default ;
    DescribeBucketsResponseBodyData& operator=(DescribeBucketsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->extranetEndpoint_ == nullptr && return this->gmtCreated_ == nullptr && return this->intranetEndpoint_ == nullptr && return this->location_ == nullptr && return this->ossObjectList_ == nullptr
        && return this->regionId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeBucketsResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // extranetEndpoint Field Functions 
    bool hasExtranetEndpoint() const { return this->extranetEndpoint_ != nullptr;};
    void deleteExtranetEndpoint() { this->extranetEndpoint_ = nullptr;};
    inline string extranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(extranetEndpoint_, "") };
    inline DescribeBucketsResponseBodyData& setExtranetEndpoint(string extranetEndpoint) { DARABONBA_PTR_SET_VALUE(extranetEndpoint_, extranetEndpoint) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeBucketsResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline DescribeBucketsResponseBodyData& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeBucketsResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ossObjectList Field Functions 
    bool hasOssObjectList() const { return this->ossObjectList_ != nullptr;};
    void deleteOssObjectList() { this->ossObjectList_ = nullptr;};
    inline const vector<Models::DescribeBucketsResponseBodyDataOssObjectList> & ossObjectList() const { DARABONBA_PTR_GET_CONST(ossObjectList_, vector<Models::DescribeBucketsResponseBodyDataOssObjectList>) };
    inline vector<Models::DescribeBucketsResponseBodyDataOssObjectList> ossObjectList() { DARABONBA_PTR_GET(ossObjectList_, vector<Models::DescribeBucketsResponseBodyDataOssObjectList>) };
    inline DescribeBucketsResponseBodyData& setOssObjectList(const vector<Models::DescribeBucketsResponseBodyDataOssObjectList> & ossObjectList) { DARABONBA_PTR_SET_VALUE(ossObjectList_, ossObjectList) };
    inline DescribeBucketsResponseBodyData& setOssObjectList(vector<Models::DescribeBucketsResponseBodyDataOssObjectList> && ossObjectList) { DARABONBA_PTR_SET_RVALUE(ossObjectList_, ossObjectList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBucketsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> extranetEndpoint_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<vector<Models::DescribeBucketsResponseBodyDataOssObjectList>> ossObjectList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
