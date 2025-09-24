// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSEROMSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSEROMSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryUserOmsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserOmsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(OmsData, omsData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserOmsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(OmsData, omsData_);
    };
    QueryUserOmsDataResponseBodyData() = default ;
    QueryUserOmsDataResponseBodyData(const QueryUserOmsDataResponseBodyData &) = default ;
    QueryUserOmsDataResponseBodyData(QueryUserOmsDataResponseBodyData &&) = default ;
    QueryUserOmsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserOmsDataResponseBodyData() = default ;
    QueryUserOmsDataResponseBodyData& operator=(const QueryUserOmsDataResponseBodyData &) = default ;
    QueryUserOmsDataResponseBodyData& operator=(QueryUserOmsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->marker_ != nullptr && this->omsData_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline QueryUserOmsDataResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline QueryUserOmsDataResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // omsData Field Functions 
    bool hasOmsData() const { return this->omsData_ != nullptr;};
    void deleteOmsData() { this->omsData_ = nullptr;};
    inline const vector<Darabonba::Json> & omsData() const { DARABONBA_PTR_GET_CONST(omsData_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> omsData() { DARABONBA_PTR_GET(omsData_, vector<Darabonba::Json>) };
    inline QueryUserOmsDataResponseBodyData& setOmsData(const vector<Darabonba::Json> & omsData) { DARABONBA_PTR_SET_VALUE(omsData_, omsData) };
    inline QueryUserOmsDataResponseBodyData& setOmsData(vector<Darabonba::Json> && omsData) { DARABONBA_PTR_SET_RVALUE(omsData_, omsData) };


  protected:
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // Indicates that the returned usage data starts from the next page. If no value is returned for this parameter or this parameter is not returned, no data can be queried.
    std::shared_ptr<string> marker_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> omsData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
