// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitle, extSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitle, extSubtitle_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitle_ == nullptr; };
    // extSubtitle Field Functions 
    bool hasExtSubtitle() const { return this->extSubtitle_ != nullptr;};
    void deleteExtSubtitle() { this->extSubtitle_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle() const { DARABONBA_PTR_GET_CONST(extSubtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle> extSubtitle() { DARABONBA_PTR_GET(extSubtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle) { DARABONBA_PTR_SET_VALUE(extSubtitle_, extSubtitle) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle> && extSubtitle) { DARABONBA_PTR_SET_RVALUE(extSubtitle_, extSubtitle) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleListExtSubtitle>> extSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
