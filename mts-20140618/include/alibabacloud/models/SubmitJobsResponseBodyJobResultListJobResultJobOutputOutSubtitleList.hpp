// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTOUTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTOUTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(OutSubtitle, outSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(OutSubtitle, outSubtitle_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList(SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outSubtitle_ == nullptr; };
    // outSubtitle Field Functions 
    bool hasOutSubtitle() const { return this->outSubtitle_ != nullptr;};
    void deleteOutSubtitle() { this->outSubtitle_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle> & outSubtitle() const { DARABONBA_PTR_GET_CONST(outSubtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle> outSubtitle() { DARABONBA_PTR_GET(outSubtitle_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& setOutSubtitle(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle> & outSubtitle) { DARABONBA_PTR_SET_VALUE(outSubtitle_, outSubtitle) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList& setOutSubtitle(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle> && outSubtitle) { DARABONBA_PTR_SET_RVALUE(outSubtitle_, outSubtitle) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleListOutSubtitle>> outSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
