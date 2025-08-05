// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTrackListResponseBodyDataStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(stat, stat_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(stat, stat_);
    };
    GetTrackListResponseBodyData() = default ;
    GetTrackListResponseBodyData(const GetTrackListResponseBodyData &) = default ;
    GetTrackListResponseBodyData(GetTrackListResponseBodyData &&) = default ;
    GetTrackListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListResponseBodyData() = default ;
    GetTrackListResponseBodyData& operator=(const GetTrackListResponseBodyData &) = default ;
    GetTrackListResponseBodyData& operator=(GetTrackListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stat_ != nullptr; };
    // stat Field Functions 
    bool hasStat() const { return this->stat_ != nullptr;};
    void deleteStat() { this->stat_ = nullptr;};
    inline const vector<Models::GetTrackListResponseBodyDataStat> & stat() const { DARABONBA_PTR_GET_CONST(stat_, vector<Models::GetTrackListResponseBodyDataStat>) };
    inline vector<Models::GetTrackListResponseBodyDataStat> stat() { DARABONBA_PTR_GET(stat_, vector<Models::GetTrackListResponseBodyDataStat>) };
    inline GetTrackListResponseBodyData& setStat(const vector<Models::GetTrackListResponseBodyDataStat> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
    inline GetTrackListResponseBodyData& setStat(vector<Models::GetTrackListResponseBodyDataStat> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


  protected:
    std::shared_ptr<vector<Models::GetTrackListResponseBodyDataStat>> stat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
