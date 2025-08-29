// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETRESPONSEBODYSPLITPARTS_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETRESPONSEBODYSPLITPARTS_HPP_
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
  class GetTrafficControlTargetResponseBodySplitParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTargetResponseBodySplitParts& obj) { 
      DARABONBA_PTR_TO_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_TO_JSON(SetValues, setValues_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTargetResponseBodySplitParts& obj) { 
      DARABONBA_PTR_FROM_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_FROM_JSON(SetValues, setValues_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    GetTrafficControlTargetResponseBodySplitParts() = default ;
    GetTrafficControlTargetResponseBodySplitParts(const GetTrafficControlTargetResponseBodySplitParts &) = default ;
    GetTrafficControlTargetResponseBodySplitParts(GetTrafficControlTargetResponseBodySplitParts &&) = default ;
    GetTrafficControlTargetResponseBodySplitParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTargetResponseBodySplitParts() = default ;
    GetTrafficControlTargetResponseBodySplitParts& operator=(const GetTrafficControlTargetResponseBodySplitParts &) = default ;
    GetTrafficControlTargetResponseBodySplitParts& operator=(GetTrafficControlTargetResponseBodySplitParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->setPoints_ != nullptr
        && this->setValues_ != nullptr && this->timePoints_ != nullptr; };
    // setPoints Field Functions 
    bool hasSetPoints() const { return this->setPoints_ != nullptr;};
    void deleteSetPoints() { this->setPoints_ = nullptr;};
    inline const vector<int64_t> & setPoints() const { DARABONBA_PTR_GET_CONST(setPoints_, vector<int64_t>) };
    inline vector<int64_t> setPoints() { DARABONBA_PTR_GET(setPoints_, vector<int64_t>) };
    inline GetTrafficControlTargetResponseBodySplitParts& setSetPoints(const vector<int64_t> & setPoints) { DARABONBA_PTR_SET_VALUE(setPoints_, setPoints) };
    inline GetTrafficControlTargetResponseBodySplitParts& setSetPoints(vector<int64_t> && setPoints) { DARABONBA_PTR_SET_RVALUE(setPoints_, setPoints) };


    // setValues Field Functions 
    bool hasSetValues() const { return this->setValues_ != nullptr;};
    void deleteSetValues() { this->setValues_ = nullptr;};
    inline const vector<int64_t> & setValues() const { DARABONBA_PTR_GET_CONST(setValues_, vector<int64_t>) };
    inline vector<int64_t> setValues() { DARABONBA_PTR_GET(setValues_, vector<int64_t>) };
    inline GetTrafficControlTargetResponseBodySplitParts& setSetValues(const vector<int64_t> & setValues) { DARABONBA_PTR_SET_VALUE(setValues_, setValues) };
    inline GetTrafficControlTargetResponseBodySplitParts& setSetValues(vector<int64_t> && setValues) { DARABONBA_PTR_SET_RVALUE(setValues_, setValues) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline const vector<int64_t> & timePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<int64_t>) };
    inline vector<int64_t> timePoints() { DARABONBA_PTR_GET(timePoints_, vector<int64_t>) };
    inline GetTrafficControlTargetResponseBodySplitParts& setTimePoints(const vector<int64_t> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
    inline GetTrafficControlTargetResponseBodySplitParts& setTimePoints(vector<int64_t> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


  protected:
    std::shared_ptr<vector<int64_t>> setPoints_ = nullptr;
    std::shared_ptr<vector<int64_t>> setValues_ = nullptr;
    std::shared_ptr<vector<int64_t>> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
