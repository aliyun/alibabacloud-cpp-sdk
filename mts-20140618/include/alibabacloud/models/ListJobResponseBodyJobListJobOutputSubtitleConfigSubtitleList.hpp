// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
    };
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList(const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList(ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList &&) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& operator=(const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& operator=(ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitle_ == nullptr; };
    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> subtitle() { DARABONBA_PTR_GET(subtitle_, vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& setSubtitle(const vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList& setSubtitle(vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle> && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle>> subtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
