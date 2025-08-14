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
    virtual bool empty() const override { this->media_ != nullptr
        && this->type_ != nullptr; };
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
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
