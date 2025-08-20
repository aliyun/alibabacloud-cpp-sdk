// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEIMAGEREQUEST_HPP_
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
  class AnalyzeImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    AnalyzeImageRequest() = default ;
    AnalyzeImageRequest(const AnalyzeImageRequest &) = default ;
    AnalyzeImageRequest(AnalyzeImageRequest &&) = default ;
    AnalyzeImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeImageRequest() = default ;
    AnalyzeImageRequest& operator=(const AnalyzeImageRequest &) = default ;
    AnalyzeImageRequest& operator=(AnalyzeImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUrls_ != nullptr
        && this->responseFormatType_ != nullptr && this->resultTypes_ != nullptr && this->stream_ != nullptr; };
    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline AnalyzeImageRequest& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline AnalyzeImageRequest& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline AnalyzeImageRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & resultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> resultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline AnalyzeImageRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline AnalyzeImageRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AnalyzeImageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
    std::shared_ptr<vector<string>> resultTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
