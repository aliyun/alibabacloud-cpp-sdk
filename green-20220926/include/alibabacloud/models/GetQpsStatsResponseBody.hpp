// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQPSSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQPSSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ChartsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetQpsStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQpsStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Charts, charts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQpsStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Charts, charts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQpsStatsResponseBody() = default ;
    GetQpsStatsResponseBody(const GetQpsStatsResponseBody &) = default ;
    GetQpsStatsResponseBody(GetQpsStatsResponseBody &&) = default ;
    GetQpsStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQpsStatsResponseBody() = default ;
    GetQpsStatsResponseBody& operator=(const GetQpsStatsResponseBody &) = default ;
    GetQpsStatsResponseBody& operator=(GetQpsStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->charts_ == nullptr
        && this->requestId_ == nullptr; };
    // charts Field Functions 
    bool hasCharts() const { return this->charts_ != nullptr;};
    void deleteCharts() { this->charts_ = nullptr;};
    inline const map<string, ChartsValue> & getCharts() const { DARABONBA_PTR_GET_CONST(charts_, map<string, ChartsValue>) };
    inline map<string, ChartsValue> getCharts() { DARABONBA_PTR_GET(charts_, map<string, ChartsValue>) };
    inline GetQpsStatsResponseBody& setCharts(const map<string, ChartsValue> & charts) { DARABONBA_PTR_SET_VALUE(charts_, charts) };
    inline GetQpsStatsResponseBody& setCharts(map<string, ChartsValue> && charts) { DARABONBA_PTR_SET_RVALUE(charts_, charts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQpsStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The chart configurations.
    shared_ptr<map<string, ChartsValue>> charts_ {};
    // The ID assigned by the backend to uniquely identify a request. It can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
