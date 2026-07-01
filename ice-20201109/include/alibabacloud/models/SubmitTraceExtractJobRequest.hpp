// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTraceExtractJobRequest() = default ;
    SubmitTraceExtractJobRequest(const SubmitTraceExtractJobRequest &) = default ;
    SubmitTraceExtractJobRequest(SubmitTraceExtractJobRequest &&) = default ;
    SubmitTraceExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceExtractJobRequest() = default ;
    SubmitTraceExtractJobRequest& operator=(const SubmitTraceExtractJobRequest &) = default ;
    SubmitTraceExtractJobRequest& operator=(SubmitTraceExtractJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
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
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input source. Specify an OSS object URL or a media asset ID.
      // 
      // An OSS object URL can be in one of the following formats:
      // 
      // 1\\. oss\\://bucket/object
      // 
      // In these formats, `bucket` is the name of an OSS bucket in the same region as your IMS service, and `object` is the path of the OSS object.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The input type. Valid values:
      // 
      // - OSS: An OSS object URL.
      // 
      // - Media: A media asset ID.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->params_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitTraceExtractJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitTraceExtractJobRequest::Input) };
    inline SubmitTraceExtractJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitTraceExtractJobRequest::Input) };
    inline SubmitTraceExtractJobRequest& setInput(const SubmitTraceExtractJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitTraceExtractJobRequest& setInput(SubmitTraceExtractJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitTraceExtractJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceExtractJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input video from which to extract the watermark.
    // 
    // > - The OSS object or media asset must be in the same region as your IMS service.
    // 
    // This parameter is required.
    shared_ptr<SubmitTraceExtractJobRequest::Input> input_ {};
    // Extraction job parameters, specified as a JSON string. The following parameters are supported:
    // 
    // - `m3u8Type`: The algorithm type. The default value is `v1`.
    // 
    //   - `v1`: Extracts an m3u8 playlist with absolute paths.
    // 
    //   - `v2`: Extracts an m3u8 playlist with relative paths.
    shared_ptr<string> params_ {};
    // The user-defined data. Maximum length: 1,024 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
