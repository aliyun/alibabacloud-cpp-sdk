// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPCURRENTSTEPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SKIPCURRENTSTEPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SkipCurrentStepResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipCurrentStepResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SkipCurrentStepResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    SkipCurrentStepResponseBodyData() = default ;
    SkipCurrentStepResponseBodyData(const SkipCurrentStepResponseBodyData &) = default ;
    SkipCurrentStepResponseBodyData(SkipCurrentStepResponseBodyData &&) = default ;
    SkipCurrentStepResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipCurrentStepResponseBodyData() = default ;
    SkipCurrentStepResponseBodyData& operator=(const SkipCurrentStepResponseBodyData &) = default ;
    SkipCurrentStepResponseBodyData& operator=(SkipCurrentStepResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slinkTaskId_ == nullptr; };
    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline SkipCurrentStepResponseBodyData& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    std::shared_ptr<string> slinkTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
