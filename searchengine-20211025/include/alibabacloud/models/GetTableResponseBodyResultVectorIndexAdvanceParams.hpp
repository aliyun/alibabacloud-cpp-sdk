// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTVECTORINDEXADVANCEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTVECTORINDEXADVANCEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResultVectorIndexAdvanceParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResultVectorIndexAdvanceParams& obj) { 
      DARABONBA_PTR_TO_JSON(buildIndexParams, buildIndexParams_);
      DARABONBA_PTR_TO_JSON(linearBuildThreshold, linearBuildThreshold_);
      DARABONBA_PTR_TO_JSON(minScanDocCnt, minScanDocCnt_);
      DARABONBA_PTR_TO_JSON(searchIndexParams, searchIndexParams_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResultVectorIndexAdvanceParams& obj) { 
      DARABONBA_PTR_FROM_JSON(buildIndexParams, buildIndexParams_);
      DARABONBA_PTR_FROM_JSON(linearBuildThreshold, linearBuildThreshold_);
      DARABONBA_PTR_FROM_JSON(minScanDocCnt, minScanDocCnt_);
      DARABONBA_PTR_FROM_JSON(searchIndexParams, searchIndexParams_);
    };
    GetTableResponseBodyResultVectorIndexAdvanceParams() = default ;
    GetTableResponseBodyResultVectorIndexAdvanceParams(const GetTableResponseBodyResultVectorIndexAdvanceParams &) = default ;
    GetTableResponseBodyResultVectorIndexAdvanceParams(GetTableResponseBodyResultVectorIndexAdvanceParams &&) = default ;
    GetTableResponseBodyResultVectorIndexAdvanceParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResultVectorIndexAdvanceParams() = default ;
    GetTableResponseBodyResultVectorIndexAdvanceParams& operator=(const GetTableResponseBodyResultVectorIndexAdvanceParams &) = default ;
    GetTableResponseBodyResultVectorIndexAdvanceParams& operator=(GetTableResponseBodyResultVectorIndexAdvanceParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildIndexParams_ != nullptr
        && this->linearBuildThreshold_ != nullptr && this->minScanDocCnt_ != nullptr && this->searchIndexParams_ != nullptr; };
    // buildIndexParams Field Functions 
    bool hasBuildIndexParams() const { return this->buildIndexParams_ != nullptr;};
    void deleteBuildIndexParams() { this->buildIndexParams_ = nullptr;};
    inline string buildIndexParams() const { DARABONBA_PTR_GET_DEFAULT(buildIndexParams_, "") };
    inline GetTableResponseBodyResultVectorIndexAdvanceParams& setBuildIndexParams(string buildIndexParams) { DARABONBA_PTR_SET_VALUE(buildIndexParams_, buildIndexParams) };


    // linearBuildThreshold Field Functions 
    bool hasLinearBuildThreshold() const { return this->linearBuildThreshold_ != nullptr;};
    void deleteLinearBuildThreshold() { this->linearBuildThreshold_ = nullptr;};
    inline string linearBuildThreshold() const { DARABONBA_PTR_GET_DEFAULT(linearBuildThreshold_, "") };
    inline GetTableResponseBodyResultVectorIndexAdvanceParams& setLinearBuildThreshold(string linearBuildThreshold) { DARABONBA_PTR_SET_VALUE(linearBuildThreshold_, linearBuildThreshold) };


    // minScanDocCnt Field Functions 
    bool hasMinScanDocCnt() const { return this->minScanDocCnt_ != nullptr;};
    void deleteMinScanDocCnt() { this->minScanDocCnt_ = nullptr;};
    inline string minScanDocCnt() const { DARABONBA_PTR_GET_DEFAULT(minScanDocCnt_, "") };
    inline GetTableResponseBodyResultVectorIndexAdvanceParams& setMinScanDocCnt(string minScanDocCnt) { DARABONBA_PTR_SET_VALUE(minScanDocCnt_, minScanDocCnt) };


    // searchIndexParams Field Functions 
    bool hasSearchIndexParams() const { return this->searchIndexParams_ != nullptr;};
    void deleteSearchIndexParams() { this->searchIndexParams_ = nullptr;};
    inline string searchIndexParams() const { DARABONBA_PTR_GET_DEFAULT(searchIndexParams_, "") };
    inline GetTableResponseBodyResultVectorIndexAdvanceParams& setSearchIndexParams(string searchIndexParams) { DARABONBA_PTR_SET_VALUE(searchIndexParams_, searchIndexParams) };


  protected:
    // The index building parameters.
    std::shared_ptr<string> buildIndexParams_ = nullptr;
    // The threshold for linear building.
    std::shared_ptr<string> linearBuildThreshold_ = nullptr;
    // The minimum number of retrieved candidate sets.
    std::shared_ptr<string> minScanDocCnt_ = nullptr;
    // The index retrieval parameters.
    std::shared_ptr<string> searchIndexParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
