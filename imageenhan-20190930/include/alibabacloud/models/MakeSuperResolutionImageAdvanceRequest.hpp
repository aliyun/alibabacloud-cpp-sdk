// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKESUPERRESOLUTIONIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAKESUPERRESOLUTIONIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class MakeSuperResolutionImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeSuperResolutionImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_TO_JSON(UpscaleFactor, upscaleFactor_);
      DARABONBA_TO_JSON(Url, urlObject_);
    };
    friend void from_json(const Darabonba::Json& j, MakeSuperResolutionImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_FROM_JSON(UpscaleFactor, upscaleFactor_);
      DARABONBA_FROM_JSON(Url, urlObject_);
    };
    MakeSuperResolutionImageAdvanceRequest() = default ;
    MakeSuperResolutionImageAdvanceRequest(const MakeSuperResolutionImageAdvanceRequest &) = default ;
    MakeSuperResolutionImageAdvanceRequest(MakeSuperResolutionImageAdvanceRequest &&) = default ;
    MakeSuperResolutionImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeSuperResolutionImageAdvanceRequest() = default ;
    MakeSuperResolutionImageAdvanceRequest& operator=(const MakeSuperResolutionImageAdvanceRequest &) = default ;
    MakeSuperResolutionImageAdvanceRequest& operator=(MakeSuperResolutionImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->outputFormat_ == nullptr && return this->outputQuality_ == nullptr && return this->upscaleFactor_ == nullptr && return this->urlObject_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline MakeSuperResolutionImageAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline MakeSuperResolutionImageAdvanceRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // outputQuality Field Functions 
    bool hasOutputQuality() const { return this->outputQuality_ != nullptr;};
    void deleteOutputQuality() { this->outputQuality_ = nullptr;};
    inline int64_t outputQuality() const { DARABONBA_PTR_GET_DEFAULT(outputQuality_, 0L) };
    inline MakeSuperResolutionImageAdvanceRequest& setOutputQuality(int64_t outputQuality) { DARABONBA_PTR_SET_VALUE(outputQuality_, outputQuality) };


    // upscaleFactor Field Functions 
    bool hasUpscaleFactor() const { return this->upscaleFactor_ != nullptr;};
    void deleteUpscaleFactor() { this->upscaleFactor_ = nullptr;};
    inline int64_t upscaleFactor() const { DARABONBA_PTR_GET_DEFAULT(upscaleFactor_, 0L) };
    inline MakeSuperResolutionImageAdvanceRequest& setUpscaleFactor(int64_t upscaleFactor) { DARABONBA_PTR_SET_VALUE(upscaleFactor_, upscaleFactor) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline MakeSuperResolutionImageAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<int64_t> outputQuality_ = nullptr;
    std::shared_ptr<int64_t> upscaleFactor_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
