// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetActionPlanResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActionPlanResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, GetActionPlanResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    GetActionPlanResponseBodyResources() = default ;
    GetActionPlanResponseBodyResources(const GetActionPlanResponseBodyResources &) = default ;
    GetActionPlanResponseBodyResources(GetActionPlanResponseBodyResources &&) = default ;
    GetActionPlanResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActionPlanResponseBodyResources() = default ;
    GetActionPlanResponseBodyResources& operator=(const GetActionPlanResponseBodyResources &) = default ;
    GetActionPlanResponseBodyResources& operator=(GetActionPlanResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cores_ != nullptr
        && this->memory_ != nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline float cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
    inline GetActionPlanResponseBodyResources& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline GetActionPlanResponseBodyResources& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<float> cores_ = nullptr;
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
