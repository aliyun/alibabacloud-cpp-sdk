// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCopyrightExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest(SubmitCopyrightExtractJobRequest &&) = default ;
    SubmitCopyrightExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest& operator=(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest& operator=(SubmitCopyrightExtractJobRequest &&) = default ;
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
      // Specifies the URL of an Object Storage Service (OSS) object or the ID of a media asset.
      // OSS URLs can be in the following formats:
      // 
      // 1\\. oss\\://bucket/object
      // 
      // 2\\. http(s)://bucket.oss-[regionId].aliyuncs.com/object
      // 
      // In these formats, `bucket` is the name of a bucket in the same region as your IMS instance, and `object` is the file path.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // 1. OSS: The URL of a file in Object Storage Service (OSS).
      // 
      // 2. Media: The ID of a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->params_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitCopyrightExtractJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitCopyrightExtractJobRequest::Input) };
    inline SubmitCopyrightExtractJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitCopyrightExtractJobRequest::Input) };
    inline SubmitCopyrightExtractJobRequest& setInput(const SubmitCopyrightExtractJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitCopyrightExtractJobRequest& setInput(SubmitCopyrightExtractJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightExtractJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightExtractJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The video file for watermark extraction.
    // 
    // > - The region of the Object Storage Service (OSS) file or media asset must match the region of the current Intelligent Media Service (IMS) instance.
    // 
    // This parameter is required.
    shared_ptr<SubmitCopyrightExtractJobRequest::Input> input_ {};
    // The watermark job parameters, specified as a JSON string.
    // 
    // - algoType: The algorithm type. Default value: v1. The extraction algorithm type must match the algorithm type used for embedding the watermark.
    // 
    //   - v1: The copyright extraction algorithm for long-form videos.
    // 
    //   - v2: The copyright extraction algorithm for short-form videos.
    shared_ptr<string> params_ {};
    // The user-defined data. The maximum length is 1,024 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
