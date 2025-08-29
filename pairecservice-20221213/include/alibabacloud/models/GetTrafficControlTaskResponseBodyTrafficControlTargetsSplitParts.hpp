// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKRESPONSEBODYTRAFFICCONTROLTARGETSSPLITPARTS_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKRESPONSEBODYTRAFFICCONTROLTARGETSSPLITPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& obj) { 
      DARABONBA_PTR_TO_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_TO_JSON(SetValues, setValues_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& obj) { 
      DARABONBA_PTR_FROM_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_FROM_JSON(SetValues, setValues_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts() = default ;
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts(const GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts &) = default ;
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts(GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts &&) = default ;
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts() = default ;
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& operator=(const GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts &) = default ;
    GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& operator=(GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->setPoints_ != nullptr
        && this->setValues_ != nullptr && this->timePoints_ != nullptr; };
    // setPoints Field Functions 
    bool hasSetPoints() const { return this->setPoints_ != nullptr;};
    void deleteSetPoints() { this->setPoints_ = nullptr;};
    inline const vector<int32_t> & setPoints() const { DARABONBA_PTR_GET_CONST(setPoints_, vector<int32_t>) };
    inline vector<int32_t> setPoints() { DARABONBA_PTR_GET(setPoints_, vector<int32_t>) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setSetPoints(const vector<int32_t> & setPoints) { DARABONBA_PTR_SET_VALUE(setPoints_, setPoints) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setSetPoints(vector<int32_t> && setPoints) { DARABONBA_PTR_SET_RVALUE(setPoints_, setPoints) };


    // setValues Field Functions 
    bool hasSetValues() const { return this->setValues_ != nullptr;};
    void deleteSetValues() { this->setValues_ = nullptr;};
    inline const vector<int64_t> & setValues() const { DARABONBA_PTR_GET_CONST(setValues_, vector<int64_t>) };
    inline vector<int64_t> setValues() { DARABONBA_PTR_GET(setValues_, vector<int64_t>) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setSetValues(const vector<int64_t> & setValues) { DARABONBA_PTR_SET_VALUE(setValues_, setValues) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setSetValues(vector<int64_t> && setValues) { DARABONBA_PTR_SET_RVALUE(setValues_, setValues) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline const vector<int32_t> & timePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<int32_t>) };
    inline vector<int32_t> timePoints() { DARABONBA_PTR_GET(timePoints_, vector<int32_t>) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setTimePoints(const vector<int32_t> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
    inline GetTrafficControlTaskResponseBodyTrafficControlTargetsSplitParts& setTimePoints(vector<int32_t> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


  protected:
    std::shared_ptr<vector<int32_t>> setPoints_ = nullptr;
    std::shared_ptr<vector<int64_t>> setValues_ = nullptr;
    std::shared_ptr<vector<int32_t>> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
