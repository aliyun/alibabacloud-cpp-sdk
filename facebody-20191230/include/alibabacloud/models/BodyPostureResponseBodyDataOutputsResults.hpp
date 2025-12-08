// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BodyPostureResponseBodyDataOutputsResultsBodies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureResponseBodyDataOutputsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureResponseBodyDataOutputsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Bodies, bodies_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureResponseBodyDataOutputsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Bodies, bodies_);
    };
    BodyPostureResponseBodyDataOutputsResults() = default ;
    BodyPostureResponseBodyDataOutputsResults(const BodyPostureResponseBodyDataOutputsResults &) = default ;
    BodyPostureResponseBodyDataOutputsResults(BodyPostureResponseBodyDataOutputsResults &&) = default ;
    BodyPostureResponseBodyDataOutputsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureResponseBodyDataOutputsResults() = default ;
    BodyPostureResponseBodyDataOutputsResults& operator=(const BodyPostureResponseBodyDataOutputsResults &) = default ;
    BodyPostureResponseBodyDataOutputsResults& operator=(BodyPostureResponseBodyDataOutputsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodies_ == nullptr; };
    // bodies Field Functions 
    bool hasBodies() const { return this->bodies_ != nullptr;};
    void deleteBodies() { this->bodies_ = nullptr;};
    inline const vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies> & bodies() const { DARABONBA_PTR_GET_CONST(bodies_, vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies>) };
    inline vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies> bodies() { DARABONBA_PTR_GET(bodies_, vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies>) };
    inline BodyPostureResponseBodyDataOutputsResults& setBodies(const vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies> & bodies) { DARABONBA_PTR_SET_VALUE(bodies_, bodies) };
    inline BodyPostureResponseBodyDataOutputsResults& setBodies(vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies> && bodies) { DARABONBA_PTR_SET_RVALUE(bodies_, bodies) };


  protected:
    std::shared_ptr<vector<Models::BodyPostureResponseBodyDataOutputsResultsBodies>> bodies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
