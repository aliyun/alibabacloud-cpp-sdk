// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTWATERMARKLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTWATERMARKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_TO_JSON(WaterMark, waterMark_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_FROM_JSON(WaterMark, waterMark_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList(SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->waterMark_ == nullptr; };
    // waterMark Field Functions 
    bool hasWaterMark() const { return this->waterMark_ != nullptr;};
    void deleteWaterMark() { this->waterMark_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark> & waterMark() const { DARABONBA_PTR_GET_CONST(waterMark_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark> waterMark() { DARABONBA_PTR_GET(waterMark_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& setWaterMark(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark> & waterMark) { DARABONBA_PTR_SET_VALUE(waterMark_, waterMark) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList& setWaterMark(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark> && waterMark) { DARABONBA_PTR_SET_RVALUE(waterMark_, waterMark) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkListWaterMark>> waterMark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
