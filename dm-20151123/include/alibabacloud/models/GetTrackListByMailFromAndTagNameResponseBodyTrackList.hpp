// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODYTRACKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODYTRACKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTrackListByMailFromAndTagNameResponseBodyTrackListStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListByMailFromAndTagNameResponseBodyTrackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListByMailFromAndTagNameResponseBodyTrackList& obj) { 
      DARABONBA_PTR_TO_JSON(Stat, stat_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListByMailFromAndTagNameResponseBodyTrackList& obj) { 
      DARABONBA_PTR_FROM_JSON(Stat, stat_);
    };
    GetTrackListByMailFromAndTagNameResponseBodyTrackList() = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackList(const GetTrackListByMailFromAndTagNameResponseBodyTrackList &) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackList(GetTrackListByMailFromAndTagNameResponseBodyTrackList &&) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListByMailFromAndTagNameResponseBodyTrackList() = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackList& operator=(const GetTrackListByMailFromAndTagNameResponseBodyTrackList &) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackList& operator=(GetTrackListByMailFromAndTagNameResponseBodyTrackList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stat_ == nullptr; };
    // stat Field Functions 
    bool hasStat() const { return this->stat_ != nullptr;};
    void deleteStat() { this->stat_ = nullptr;};
    inline const vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat> & stat() const { DARABONBA_PTR_GET_CONST(stat_, vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat>) };
    inline vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat> stat() { DARABONBA_PTR_GET(stat_, vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat>) };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackList& setStat(const vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackList& setStat(vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


  protected:
    std::shared_ptr<vector<Models::GetTrackListByMailFromAndTagNameResponseBodyTrackListStat>> stat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
