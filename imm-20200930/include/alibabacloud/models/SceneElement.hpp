// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCENEELEMENT_HPP_
#define ALIBABACLOUD_MODELS_SCENEELEMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SceneElement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SceneElement& obj) { 
      DARABONBA_PTR_TO_JSON(FrameTimes, frameTimes_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, SceneElement& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameTimes, frameTimes_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    SceneElement() = default ;
    SceneElement(const SceneElement &) = default ;
    SceneElement(SceneElement &&) = default ;
    SceneElement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SceneElement() = default ;
    SceneElement& operator=(const SceneElement &) = default ;
    SceneElement& operator=(SceneElement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frameTimes_ != nullptr
        && this->timeRange_ != nullptr; };
    // frameTimes Field Functions 
    bool hasFrameTimes() const { return this->frameTimes_ != nullptr;};
    void deleteFrameTimes() { this->frameTimes_ = nullptr;};
    inline const vector<int64_t> & frameTimes() const { DARABONBA_PTR_GET_CONST(frameTimes_, vector<int64_t>) };
    inline vector<int64_t> frameTimes() { DARABONBA_PTR_GET(frameTimes_, vector<int64_t>) };
    inline SceneElement& setFrameTimes(const vector<int64_t> & frameTimes) { DARABONBA_PTR_SET_VALUE(frameTimes_, frameTimes) };
    inline SceneElement& setFrameTimes(vector<int64_t> && frameTimes) { DARABONBA_PTR_SET_RVALUE(frameTimes_, frameTimes) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> timeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline SceneElement& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline SceneElement& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<vector<int64_t>> frameTimes_ = nullptr;
    std::shared_ptr<vector<int64_t>> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
