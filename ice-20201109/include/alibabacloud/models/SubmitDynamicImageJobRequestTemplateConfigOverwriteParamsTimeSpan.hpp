// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMSTIMESPAN_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMSTIMESPAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Seek, seek_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Seek, seek_);
    };
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan() = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan(const SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan &) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan(SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan &&) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan() = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& operator=(const SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan &) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& operator=(SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->end_ == nullptr && return this->seek_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // seek Field Functions 
    bool hasSeek() const { return this->seek_ != nullptr;};
    void deleteSeek() { this->seek_ = nullptr;};
    inline string seek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


  protected:
    // The length of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
    std::shared_ptr<string> duration_ = nullptr;
    // The length of the ending part of the original clip to be cropped out. If you specify this parameter, the Duration parameter becomes invalid.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
    std::shared_ptr<string> end_ = nullptr;
    // The start point of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
    std::shared_ptr<string> seek_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
