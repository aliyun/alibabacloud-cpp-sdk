// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyDataElementsBoxes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DetectVehicleICongestionResponseBodyDataElements() = default ;
    DetectVehicleICongestionResponseBodyDataElements(const DetectVehicleICongestionResponseBodyDataElements &) = default ;
    DetectVehicleICongestionResponseBodyDataElements(DetectVehicleICongestionResponseBodyDataElements &&) = default ;
    DetectVehicleICongestionResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionResponseBodyDataElements() = default ;
    DetectVehicleICongestionResponseBodyDataElements& operator=(const DetectVehicleICongestionResponseBodyDataElements &) = default ;
    DetectVehicleICongestionResponseBodyDataElements& operator=(DetectVehicleICongestionResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->id_ != nullptr && this->score_ != nullptr && this->typeName_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes>) };
    inline vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes> boxes() { DARABONBA_PTR_GET(boxes_, vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes>) };
    inline DetectVehicleICongestionResponseBodyDataElements& setBoxes(const vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline DetectVehicleICongestionResponseBodyDataElements& setBoxes(vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DetectVehicleICongestionResponseBodyDataElements& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectVehicleICongestionResponseBodyDataElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DetectVehicleICongestionResponseBodyDataElements& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    std::shared_ptr<vector<Models::DetectVehicleICongestionResponseBodyDataElementsBoxes>> boxes_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
