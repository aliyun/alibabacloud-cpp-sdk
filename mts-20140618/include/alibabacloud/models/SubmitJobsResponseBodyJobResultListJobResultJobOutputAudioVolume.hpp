// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAUDIOVOLUME_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAUDIOVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Method, method_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume(SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->level_ == nullptr
        && return this->method_ == nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAudioVolume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // The volume adjustment range.
    // 
    // *   Unit: decibel.
    // *   Default value: **-20**.
    std::shared_ptr<string> level_ = nullptr;
    // The method that is used to adjust the volume. Valid values:
    // 
    // *   **auto**
    // *   **dynamic**
    // *   **linear**
    std::shared_ptr<string> method_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
