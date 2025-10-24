// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTOPENINGLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTOPENINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& obj) { 
      DARABONBA_PTR_TO_JSON(Opening, opening_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& obj) { 
      DARABONBA_PTR_FROM_JSON(Opening, opening_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList(SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opening_ == nullptr; };
    // opening Field Functions 
    bool hasOpening() const { return this->opening_ != nullptr;};
    void deleteOpening() { this->opening_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening> & opening() const { DARABONBA_PTR_GET_CONST(opening_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening> opening() { DARABONBA_PTR_GET(opening_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& setOpening(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening> & opening) { DARABONBA_PTR_SET_VALUE(opening_, opening) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList& setOpening(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening> && opening) { DARABONBA_PTR_SET_RVALUE(opening_, opening) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningListOpening>> opening_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
