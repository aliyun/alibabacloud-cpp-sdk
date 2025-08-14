// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfigEquipment.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfigHeadMotion.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfigInvalidFrameMotion.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfigPeopleCount.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfigStillFrameMotion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigVcrConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigVcrConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Equipment, equipment_);
      DARABONBA_PTR_TO_JSON(HeadMotion, headMotion_);
      DARABONBA_PTR_TO_JSON(InvalidFrameMotion, invalidFrameMotion_);
      DARABONBA_PTR_TO_JSON(PeopleCount, peopleCount_);
      DARABONBA_PTR_TO_JSON(StillFrameMotion, stillFrameMotion_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigVcrConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Equipment, equipment_);
      DARABONBA_PTR_FROM_JSON(HeadMotion, headMotion_);
      DARABONBA_PTR_FROM_JSON(InvalidFrameMotion, invalidFrameMotion_);
      DARABONBA_PTR_FROM_JSON(PeopleCount, peopleCount_);
      DARABONBA_PTR_FROM_JSON(StillFrameMotion, stillFrameMotion_);
    };
    AIAgentConfigVcrConfig() = default ;
    AIAgentConfigVcrConfig(const AIAgentConfigVcrConfig &) = default ;
    AIAgentConfigVcrConfig(AIAgentConfigVcrConfig &&) = default ;
    AIAgentConfigVcrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigVcrConfig() = default ;
    AIAgentConfigVcrConfig& operator=(const AIAgentConfigVcrConfig &) = default ;
    AIAgentConfigVcrConfig& operator=(AIAgentConfigVcrConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->equipment_ != nullptr
        && this->headMotion_ != nullptr && this->invalidFrameMotion_ != nullptr && this->peopleCount_ != nullptr && this->stillFrameMotion_ != nullptr; };
    // equipment Field Functions 
    bool hasEquipment() const { return this->equipment_ != nullptr;};
    void deleteEquipment() { this->equipment_ = nullptr;};
    inline const Models::AIAgentConfigVcrConfigEquipment & equipment() const { DARABONBA_PTR_GET_CONST(equipment_, Models::AIAgentConfigVcrConfigEquipment) };
    inline Models::AIAgentConfigVcrConfigEquipment equipment() { DARABONBA_PTR_GET(equipment_, Models::AIAgentConfigVcrConfigEquipment) };
    inline AIAgentConfigVcrConfig& setEquipment(const Models::AIAgentConfigVcrConfigEquipment & equipment) { DARABONBA_PTR_SET_VALUE(equipment_, equipment) };
    inline AIAgentConfigVcrConfig& setEquipment(Models::AIAgentConfigVcrConfigEquipment && equipment) { DARABONBA_PTR_SET_RVALUE(equipment_, equipment) };


    // headMotion Field Functions 
    bool hasHeadMotion() const { return this->headMotion_ != nullptr;};
    void deleteHeadMotion() { this->headMotion_ = nullptr;};
    inline const Models::AIAgentConfigVcrConfigHeadMotion & headMotion() const { DARABONBA_PTR_GET_CONST(headMotion_, Models::AIAgentConfigVcrConfigHeadMotion) };
    inline Models::AIAgentConfigVcrConfigHeadMotion headMotion() { DARABONBA_PTR_GET(headMotion_, Models::AIAgentConfigVcrConfigHeadMotion) };
    inline AIAgentConfigVcrConfig& setHeadMotion(const Models::AIAgentConfigVcrConfigHeadMotion & headMotion) { DARABONBA_PTR_SET_VALUE(headMotion_, headMotion) };
    inline AIAgentConfigVcrConfig& setHeadMotion(Models::AIAgentConfigVcrConfigHeadMotion && headMotion) { DARABONBA_PTR_SET_RVALUE(headMotion_, headMotion) };


    // invalidFrameMotion Field Functions 
    bool hasInvalidFrameMotion() const { return this->invalidFrameMotion_ != nullptr;};
    void deleteInvalidFrameMotion() { this->invalidFrameMotion_ = nullptr;};
    inline const Models::AIAgentConfigVcrConfigInvalidFrameMotion & invalidFrameMotion() const { DARABONBA_PTR_GET_CONST(invalidFrameMotion_, Models::AIAgentConfigVcrConfigInvalidFrameMotion) };
    inline Models::AIAgentConfigVcrConfigInvalidFrameMotion invalidFrameMotion() { DARABONBA_PTR_GET(invalidFrameMotion_, Models::AIAgentConfigVcrConfigInvalidFrameMotion) };
    inline AIAgentConfigVcrConfig& setInvalidFrameMotion(const Models::AIAgentConfigVcrConfigInvalidFrameMotion & invalidFrameMotion) { DARABONBA_PTR_SET_VALUE(invalidFrameMotion_, invalidFrameMotion) };
    inline AIAgentConfigVcrConfig& setInvalidFrameMotion(Models::AIAgentConfigVcrConfigInvalidFrameMotion && invalidFrameMotion) { DARABONBA_PTR_SET_RVALUE(invalidFrameMotion_, invalidFrameMotion) };


    // peopleCount Field Functions 
    bool hasPeopleCount() const { return this->peopleCount_ != nullptr;};
    void deletePeopleCount() { this->peopleCount_ = nullptr;};
    inline const Models::AIAgentConfigVcrConfigPeopleCount & peopleCount() const { DARABONBA_PTR_GET_CONST(peopleCount_, Models::AIAgentConfigVcrConfigPeopleCount) };
    inline Models::AIAgentConfigVcrConfigPeopleCount peopleCount() { DARABONBA_PTR_GET(peopleCount_, Models::AIAgentConfigVcrConfigPeopleCount) };
    inline AIAgentConfigVcrConfig& setPeopleCount(const Models::AIAgentConfigVcrConfigPeopleCount & peopleCount) { DARABONBA_PTR_SET_VALUE(peopleCount_, peopleCount) };
    inline AIAgentConfigVcrConfig& setPeopleCount(Models::AIAgentConfigVcrConfigPeopleCount && peopleCount) { DARABONBA_PTR_SET_RVALUE(peopleCount_, peopleCount) };


    // stillFrameMotion Field Functions 
    bool hasStillFrameMotion() const { return this->stillFrameMotion_ != nullptr;};
    void deleteStillFrameMotion() { this->stillFrameMotion_ = nullptr;};
    inline const Models::AIAgentConfigVcrConfigStillFrameMotion & stillFrameMotion() const { DARABONBA_PTR_GET_CONST(stillFrameMotion_, Models::AIAgentConfigVcrConfigStillFrameMotion) };
    inline Models::AIAgentConfigVcrConfigStillFrameMotion stillFrameMotion() { DARABONBA_PTR_GET(stillFrameMotion_, Models::AIAgentConfigVcrConfigStillFrameMotion) };
    inline AIAgentConfigVcrConfig& setStillFrameMotion(const Models::AIAgentConfigVcrConfigStillFrameMotion & stillFrameMotion) { DARABONBA_PTR_SET_VALUE(stillFrameMotion_, stillFrameMotion) };
    inline AIAgentConfigVcrConfig& setStillFrameMotion(Models::AIAgentConfigVcrConfigStillFrameMotion && stillFrameMotion) { DARABONBA_PTR_SET_RVALUE(stillFrameMotion_, stillFrameMotion) };


  protected:
    std::shared_ptr<Models::AIAgentConfigVcrConfigEquipment> equipment_ = nullptr;
    std::shared_ptr<Models::AIAgentConfigVcrConfigHeadMotion> headMotion_ = nullptr;
    std::shared_ptr<Models::AIAgentConfigVcrConfigInvalidFrameMotion> invalidFrameMotion_ = nullptr;
    std::shared_ptr<Models::AIAgentConfigVcrConfigPeopleCount> peopleCount_ = nullptr;
    std::shared_ptr<Models::AIAgentConfigVcrConfigStillFrameMotion> stillFrameMotion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
