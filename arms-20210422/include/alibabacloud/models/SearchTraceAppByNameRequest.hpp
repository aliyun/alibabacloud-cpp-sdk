// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchTraceAppByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TraceAppName, traceAppName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->traceAppName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTraceAppByNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // traceAppName Field Functions 
    bool hasTraceAppName() const { return this->traceAppName_ != nullptr;};
    void deleteTraceAppName() { this->traceAppName_ = nullptr;};
    inline string getTraceAppName() const { DARABONBA_PTR_GET_DEFAULT(traceAppName_, "") };
    inline SearchTraceAppByNameRequest& setTraceAppName(string traceAppName) { DARABONBA_PTR_SET_VALUE(traceAppName_, traceAppName) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> traceAppName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
