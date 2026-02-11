// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetMultipleTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TraceIDs, traceIDs_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TraceIDs, traceIDs_);
    };
    GetMultipleTraceRequest() = default ;
    GetMultipleTraceRequest(const GetMultipleTraceRequest &) = default ;
    GetMultipleTraceRequest(GetMultipleTraceRequest &&) = default ;
    GetMultipleTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceRequest() = default ;
    GetMultipleTraceRequest& operator=(const GetMultipleTraceRequest &) = default ;
    GetMultipleTraceRequest& operator=(GetMultipleTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->traceIDs_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMultipleTraceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // traceIDs Field Functions 
    bool hasTraceIDs() const { return this->traceIDs_ != nullptr;};
    void deleteTraceIDs() { this->traceIDs_ = nullptr;};
    inline const vector<string> & getTraceIDs() const { DARABONBA_PTR_GET_CONST(traceIDs_, vector<string>) };
    inline vector<string> getTraceIDs() { DARABONBA_PTR_GET(traceIDs_, vector<string>) };
    inline GetMultipleTraceRequest& setTraceIDs(const vector<string> & traceIDs) { DARABONBA_PTR_SET_VALUE(traceIDs_, traceIDs) };
    inline GetMultipleTraceRequest& setTraceIDs(vector<string> && traceIDs) { DARABONBA_PTR_SET_RVALUE(traceIDs_, traceIDs) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<string>> traceIDs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
