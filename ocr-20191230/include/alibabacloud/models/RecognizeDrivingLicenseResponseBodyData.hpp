// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeDrivingLicenseResponseBodyDataBackResult.hpp>
#include <alibabacloud/models/RecognizeDrivingLicenseResponseBodyDataFaceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDrivingLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDrivingLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackResult, backResult_);
      DARABONBA_PTR_TO_JSON(FaceResult, faceResult_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDrivingLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackResult, backResult_);
      DARABONBA_PTR_FROM_JSON(FaceResult, faceResult_);
    };
    RecognizeDrivingLicenseResponseBodyData() = default ;
    RecognizeDrivingLicenseResponseBodyData(const RecognizeDrivingLicenseResponseBodyData &) = default ;
    RecognizeDrivingLicenseResponseBodyData(RecognizeDrivingLicenseResponseBodyData &&) = default ;
    RecognizeDrivingLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDrivingLicenseResponseBodyData() = default ;
    RecognizeDrivingLicenseResponseBodyData& operator=(const RecognizeDrivingLicenseResponseBodyData &) = default ;
    RecognizeDrivingLicenseResponseBodyData& operator=(RecognizeDrivingLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backResult_ != nullptr
        && this->faceResult_ != nullptr; };
    // backResult Field Functions 
    bool hasBackResult() const { return this->backResult_ != nullptr;};
    void deleteBackResult() { this->backResult_ = nullptr;};
    inline const Models::RecognizeDrivingLicenseResponseBodyDataBackResult & backResult() const { DARABONBA_PTR_GET_CONST(backResult_, Models::RecognizeDrivingLicenseResponseBodyDataBackResult) };
    inline Models::RecognizeDrivingLicenseResponseBodyDataBackResult backResult() { DARABONBA_PTR_GET(backResult_, Models::RecognizeDrivingLicenseResponseBodyDataBackResult) };
    inline RecognizeDrivingLicenseResponseBodyData& setBackResult(const Models::RecognizeDrivingLicenseResponseBodyDataBackResult & backResult) { DARABONBA_PTR_SET_VALUE(backResult_, backResult) };
    inline RecognizeDrivingLicenseResponseBodyData& setBackResult(Models::RecognizeDrivingLicenseResponseBodyDataBackResult && backResult) { DARABONBA_PTR_SET_RVALUE(backResult_, backResult) };


    // faceResult Field Functions 
    bool hasFaceResult() const { return this->faceResult_ != nullptr;};
    void deleteFaceResult() { this->faceResult_ = nullptr;};
    inline const Models::RecognizeDrivingLicenseResponseBodyDataFaceResult & faceResult() const { DARABONBA_PTR_GET_CONST(faceResult_, Models::RecognizeDrivingLicenseResponseBodyDataFaceResult) };
    inline Models::RecognizeDrivingLicenseResponseBodyDataFaceResult faceResult() { DARABONBA_PTR_GET(faceResult_, Models::RecognizeDrivingLicenseResponseBodyDataFaceResult) };
    inline RecognizeDrivingLicenseResponseBodyData& setFaceResult(const Models::RecognizeDrivingLicenseResponseBodyDataFaceResult & faceResult) { DARABONBA_PTR_SET_VALUE(faceResult_, faceResult) };
    inline RecognizeDrivingLicenseResponseBodyData& setFaceResult(Models::RecognizeDrivingLicenseResponseBodyDataFaceResult && faceResult) { DARABONBA_PTR_SET_RVALUE(faceResult_, faceResult) };


  protected:
    std::shared_ptr<Models::RecognizeDrivingLicenseResponseBodyDataBackResult> backResult_ = nullptr;
    std::shared_ptr<Models::RecognizeDrivingLicenseResponseBodyDataFaceResult> faceResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
