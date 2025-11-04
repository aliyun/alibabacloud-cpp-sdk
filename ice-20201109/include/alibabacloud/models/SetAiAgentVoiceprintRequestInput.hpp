// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUESTINPUT_HPP_
#define ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUESTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetAIAgentVoiceprintRequestInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIAgentVoiceprintRequestInput& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIAgentVoiceprintRequestInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SetAIAgentVoiceprintRequestInput() = default ;
    SetAIAgentVoiceprintRequestInput(const SetAIAgentVoiceprintRequestInput &) = default ;
    SetAIAgentVoiceprintRequestInput(SetAIAgentVoiceprintRequestInput &&) = default ;
    SetAIAgentVoiceprintRequestInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIAgentVoiceprintRequestInput() = default ;
    SetAIAgentVoiceprintRequestInput& operator=(const SetAIAgentVoiceprintRequestInput &) = default ;
    SetAIAgentVoiceprintRequestInput& operator=(SetAIAgentVoiceprintRequestInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->format_ == nullptr && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SetAIAgentVoiceprintRequestInput& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SetAIAgentVoiceprintRequestInput& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SetAIAgentVoiceprintRequestInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The media access link.
    std::shared_ptr<string> data_ = nullptr;
    // The audio file format. Only WAV is supported.
    std::shared_ptr<string> format_ = nullptr;
    // Specifies the access type for the audio file. The system will verify file accessibility via HEAD or GET requests. Valid values:
    // 
    // *   url: An HTTP(S) link to the audio file.
    // 
    // *   oss: An OSS object. Supports the following formats:
    // 
    //     1.  OSS URI: oss://bucket-name/object-key
    // 
    //         Example: oss://my-bucket/audio/sample.wav
    // 
    //     2.  OSS public URL: http(s)://${bucket}.oss-${region}.aliyuncs.com/${object}
    // 
    //         Example: https://my-bucket.oss-cn-hangzhou.aliyuncs.com/audio/sample.wav
    // 
    // >  The OSS bucket must be in the same region as the service. Otherwise, the access fails.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
