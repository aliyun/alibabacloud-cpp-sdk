// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetAIAgentVoiceprintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    SetAIAgentVoiceprintRequest() = default ;
    SetAIAgentVoiceprintRequest(const SetAIAgentVoiceprintRequest &) = default ;
    SetAIAgentVoiceprintRequest(SetAIAgentVoiceprintRequest &&) = default ;
    SetAIAgentVoiceprintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIAgentVoiceprintRequest() = default ;
    SetAIAgentVoiceprintRequest& operator=(const SetAIAgentVoiceprintRequest &) = default ;
    SetAIAgentVoiceprintRequest& operator=(SetAIAgentVoiceprintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->format_ == nullptr && this->type_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Input& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Input& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The media access link.
      shared_ptr<string> data_ {};
      // The audio file format. Only WAV is supported.
      shared_ptr<string> format_ {};
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
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->voiceprintId_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SetAIAgentVoiceprintRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SetAIAgentVoiceprintRequest::Input) };
    inline SetAIAgentVoiceprintRequest::Input getInput() { DARABONBA_PTR_GET(input_, SetAIAgentVoiceprintRequest::Input) };
    inline SetAIAgentVoiceprintRequest& setInput(const SetAIAgentVoiceprintRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SetAIAgentVoiceprintRequest& setInput(SetAIAgentVoiceprintRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline SetAIAgentVoiceprintRequest& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    // The input file.
    shared_ptr<SetAIAgentVoiceprintRequest::Input> input_ {};
    // A unique identifier for the voiceprint. Generate this ID based on your own business rules. Requirement: 1 to 127 characters in length.
    shared_ptr<string> voiceprintId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
