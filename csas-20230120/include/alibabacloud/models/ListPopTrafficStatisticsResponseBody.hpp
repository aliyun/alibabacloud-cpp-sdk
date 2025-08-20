// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPopTrafficStatisticsResponseBodyTrafficData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPopTrafficStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPopTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficData, trafficData_);
    };
    friend void from_json(const Darabonba::Json& j, ListPopTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficData, trafficData_);
    };
    ListPopTrafficStatisticsResponseBody() = default ;
    ListPopTrafficStatisticsResponseBody(const ListPopTrafficStatisticsResponseBody &) = default ;
    ListPopTrafficStatisticsResponseBody(ListPopTrafficStatisticsResponseBody &&) = default ;
    ListPopTrafficStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPopTrafficStatisticsResponseBody() = default ;
    ListPopTrafficStatisticsResponseBody& operator=(const ListPopTrafficStatisticsResponseBody &) = default ;
    ListPopTrafficStatisticsResponseBody& operator=(ListPopTrafficStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPopTrafficStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficData Field Functions 
    bool hasTrafficData() const { return this->trafficData_ != nullptr;};
    void deleteTrafficData() { this->trafficData_ = nullptr;};
    inline const vector<ListPopTrafficStatisticsResponseBodyTrafficData> & trafficData() const { DARABONBA_PTR_GET_CONST(trafficData_, vector<ListPopTrafficStatisticsResponseBodyTrafficData>) };
    inline vector<ListPopTrafficStatisticsResponseBodyTrafficData> trafficData() { DARABONBA_PTR_GET(trafficData_, vector<ListPopTrafficStatisticsResponseBodyTrafficData>) };
    inline ListPopTrafficStatisticsResponseBody& setTrafficData(const vector<ListPopTrafficStatisticsResponseBodyTrafficData> & trafficData) { DARABONBA_PTR_SET_VALUE(trafficData_, trafficData) };
    inline ListPopTrafficStatisticsResponseBody& setTrafficData(vector<ListPopTrafficStatisticsResponseBodyTrafficData> && trafficData) { DARABONBA_PTR_SET_RVALUE(trafficData_, trafficData) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListPopTrafficStatisticsResponseBodyTrafficData>> trafficData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
