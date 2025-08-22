// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTraceAppByNameRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTraceAppByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TraceAppName, traceAppName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TraceAppName, traceAppName_);
    };
    SearchTraceAppByNameRequest() = default ;
    SearchTraceAppByNameRequest(const SearchTraceAppByNameRequest &) = default ;
    SearchTraceAppByNameRequest(SearchTraceAppByNameRequest &&) = default ;
    SearchTraceAppByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByNameRequest() = default ;
    SearchTraceAppByNameRequest& operator=(const SearchTraceAppByNameRequest &) = default ;
    SearchTraceAppByNameRequest& operator=(SearchTraceAppByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->tags_ != nullptr && this->traceAppName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTraceAppByNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SearchTraceAppByNameRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SearchTraceAppByNameRequestTags>) };
    inline vector<SearchTraceAppByNameRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<SearchTraceAppByNameRequestTags>) };
    inline SearchTraceAppByNameRequest& setTags(const vector<SearchTraceAppByNameRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchTraceAppByNameRequest& setTags(vector<SearchTraceAppByNameRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // traceAppName Field Functions 
    bool hasTraceAppName() const { return this->traceAppName_ != nullptr;};
    void deleteTraceAppName() { this->traceAppName_ = nullptr;};
    inline string traceAppName() const { DARABONBA_PTR_GET_DEFAULT(traceAppName_, "") };
    inline SearchTraceAppByNameRequest& setTraceAppName(string traceAppName) { DARABONBA_PTR_SET_VALUE(traceAppName_, traceAppName) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<SearchTraceAppByNameRequestTags>> tags_ = nullptr;
    // The name of the application.
    // 
    // > If you do not specify this parameter, all application monitoring tasks in the specified region are queried.
    std::shared_ptr<string> traceAppName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
