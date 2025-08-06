// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayRegionStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayRegionStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DailyPlayRegionStatisList, dailyPlayRegionStatisList_);
      DARABONBA_PTR_TO_JSON(EmptyDates, emptyDates_);
      DARABONBA_PTR_TO_JSON(FailDates, failDates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayRegionStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyPlayRegionStatisList, dailyPlayRegionStatisList_);
      DARABONBA_PTR_FROM_JSON(EmptyDates, emptyDates_);
      DARABONBA_PTR_FROM_JSON(FailDates, failDates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDailyPlayRegionStatisResponseBody() = default ;
    GetDailyPlayRegionStatisResponseBody(const GetDailyPlayRegionStatisResponseBody &) = default ;
    GetDailyPlayRegionStatisResponseBody(GetDailyPlayRegionStatisResponseBody &&) = default ;
    GetDailyPlayRegionStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayRegionStatisResponseBody() = default ;
    GetDailyPlayRegionStatisResponseBody& operator=(const GetDailyPlayRegionStatisResponseBody &) = default ;
    GetDailyPlayRegionStatisResponseBody& operator=(GetDailyPlayRegionStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dailyPlayRegionStatisList_ != nullptr
        && this->emptyDates_ != nullptr && this->failDates_ != nullptr && this->requestId_ != nullptr; };
    // dailyPlayRegionStatisList Field Functions 
    bool hasDailyPlayRegionStatisList() const { return this->dailyPlayRegionStatisList_ != nullptr;};
    void deleteDailyPlayRegionStatisList() { this->dailyPlayRegionStatisList_ = nullptr;};
    inline const vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList> & dailyPlayRegionStatisList() const { DARABONBA_PTR_GET_CONST(dailyPlayRegionStatisList_, vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList>) };
    inline vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList> dailyPlayRegionStatisList() { DARABONBA_PTR_GET(dailyPlayRegionStatisList_, vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList>) };
    inline GetDailyPlayRegionStatisResponseBody& setDailyPlayRegionStatisList(const vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList> & dailyPlayRegionStatisList) { DARABONBA_PTR_SET_VALUE(dailyPlayRegionStatisList_, dailyPlayRegionStatisList) };
    inline GetDailyPlayRegionStatisResponseBody& setDailyPlayRegionStatisList(vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList> && dailyPlayRegionStatisList) { DARABONBA_PTR_SET_RVALUE(dailyPlayRegionStatisList_, dailyPlayRegionStatisList) };


    // emptyDates Field Functions 
    bool hasEmptyDates() const { return this->emptyDates_ != nullptr;};
    void deleteEmptyDates() { this->emptyDates_ = nullptr;};
    inline const vector<string> & emptyDates() const { DARABONBA_PTR_GET_CONST(emptyDates_, vector<string>) };
    inline vector<string> emptyDates() { DARABONBA_PTR_GET(emptyDates_, vector<string>) };
    inline GetDailyPlayRegionStatisResponseBody& setEmptyDates(const vector<string> & emptyDates) { DARABONBA_PTR_SET_VALUE(emptyDates_, emptyDates) };
    inline GetDailyPlayRegionStatisResponseBody& setEmptyDates(vector<string> && emptyDates) { DARABONBA_PTR_SET_RVALUE(emptyDates_, emptyDates) };


    // failDates Field Functions 
    bool hasFailDates() const { return this->failDates_ != nullptr;};
    void deleteFailDates() { this->failDates_ = nullptr;};
    inline const vector<string> & failDates() const { DARABONBA_PTR_GET_CONST(failDates_, vector<string>) };
    inline vector<string> failDates() { DARABONBA_PTR_GET(failDates_, vector<string>) };
    inline GetDailyPlayRegionStatisResponseBody& setFailDates(const vector<string> & failDates) { DARABONBA_PTR_SET_VALUE(failDates_, failDates) };
    inline GetDailyPlayRegionStatisResponseBody& setFailDates(vector<string> && failDates) { DARABONBA_PTR_SET_RVALUE(failDates_, failDates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDailyPlayRegionStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList>> dailyPlayRegionStatisList_ = nullptr;
    std::shared_ptr<vector<string>> emptyDates_ = nullptr;
    std::shared_ptr<vector<string>> failDates_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
