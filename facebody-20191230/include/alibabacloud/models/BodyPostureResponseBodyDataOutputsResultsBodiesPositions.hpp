// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTSBODIESPOSITIONS_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTSBODIESPOSITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureResponseBodyDataOutputsResultsBodiesPositions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureResponseBodyDataOutputsResultsBodiesPositions& obj) { 
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureResponseBodyDataOutputsResultsBodiesPositions& obj) { 
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions() = default ;
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions(const BodyPostureResponseBodyDataOutputsResultsBodiesPositions &) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions(BodyPostureResponseBodyDataOutputsResultsBodiesPositions &&) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureResponseBodyDataOutputsResultsBodiesPositions() = default ;
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions& operator=(const BodyPostureResponseBodyDataOutputsResultsBodiesPositions &) = default ;
    BodyPostureResponseBodyDataOutputsResultsBodiesPositions& operator=(BodyPostureResponseBodyDataOutputsResultsBodiesPositions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->points_ == nullptr; };
    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<float> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<float>) };
    inline vector<float> points() { DARABONBA_PTR_GET(points_, vector<float>) };
    inline BodyPostureResponseBodyDataOutputsResultsBodiesPositions& setPoints(const vector<float> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline BodyPostureResponseBodyDataOutputsResultsBodiesPositions& setPoints(vector<float> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    std::shared_ptr<vector<float>> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
