// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeDriverLicenseResponseBodyDataBackResult.hpp>
#include <alibabacloud/models/RecognizeDriverLicenseResponseBodyDataFaceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDriverLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDriverLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackResult, backResult_);
      DARABONBA_PTR_TO_JSON(FaceResult, faceResult_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDriverLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackResult, backResult_);
      DARABONBA_PTR_FROM_JSON(FaceResult, faceResult_);
    };
    RecognizeDriverLicenseResponseBodyData() = default ;
    RecognizeDriverLicenseResponseBodyData(const RecognizeDriverLicenseResponseBodyData &) = default ;
    RecognizeDriverLicenseResponseBodyData(RecognizeDriverLicenseResponseBodyData &&) = default ;
    RecognizeDriverLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDriverLicenseResponseBodyData() = default ;
    RecognizeDriverLicenseResponseBodyData& operator=(const RecognizeDriverLicenseResponseBodyData &) = default ;
    RecognizeDriverLicenseResponseBodyData& operator=(RecognizeDriverLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backResult_ != nullptr
        && this->faceResult_ != nullptr; };
    // backResult Field Functions 
    bool hasBackResult() const { return this->backResult_ != nullptr;};
    void deleteBackResult() { this->backResult_ = nullptr;};
    inline const Models::RecognizeDriverLicenseResponseBodyDataBackResult & backResult() const { DARABONBA_PTR_GET_CONST(backResult_, Models::RecognizeDriverLicenseResponseBodyDataBackResult) };
    inline Models::RecognizeDriverLicenseResponseBodyDataBackResult backResult() { DARABONBA_PTR_GET(backResult_, Models::RecognizeDriverLicenseResponseBodyDataBackResult) };
    inline RecognizeDriverLicenseResponseBodyData& setBackResult(const Models::RecognizeDriverLicenseResponseBodyDataBackResult & backResult) { DARABONBA_PTR_SET_VALUE(backResult_, backResult) };
    inline RecognizeDriverLicenseResponseBodyData& setBackResult(Models::RecognizeDriverLicenseResponseBodyDataBackResult && backResult) { DARABONBA_PTR_SET_RVALUE(backResult_, backResult) };


    // faceResult Field Functions 
    bool hasFaceResult() const { return this->faceResult_ != nullptr;};
    void deleteFaceResult() { this->faceResult_ = nullptr;};
    inline const Models::RecognizeDriverLicenseResponseBodyDataFaceResult & faceResult() const { DARABONBA_PTR_GET_CONST(faceResult_, Models::RecognizeDriverLicenseResponseBodyDataFaceResult) };
    inline Models::RecognizeDriverLicenseResponseBodyDataFaceResult faceResult() { DARABONBA_PTR_GET(faceResult_, Models::RecognizeDriverLicenseResponseBodyDataFaceResult) };
    inline RecognizeDriverLicenseResponseBodyData& setFaceResult(const Models::RecognizeDriverLicenseResponseBodyDataFaceResult & faceResult) { DARABONBA_PTR_SET_VALUE(faceResult_, faceResult) };
    inline RecognizeDriverLicenseResponseBodyData& setFaceResult(Models::RecognizeDriverLicenseResponseBodyDataFaceResult && faceResult) { DARABONBA_PTR_SET_RVALUE(faceResult_, faceResult) };


  protected:
    std::shared_ptr<Models::RecognizeDriverLicenseResponseBodyDataBackResult> backResult_ = nullptr;
    std::shared_ptr<Models::RecognizeDriverLicenseResponseBodyDataFaceResult> faceResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
