// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUESTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUESTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceAbJobRequestOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceAbJobRequestOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceAbJobRequestOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitTraceAbJobRequestOutput() = default ;
    SubmitTraceAbJobRequestOutput(const SubmitTraceAbJobRequestOutput &) = default ;
    SubmitTraceAbJobRequestOutput(SubmitTraceAbJobRequestOutput &&) = default ;
    SubmitTraceAbJobRequestOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceAbJobRequestOutput() = default ;
    SubmitTraceAbJobRequestOutput& operator=(const SubmitTraceAbJobRequestOutput &) = default ;
    SubmitTraceAbJobRequestOutput& operator=(SubmitTraceAbJobRequestOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitTraceAbJobRequestOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitTraceAbJobRequestOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The output file. The file can be an OSS object or a media asset. OSS URL formats:
    // 
    // 1\\. oss://bucket/dir/
    // 
    // 2\\. http(s)://bucket.oss-[regionId].aliyuncs.com/dir/
    // 
    // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and dir specifies the object path in OSS.
    // 
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the output file. Valid values:
    // 
    // *   OSS: an OSS object.
    // *   Media: a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
