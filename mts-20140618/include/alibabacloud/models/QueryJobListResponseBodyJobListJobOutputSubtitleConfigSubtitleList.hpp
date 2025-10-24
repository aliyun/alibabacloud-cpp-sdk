// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
    };
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList(QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& operator=(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& operator=(QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitle_ == nullptr; };
    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> subtitle() { DARABONBA_PTR_GET(subtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& setSubtitle(const vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList& setSubtitle(vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>> subtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
