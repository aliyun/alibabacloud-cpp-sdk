// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDSEARCHINPUT_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDSEARCHINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RequestContents.hpp>
#include <alibabacloud/models/LocationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedSearchInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedSearchInput& obj) { 
      DARABONBA_ANY_TO_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(engineType, engineType_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(locationInfo, locationInfo_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedSearchInput& obj) { 
      DARABONBA_ANY_FROM_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(engineType, engineType_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(locationInfo, locationInfo_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    UnifiedSearchInput() = default ;
    UnifiedSearchInput(const UnifiedSearchInput &) = default ;
    UnifiedSearchInput(UnifiedSearchInput &&) = default ;
    UnifiedSearchInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedSearchInput() = default ;
    UnifiedSearchInput& operator=(const UnifiedSearchInput &) = default ;
    UnifiedSearchInput& operator=(UnifiedSearchInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedParams_ == nullptr
        && this->category_ == nullptr && this->contents_ == nullptr && this->engineType_ == nullptr && this->location_ == nullptr && this->locationInfo_ == nullptr
        && this->query_ == nullptr && this->timeRange_ == nullptr; };
    // advancedParams Field Functions 
    bool hasAdvancedParams() const { return this->advancedParams_ != nullptr;};
    void deleteAdvancedParams() { this->advancedParams_ = nullptr;};
    inline     const Darabonba::Json & getAdvancedParams() const { DARABONBA_GET(advancedParams_) };
    Darabonba::Json & getAdvancedParams() { DARABONBA_GET(advancedParams_) };
    inline UnifiedSearchInput& setAdvancedParams(const Darabonba::Json & advancedParams) { DARABONBA_SET_VALUE(advancedParams_, advancedParams) };
    inline UnifiedSearchInput& setAdvancedParams(Darabonba::Json && advancedParams) { DARABONBA_SET_RVALUE(advancedParams_, advancedParams) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline UnifiedSearchInput& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const RequestContents & getContents() const { DARABONBA_PTR_GET_CONST(contents_, RequestContents) };
    inline RequestContents getContents() { DARABONBA_PTR_GET(contents_, RequestContents) };
    inline UnifiedSearchInput& setContents(const RequestContents & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline UnifiedSearchInput& setContents(RequestContents && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline UnifiedSearchInput& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline UnifiedSearchInput& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // locationInfo Field Functions 
    bool hasLocationInfo() const { return this->locationInfo_ != nullptr;};
    void deleteLocationInfo() { this->locationInfo_ = nullptr;};
    inline const LocationInfo & getLocationInfo() const { DARABONBA_PTR_GET_CONST(locationInfo_, LocationInfo) };
    inline LocationInfo getLocationInfo() { DARABONBA_PTR_GET(locationInfo_, LocationInfo) };
    inline UnifiedSearchInput& setLocationInfo(const LocationInfo & locationInfo) { DARABONBA_PTR_SET_VALUE(locationInfo_, locationInfo) };
    inline UnifiedSearchInput& setLocationInfo(LocationInfo && locationInfo) { DARABONBA_PTR_SET_RVALUE(locationInfo_, locationInfo) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UnifiedSearchInput& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline UnifiedSearchInput& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    Darabonba::Json advancedParams_ {};
    shared_ptr<string> category_ {};
    shared_ptr<RequestContents> contents_ {};
    shared_ptr<string> engineType_ {};
    shared_ptr<string> location_ {};
    shared_ptr<LocationInfo> locationInfo_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
