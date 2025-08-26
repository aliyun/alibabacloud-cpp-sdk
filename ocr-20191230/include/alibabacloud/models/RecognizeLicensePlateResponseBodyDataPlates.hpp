// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZELICENSEPLATERESPONSEBODYDATAPLATES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZELICENSEPLATERESPONSEBODYDATAPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeLicensePlateResponseBodyDataPlatesPositions.hpp>
#include <alibabacloud/models/RecognizeLicensePlateResponseBodyDataPlatesRoi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeLicensePlateResponseBodyDataPlates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeLicensePlateResponseBodyDataPlates& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_TO_JSON(PlateType, plateType_);
      DARABONBA_PTR_TO_JSON(PlateTypeConfidence, plateTypeConfidence_);
      DARABONBA_PTR_TO_JSON(Positions, positions_);
      DARABONBA_PTR_TO_JSON(Roi, roi_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeLicensePlateResponseBodyDataPlates& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(PlateNumber, plateNumber_);
      DARABONBA_PTR_FROM_JSON(PlateType, plateType_);
      DARABONBA_PTR_FROM_JSON(PlateTypeConfidence, plateTypeConfidence_);
      DARABONBA_PTR_FROM_JSON(Positions, positions_);
      DARABONBA_PTR_FROM_JSON(Roi, roi_);
    };
    RecognizeLicensePlateResponseBodyDataPlates() = default ;
    RecognizeLicensePlateResponseBodyDataPlates(const RecognizeLicensePlateResponseBodyDataPlates &) = default ;
    RecognizeLicensePlateResponseBodyDataPlates(RecognizeLicensePlateResponseBodyDataPlates &&) = default ;
    RecognizeLicensePlateResponseBodyDataPlates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeLicensePlateResponseBodyDataPlates() = default ;
    RecognizeLicensePlateResponseBodyDataPlates& operator=(const RecognizeLicensePlateResponseBodyDataPlates &) = default ;
    RecognizeLicensePlateResponseBodyDataPlates& operator=(RecognizeLicensePlateResponseBodyDataPlates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->plateNumber_ != nullptr && this->plateType_ != nullptr && this->plateTypeConfidence_ != nullptr && this->positions_ != nullptr && this->roi_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // plateNumber Field Functions 
    bool hasPlateNumber() const { return this->plateNumber_ != nullptr;};
    void deletePlateNumber() { this->plateNumber_ = nullptr;};
    inline string plateNumber() const { DARABONBA_PTR_GET_DEFAULT(plateNumber_, "") };
    inline RecognizeLicensePlateResponseBodyDataPlates& setPlateNumber(string plateNumber) { DARABONBA_PTR_SET_VALUE(plateNumber_, plateNumber) };


    // plateType Field Functions 
    bool hasPlateType() const { return this->plateType_ != nullptr;};
    void deletePlateType() { this->plateType_ = nullptr;};
    inline string plateType() const { DARABONBA_PTR_GET_DEFAULT(plateType_, "") };
    inline RecognizeLicensePlateResponseBodyDataPlates& setPlateType(string plateType) { DARABONBA_PTR_SET_VALUE(plateType_, plateType) };


    // plateTypeConfidence Field Functions 
    bool hasPlateTypeConfidence() const { return this->plateTypeConfidence_ != nullptr;};
    void deletePlateTypeConfidence() { this->plateTypeConfidence_ = nullptr;};
    inline float plateTypeConfidence() const { DARABONBA_PTR_GET_DEFAULT(plateTypeConfidence_, 0.0) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setPlateTypeConfidence(float plateTypeConfidence) { DARABONBA_PTR_SET_VALUE(plateTypeConfidence_, plateTypeConfidence) };


    // positions Field Functions 
    bool hasPositions() const { return this->positions_ != nullptr;};
    void deletePositions() { this->positions_ = nullptr;};
    inline const vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions> & positions() const { DARABONBA_PTR_GET_CONST(positions_, vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions>) };
    inline vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions> positions() { DARABONBA_PTR_GET(positions_, vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions>) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setPositions(const vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions> & positions) { DARABONBA_PTR_SET_VALUE(positions_, positions) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setPositions(vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions> && positions) { DARABONBA_PTR_SET_RVALUE(positions_, positions) };


    // roi Field Functions 
    bool hasRoi() const { return this->roi_ != nullptr;};
    void deleteRoi() { this->roi_ = nullptr;};
    inline const Models::RecognizeLicensePlateResponseBodyDataPlatesRoi & roi() const { DARABONBA_PTR_GET_CONST(roi_, Models::RecognizeLicensePlateResponseBodyDataPlatesRoi) };
    inline Models::RecognizeLicensePlateResponseBodyDataPlatesRoi roi() { DARABONBA_PTR_GET(roi_, Models::RecognizeLicensePlateResponseBodyDataPlatesRoi) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setRoi(const Models::RecognizeLicensePlateResponseBodyDataPlatesRoi & roi) { DARABONBA_PTR_SET_VALUE(roi_, roi) };
    inline RecognizeLicensePlateResponseBodyDataPlates& setRoi(Models::RecognizeLicensePlateResponseBodyDataPlatesRoi && roi) { DARABONBA_PTR_SET_RVALUE(roi_, roi) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> plateNumber_ = nullptr;
    std::shared_ptr<string> plateType_ = nullptr;
    std::shared_ptr<float> plateTypeConfidence_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeLicensePlateResponseBodyDataPlatesPositions>> positions_ = nullptr;
    std::shared_ptr<Models::RecognizeLicensePlateResponseBodyDataPlatesRoi> roi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
