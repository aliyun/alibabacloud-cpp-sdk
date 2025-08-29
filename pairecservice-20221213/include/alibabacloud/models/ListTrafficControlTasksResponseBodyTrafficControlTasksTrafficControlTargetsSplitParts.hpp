// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSRESPONSEBODYTRAFFICCONTROLTASKSTRAFFICCONTROLTARGETSSPLITPARTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSRESPONSEBODYTRAFFICCONTROLTASKSTRAFFICCONTROLTARGETSSPLITPARTS_HPP_
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
  class ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& obj) { 
      DARABONBA_PTR_TO_JSON(SetValues, setValues_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& obj) { 
      DARABONBA_PTR_FROM_JSON(SetValues, setValues_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts() = default ;
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts(const ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts &) = default ;
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts(ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts &&) = default ;
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts() = default ;
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& operator=(const ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts &) = default ;
    ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& operator=(ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->setValues_ != nullptr
        && this->timePoints_ != nullptr; };
    // setValues Field Functions 
    bool hasSetValues() const { return this->setValues_ != nullptr;};
    void deleteSetValues() { this->setValues_ = nullptr;};
    inline const vector<int64_t> & setValues() const { DARABONBA_PTR_GET_CONST(setValues_, vector<int64_t>) };
    inline vector<int64_t> setValues() { DARABONBA_PTR_GET(setValues_, vector<int64_t>) };
    inline ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& setSetValues(const vector<int64_t> & setValues) { DARABONBA_PTR_SET_VALUE(setValues_, setValues) };
    inline ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& setSetValues(vector<int64_t> && setValues) { DARABONBA_PTR_SET_RVALUE(setValues_, setValues) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline const vector<int64_t> & timePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<int64_t>) };
    inline vector<int64_t> timePoints() { DARABONBA_PTR_GET(timePoints_, vector<int64_t>) };
    inline ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& setTimePoints(const vector<int64_t> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
    inline ListTrafficControlTasksResponseBodyTrafficControlTasksTrafficControlTargetsSplitParts& setTimePoints(vector<int64_t> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


  protected:
    std::shared_ptr<vector<int64_t>> setValues_ = nullptr;
    std::shared_ptr<vector<int64_t>> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
