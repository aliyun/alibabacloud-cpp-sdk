// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALANALYZEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERALANALYZEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GeneralAnalyzeImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralAnalyzeImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralAnalyzeImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
    };
    GeneralAnalyzeImageRequest() = default ;
    GeneralAnalyzeImageRequest(const GeneralAnalyzeImageRequest &) = default ;
    GeneralAnalyzeImageRequest(GeneralAnalyzeImageRequest &&) = default ;
    GeneralAnalyzeImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralAnalyzeImageRequest() = default ;
    GeneralAnalyzeImageRequest& operator=(const GeneralAnalyzeImageRequest &) = default ;
    GeneralAnalyzeImageRequest& operator=(GeneralAnalyzeImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrompt_ == nullptr
        && this->imageUrls_ == nullptr && this->stream_ == nullptr && this->templateIds_ == nullptr; };
    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline GeneralAnalyzeImageRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline GeneralAnalyzeImageRequest& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline GeneralAnalyzeImageRequest& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline GeneralAnalyzeImageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<int64_t> & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<int64_t>) };
    inline vector<int64_t> getTemplateIds() { DARABONBA_PTR_GET(templateIds_, vector<int64_t>) };
    inline GeneralAnalyzeImageRequest& setTemplateIds(const vector<int64_t> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline GeneralAnalyzeImageRequest& setTemplateIds(vector<int64_t> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


  protected:
    shared_ptr<string> customPrompt_ {};
    // This parameter is required.
    shared_ptr<vector<string>> imageUrls_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<vector<int64_t>> templateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
