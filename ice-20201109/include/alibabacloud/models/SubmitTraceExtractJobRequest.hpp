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
      // The specific information for the source file, which can be an OSS URL or a media asset ID. OSS URL formats:
      // 
      // 1\\. oss://bucket/object
      // 
      // 2\\. http(s)://bucket.oss-[regionId].aliyuncs.com/object
      // 
      // where bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object path in OSS.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the source file. Valid values:
      // 
      // *   OSS: an OSS object.
      // *   Media: a media asset.
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
    // The source video file from which to extract the watermark.
    // 
    // > The OSS object or media asset must reside in the same region as the IMS service region.
    // 
    // This parameter is required.
    shared_ptr<SubmitTraceExtractJobRequest::Input> input_ {};
    // Additional parameters for the watermark job, provided as a JSON string. Supported parameter:
    // 
    // *   m3u8Type: The extraction algorithm type. Defaults to v1.
    // 
    //     *   v1: Extracts from an M3U8 with absolute paths.
    //     *   v2: Extracts from an M3U8 with relative paths.
    shared_ptr<string> params_ {};
    // The custom data, which can be up to 1,024 bytes in size.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
