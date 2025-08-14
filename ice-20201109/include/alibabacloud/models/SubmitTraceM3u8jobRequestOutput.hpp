// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUESTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUESTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceM3u8JobRequestOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceM3u8JobRequestOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceM3u8JobRequestOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitTraceM3u8JobRequestOutput() = default ;
    SubmitTraceM3u8JobRequestOutput(const SubmitTraceM3u8JobRequestOutput &) = default ;
    SubmitTraceM3u8JobRequestOutput(SubmitTraceM3u8JobRequestOutput &&) = default ;
    SubmitTraceM3u8JobRequestOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceM3u8JobRequestOutput() = default ;
    SubmitTraceM3u8JobRequestOutput& operator=(const SubmitTraceM3u8JobRequestOutput &) = default ;
    SubmitTraceM3u8JobRequestOutput& operator=(SubmitTraceM3u8JobRequestOutput &&) = default ;
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
    inline SubmitTraceM3u8JobRequestOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitTraceM3u8JobRequestOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
