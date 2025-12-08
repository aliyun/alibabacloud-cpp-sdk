// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTSBODIES_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTSBODIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BodyPostureResponseBodyDataOutputsResultsBodiesPositions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureResponseBodyDataOutputsResultsBodies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureResponseBodyDataOutputsResultsBodies& obj) { 
      DARABONBA_PTR_TO_JSON(Confident, confident_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Positions, positions_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureResponseBodyDataOutputsResultsBodies& obj) { 
      DARABONBA_PTR_FROM_JSON(Confident, confident_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Positions, positions_);
    };
    BodyPostureResponseBodyDataOutputsResultsBodies() = default ;
    BodyPostureResponseBodyDataOutputsResultsBodies(const BodyPostureResponseBodyDataOutputsResultsBodies &) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodies(BodyPostureResponseBodyDataOutputsResultsBodies &&) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureResponseBodyDataOutputsResultsBodies() = default ;
    BodyPostureResponseBodyDataOutputsResultsBodies& operator=(const BodyPostureResponseBodyDataOutputsResultsBodies &) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodies& operator=(BodyPostureResponseBodyDataOutputsResultsBodies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confident_ == nullptr
        && return this->label_ == nullptr && return this->positions_ == nullptr; };
    // confident Field Functions 
    bool hasConfident() const { return this->confident_ != nullptr;};
    void deleteConfident() { this->confident_ = nullptr;};
    inline float confident() const { DARABONBA_PTR_GET_DEFAULT(confident_, 0.0) };
    inline BodyPostureResponseBodyDataOutputsResultsBodies& setConfident(float confident) { DARABONBA_PTR_SET_VALUE(confident_, confident) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline BodyPostureResponseBodyDataOutputsResultsBodies& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // positions Field Functions 
    bool hasPositions() const { return this->positions_ != nullptr;};
    void deletePositions() { this->positions_ = nullptr;};
    inline const vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions> & positions() const { DARABONBA_PTR_GET_CONST(positions_, vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions>) };
    inline vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions> positions() { DARABONBA_PTR_GET(positions_, vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions>) };
    inline BodyPostureResponseBodyDataOutputsResultsBodies& setPositions(const vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions> & positions) { DARABONBA_PTR_SET_VALUE(positions_, positions) };
    inline BodyPostureResponseBodyDataOutputsResultsBodies& setPositions(vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions> && positions) { DARABONBA_PTR_SET_RVALUE(positions_, positions) };


  protected:
    std::shared_ptr<float> confident_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<vector<Models::BodyPostureResponseBodyDataOutputsResultsBodiesPositions>> positions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
