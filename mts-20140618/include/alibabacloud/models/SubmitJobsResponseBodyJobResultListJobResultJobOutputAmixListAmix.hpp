// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAMIXLISTAMIX_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAMIXLISTAMIX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& obj) { 
      DARABONBA_PTR_TO_JSON(AmixURL, amixURL_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Map, map_);
      DARABONBA_PTR_TO_JSON(MixDurMode, mixDurMode_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& obj) { 
      DARABONBA_PTR_FROM_JSON(AmixURL, amixURL_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Map, map_);
      DARABONBA_PTR_FROM_JSON(MixDurMode, mixDurMode_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix(SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amixURL_ == nullptr
        && return this->duration_ == nullptr && return this->map_ == nullptr && return this->mixDurMode_ == nullptr && return this->start_ == nullptr; };
    // amixURL Field Functions 
    bool hasAmixURL() const { return this->amixURL_ != nullptr;};
    void deleteAmixURL() { this->amixURL_ = nullptr;};
    inline string amixURL() const { DARABONBA_PTR_GET_DEFAULT(amixURL_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& setAmixURL(string amixURL) { DARABONBA_PTR_SET_VALUE(amixURL_, amixURL) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // map Field Functions 
    bool hasMap() const { return this->map_ != nullptr;};
    void deleteMap() { this->map_ = nullptr;};
    inline string _map() const { DARABONBA_PTR_GET_DEFAULT(map_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& setMap(string _map) { DARABONBA_PTR_SET_VALUE(map_, _map) };


    // mixDurMode Field Functions 
    bool hasMixDurMode() const { return this->mixDurMode_ != nullptr;};
    void deleteMixDurMode() { this->mixDurMode_ = nullptr;};
    inline string mixDurMode() const { DARABONBA_PTR_GET_DEFAULT(mixDurMode_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& setMixDurMode(string mixDurMode) { DARABONBA_PTR_SET_VALUE(mixDurMode_, mixDurMode) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The URL of the audio track that is mixed as the background music.
    // 
    // *   The URL can be an OSS URL or the string `input`.
    // *   A value of input indicates that two audio tracks are mixed in a video.
    std::shared_ptr<string> amixURL_ = nullptr;
    // The duration of the mixed audio track. The value is in the number or time format.
    std::shared_ptr<string> duration_ = nullptr;
    // The audio track that is mixed. Format: 0:a:{audio_index}. Example: 0:a:0.
    std::shared_ptr<string> map_ = nullptr;
    // The mode to specify the mixing duration. Valid values: **first** and **long**.
    // 
    // *   **first**: The length of the output media equals the length of the input media.
    // *   **long**: The length of the output media equals the length of the output media or the length of the input media, whichever is longer.
    // *   Default value: **long**.
    std::shared_ptr<string> mixDurMode_ = nullptr;
    // The start time. The value is in the number or time format. Examples: 1:25:36.240 and 32000.23.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
