// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIGSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitle_ == nullptr; };
    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle> subtitle() { DARABONBA_PTR_GET(subtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& setSubtitle(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle> & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList& setSubtitle(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle> && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleListSubtitle>> subtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
