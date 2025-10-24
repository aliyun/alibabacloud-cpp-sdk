// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsFrames.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsHintWordsInfo.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsLogoData.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsProgramCodeData.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsQrcodeLocations.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsSfaceData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResults& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(hintWordsInfo, hintWordsInfo_);
      DARABONBA_PTR_TO_JSON(logoData, logoData_);
      DARABONBA_PTR_TO_JSON(ocrData, ocrData_);
      DARABONBA_PTR_TO_JSON(programCodeData, programCodeData_);
      DARABONBA_PTR_TO_JSON(qrcodeData, qrcodeData_);
      DARABONBA_PTR_TO_JSON(qrcodeLocations, qrcodeLocations_);
      DARABONBA_PTR_TO_JSON(sfaceData, sfaceData_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(hintWordsInfo, hintWordsInfo_);
      DARABONBA_PTR_FROM_JSON(logoData, logoData_);
      DARABONBA_PTR_FROM_JSON(ocrData, ocrData_);
      DARABONBA_PTR_FROM_JSON(programCodeData, programCodeData_);
      DARABONBA_PTR_FROM_JSON(qrcodeData, qrcodeData_);
      DARABONBA_PTR_FROM_JSON(qrcodeLocations, qrcodeLocations_);
      DARABONBA_PTR_FROM_JSON(sfaceData, sfaceData_);
    };
    ImAuditResponseBodyImageResultsResultResults() = default ;
    ImAuditResponseBodyImageResultsResultResults(const ImAuditResponseBodyImageResultsResultResults &) = default ;
    ImAuditResponseBodyImageResultsResultResults(ImAuditResponseBodyImageResultsResultResults &&) = default ;
    ImAuditResponseBodyImageResultsResultResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResults() = default ;
    ImAuditResponseBodyImageResultsResultResults& operator=(const ImAuditResponseBodyImageResultsResultResults &) = default ;
    ImAuditResponseBodyImageResultsResultResults& operator=(ImAuditResponseBodyImageResultsResultResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->rate_ == nullptr && return this->scene_ == nullptr && return this->suggestion_ == nullptr && return this->frames_ == nullptr && return this->hintWordsInfo_ == nullptr
        && return this->logoData_ == nullptr && return this->ocrData_ == nullptr && return this->programCodeData_ == nullptr && return this->qrcodeData_ == nullptr && return this->qrcodeLocations_ == nullptr
        && return this->sfaceData_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImAuditResponseBodyImageResultsResultResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResults& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ImAuditResponseBodyImageResultsResultResults& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ImAuditResponseBodyImageResultsResultResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames>) };
    inline ImAuditResponseBodyImageResultsResultResults& setFrames(const vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline ImAuditResponseBodyImageResultsResultResults& setFrames(vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // hintWordsInfo Field Functions 
    bool hasHintWordsInfo() const { return this->hintWordsInfo_ != nullptr;};
    void deleteHintWordsInfo() { this->hintWordsInfo_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo> & hintWordsInfo() const { DARABONBA_PTR_GET_CONST(hintWordsInfo_, vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo> hintWordsInfo() { DARABONBA_PTR_GET(hintWordsInfo_, vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo>) };
    inline ImAuditResponseBodyImageResultsResultResults& setHintWordsInfo(const vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo> & hintWordsInfo) { DARABONBA_PTR_SET_VALUE(hintWordsInfo_, hintWordsInfo) };
    inline ImAuditResponseBodyImageResultsResultResults& setHintWordsInfo(vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo> && hintWordsInfo) { DARABONBA_PTR_SET_RVALUE(hintWordsInfo_, hintWordsInfo) };


    // logoData Field Functions 
    bool hasLogoData() const { return this->logoData_ != nullptr;};
    void deleteLogoData() { this->logoData_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData> & logoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData> logoData() { DARABONBA_PTR_GET(logoData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData>) };
    inline ImAuditResponseBodyImageResultsResultResults& setLogoData(const vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
    inline ImAuditResponseBodyImageResultsResultResults& setLogoData(vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


    // ocrData Field Functions 
    bool hasOcrData() const { return this->ocrData_ != nullptr;};
    void deleteOcrData() { this->ocrData_ = nullptr;};
    inline const vector<string> & ocrData() const { DARABONBA_PTR_GET_CONST(ocrData_, vector<string>) };
    inline vector<string> ocrData() { DARABONBA_PTR_GET(ocrData_, vector<string>) };
    inline ImAuditResponseBodyImageResultsResultResults& setOcrData(const vector<string> & ocrData) { DARABONBA_PTR_SET_VALUE(ocrData_, ocrData) };
    inline ImAuditResponseBodyImageResultsResultResults& setOcrData(vector<string> && ocrData) { DARABONBA_PTR_SET_RVALUE(ocrData_, ocrData) };


    // programCodeData Field Functions 
    bool hasProgramCodeData() const { return this->programCodeData_ != nullptr;};
    void deleteProgramCodeData() { this->programCodeData_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData> & programCodeData() const { DARABONBA_PTR_GET_CONST(programCodeData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData> programCodeData() { DARABONBA_PTR_GET(programCodeData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData>) };
    inline ImAuditResponseBodyImageResultsResultResults& setProgramCodeData(const vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData> & programCodeData) { DARABONBA_PTR_SET_VALUE(programCodeData_, programCodeData) };
    inline ImAuditResponseBodyImageResultsResultResults& setProgramCodeData(vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData> && programCodeData) { DARABONBA_PTR_SET_RVALUE(programCodeData_, programCodeData) };


    // qrcodeData Field Functions 
    bool hasQrcodeData() const { return this->qrcodeData_ != nullptr;};
    void deleteQrcodeData() { this->qrcodeData_ = nullptr;};
    inline const vector<string> & qrcodeData() const { DARABONBA_PTR_GET_CONST(qrcodeData_, vector<string>) };
    inline vector<string> qrcodeData() { DARABONBA_PTR_GET(qrcodeData_, vector<string>) };
    inline ImAuditResponseBodyImageResultsResultResults& setQrcodeData(const vector<string> & qrcodeData) { DARABONBA_PTR_SET_VALUE(qrcodeData_, qrcodeData) };
    inline ImAuditResponseBodyImageResultsResultResults& setQrcodeData(vector<string> && qrcodeData) { DARABONBA_PTR_SET_RVALUE(qrcodeData_, qrcodeData) };


    // qrcodeLocations Field Functions 
    bool hasQrcodeLocations() const { return this->qrcodeLocations_ != nullptr;};
    void deleteQrcodeLocations() { this->qrcodeLocations_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations> & qrcodeLocations() const { DARABONBA_PTR_GET_CONST(qrcodeLocations_, vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations> qrcodeLocations() { DARABONBA_PTR_GET(qrcodeLocations_, vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations>) };
    inline ImAuditResponseBodyImageResultsResultResults& setQrcodeLocations(const vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations> & qrcodeLocations) { DARABONBA_PTR_SET_VALUE(qrcodeLocations_, qrcodeLocations) };
    inline ImAuditResponseBodyImageResultsResultResults& setQrcodeLocations(vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations> && qrcodeLocations) { DARABONBA_PTR_SET_RVALUE(qrcodeLocations_, qrcodeLocations) };


    // sfaceData Field Functions 
    bool hasSfaceData() const { return this->sfaceData_ != nullptr;};
    void deleteSfaceData() { this->sfaceData_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData> & sfaceData() const { DARABONBA_PTR_GET_CONST(sfaceData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData> sfaceData() { DARABONBA_PTR_GET(sfaceData_, vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData>) };
    inline ImAuditResponseBodyImageResultsResultResults& setSfaceData(const vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData> & sfaceData) { DARABONBA_PTR_SET_VALUE(sfaceData_, sfaceData) };
    inline ImAuditResponseBodyImageResultsResultResults& setSfaceData(vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData> && sfaceData) { DARABONBA_PTR_SET_RVALUE(sfaceData_, sfaceData) };


  protected:
    // The category of the moderation results. Valid values vary based on the specified moderation scenario.
    // 
    // *   If the Scenes parameter is set to porn, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   sexy: sexy content
    //     *   porn: pornographic content
    // 
    // *   If the Scenes parameter is set to terrorism, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   bloody: bloody content
    //     *   explosion: explosions and smoke
    //     *   outfit: special costume
    //     *   logo: special logo
    //     *   weapon: weapon
    //     *   politics: political content
    //     *   violence: violence
    //     *   crowd: crowd
    //     *   parade: parade
    //     *   carcrash: car accident
    //     *   flag: flag
    //     *   location: landmark
    //     *   others: other content
    // 
    // *   If the Scenes parameter is set to ad, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   ad: ad violation
    //     *   politics: politically sensitive content in text
    //     *   porn: pornographic content in text
    //     *   abuse: abuse in text
    //     *   terrorism: terrorist content in text
    //     *   contraband: prohibited content in text
    //     *   spam: junk content in text
    //     *   npx: illegal ad
    //     *   qrcode: QR code
    //     *   programCode: mini program code
    // 
    // *   If the Scenes parameter is set to qrcode, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   qrcode: QR code
    //     *   programCode: mini program code
    // 
    // *   If the Scenes parameter is set to live, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   meaningless: no content in the image, such as black or white screen
    //     *   PIP: picture-in-picture
    //     *   smoking: smoking
    //     *   drivelive: live broadcasting in a running vehicle
    // 
    // *   If the Scenes parameter is set to logo, the valid values are:
    // 
    //     *   normal: no pornographic content
    //     *   TV: controlled logo
    //     *   trademark: trademark
    std::shared_ptr<string> label_ = nullptr;
    // The score of the confidence level. Valid values: 0 to 100. A greater value indicates a higher confidence level. If a value of pass is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content is normal. If a value of review or block is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content contains violations.
    // 
    // >  This score is for reference only. We strongly recommend that you do not use this score in your business. We recommend that you use the values that are returned for the suggestion, label, and sublabel parameters to determine whether the content contains violations. The sublabel parameter is returned by some operations.
    std::shared_ptr<double> rate_ = nullptr;
    // The image moderation scenario. Valid values:
    // 
    // *   porn: pornography
    // *   terrorism: terrorist content
    // *   ad: ad violation
    // *   qrcode: QR code
    // *   live: undesirable scene
    // *   logo: special logo
    std::shared_ptr<string> scene_ = nullptr;
    // The recommended subsequent operation. Valid values:
    // 
    // *   pass: The content passes the moderation. No further actions are required.
    // *   review: The moderation object contains suspected violations and requires human review.
    // *   block: The moderation object contains violations. We recommend that you delete or block the object.
    std::shared_ptr<string> suggestion_ = nullptr;
    // If the temporary access URL of the image is too long, a truncated temporary access URL is returned for each frame.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsFrames>> frames_ = nullptr;
    // The information about the term hit by the ad or violation text detected in the moderated image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsHintWordsInfo>> hintWordsInfo_ = nullptr;
    // The information about the logo detected in the moderated image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsLogoData>> logoData_ = nullptr;
    // ocrData
    std::shared_ptr<vector<string>> ocrData_ = nullptr;
    // The location information of the mini program code detected in the moderated image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsProgramCodeData>> programCodeData_ = nullptr;
    // The information about the text that is included in the QR code detected in the moderated image.
    std::shared_ptr<vector<string>> qrcodeData_ = nullptr;
    // The coordinates of the QR code detected in the image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsQrcodeLocations>> qrcodeLocations_ = nullptr;
    // The information about the terrorist content detected in the moderated image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceData>> sfaceData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
