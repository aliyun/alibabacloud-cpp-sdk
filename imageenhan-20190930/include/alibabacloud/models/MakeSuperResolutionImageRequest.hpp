// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKESUPERRESOLUTIONIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAKESUPERRESOLUTIONIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class MakeSuperResolutionImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeSuperResolutionImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_TO_JSON(UpscaleFactor, upscaleFactor_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MakeSuperResolutionImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_FROM_JSON(UpscaleFactor, upscaleFactor_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    MakeSuperResolutionImageRequest() = default ;
    MakeSuperResolutionImageRequest(const MakeSuperResolutionImageRequest &) = default ;
    MakeSuperResolutionImageRequest(MakeSuperResolutionImageRequest &&) = default ;
    MakeSuperResolutionImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeSuperResolutionImageRequest() = default ;
    MakeSuperResolutionImageRequest& operator=(const MakeSuperResolutionImageRequest &) = default ;
    MakeSuperResolutionImageRequest& operator=(MakeSuperResolutionImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->outputFormat_ == nullptr && return this->outputQuality_ == nullptr && return this->upscaleFactor_ == nullptr && return this->url_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline MakeSuperResolutionImageRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline MakeSuperResolutionImageRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // outputQuality Field Functions 
    bool hasOutputQuality() const { return this->outputQuality_ != nullptr;};
    void deleteOutputQuality() { this->outputQuality_ = nullptr;};
    inline int64_t outputQuality() const { DARABONBA_PTR_GET_DEFAULT(outputQuality_, 0L) };
    inline MakeSuperResolutionImageRequest& setOutputQuality(int64_t outputQuality) { DARABONBA_PTR_SET_VALUE(outputQuality_, outputQuality) };


    // upscaleFactor Field Functions 
    bool hasUpscaleFactor() const { return this->upscaleFactor_ != nullptr;};
    void deleteUpscaleFactor() { this->upscaleFactor_ = nullptr;};
    inline int64_t upscaleFactor() const { DARABONBA_PTR_GET_DEFAULT(upscaleFactor_, 0L) };
    inline MakeSuperResolutionImageRequest& setUpscaleFactor(int64_t upscaleFactor) { DARABONBA_PTR_SET_VALUE(upscaleFactor_, upscaleFactor) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MakeSuperResolutionImageRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<int64_t> outputQuality_ = nullptr;
    std::shared_ptr<int64_t> upscaleFactor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
