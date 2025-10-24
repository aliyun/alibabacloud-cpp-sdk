// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTSUBTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_TO_JSON(SubtitleList, subtitleList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_FROM_JSON(SubtitleList, subtitleList_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitleList_ == nullptr
        && return this->subtitleList_ == nullptr; };
    // extSubtitleList Field Functions 
    bool hasExtSubtitleList() const { return this->extSubtitleList_ != nullptr;};
    void deleteExtSubtitleList() { this->extSubtitleList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList & extSubtitleList() const { DARABONBA_PTR_GET_CONST(extSubtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList extSubtitleList() { DARABONBA_PTR_GET(extSubtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& setExtSubtitleList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList & extSubtitleList) { DARABONBA_PTR_SET_VALUE(extSubtitleList_, extSubtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& setExtSubtitleList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList && extSubtitleList) { DARABONBA_PTR_SET_RVALUE(extSubtitleList_, extSubtitleList) };


    // subtitleList Field Functions 
    bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
    void deleteSubtitleList() { this->subtitleList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList & subtitleList() const { DARABONBA_PTR_GET_CONST(subtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList subtitleList() { DARABONBA_PTR_GET(subtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& setSubtitleList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList & subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig& setSubtitleList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList && subtitleList) { DARABONBA_PTR_SET_RVALUE(subtitleList_, subtitleList) };


  protected:
    // The external subtitles. The value is a JSON array that contains up to **four** objects.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigExtSubtitleList> extSubtitleList_ = nullptr;
    // The subtitles.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfigSubtitleList> subtitleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
