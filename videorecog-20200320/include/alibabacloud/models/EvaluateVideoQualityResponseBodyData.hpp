// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EvaluateVideoQualityResponseBodyDataVideoQualityInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JsonUrl, jsonUrl_);
      DARABONBA_PTR_TO_JSON(PdfUrl, pdfUrl_);
      DARABONBA_PTR_TO_JSON(VideoQualityInfo, videoQualityInfo_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonUrl, jsonUrl_);
      DARABONBA_PTR_FROM_JSON(PdfUrl, pdfUrl_);
      DARABONBA_PTR_FROM_JSON(VideoQualityInfo, videoQualityInfo_);
    };
    EvaluateVideoQualityResponseBodyData() = default ;
    EvaluateVideoQualityResponseBodyData(const EvaluateVideoQualityResponseBodyData &) = default ;
    EvaluateVideoQualityResponseBodyData(EvaluateVideoQualityResponseBodyData &&) = default ;
    EvaluateVideoQualityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityResponseBodyData() = default ;
    EvaluateVideoQualityResponseBodyData& operator=(const EvaluateVideoQualityResponseBodyData &) = default ;
    EvaluateVideoQualityResponseBodyData& operator=(EvaluateVideoQualityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jsonUrl_ != nullptr
        && this->pdfUrl_ != nullptr && this->videoQualityInfo_ != nullptr; };
    // jsonUrl Field Functions 
    bool hasJsonUrl() const { return this->jsonUrl_ != nullptr;};
    void deleteJsonUrl() { this->jsonUrl_ = nullptr;};
    inline string jsonUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonUrl_, "") };
    inline EvaluateVideoQualityResponseBodyData& setJsonUrl(string jsonUrl) { DARABONBA_PTR_SET_VALUE(jsonUrl_, jsonUrl) };


    // pdfUrl Field Functions 
    bool hasPdfUrl() const { return this->pdfUrl_ != nullptr;};
    void deletePdfUrl() { this->pdfUrl_ = nullptr;};
    inline string pdfUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfUrl_, "") };
    inline EvaluateVideoQualityResponseBodyData& setPdfUrl(string pdfUrl) { DARABONBA_PTR_SET_VALUE(pdfUrl_, pdfUrl) };


    // videoQualityInfo Field Functions 
    bool hasVideoQualityInfo() const { return this->videoQualityInfo_ != nullptr;};
    void deleteVideoQualityInfo() { this->videoQualityInfo_ = nullptr;};
    inline const Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo & videoQualityInfo() const { DARABONBA_PTR_GET_CONST(videoQualityInfo_, Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo) };
    inline Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo videoQualityInfo() { DARABONBA_PTR_GET(videoQualityInfo_, Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo) };
    inline EvaluateVideoQualityResponseBodyData& setVideoQualityInfo(const Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo & videoQualityInfo) { DARABONBA_PTR_SET_VALUE(videoQualityInfo_, videoQualityInfo) };
    inline EvaluateVideoQualityResponseBodyData& setVideoQualityInfo(Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo && videoQualityInfo) { DARABONBA_PTR_SET_RVALUE(videoQualityInfo_, videoQualityInfo) };


  protected:
    std::shared_ptr<string> jsonUrl_ = nullptr;
    std::shared_ptr<string> pdfUrl_ = nullptr;
    std::shared_ptr<Models::EvaluateVideoQualityResponseBodyDataVideoQualityInfo> videoQualityInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
