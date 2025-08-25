// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATASPLITVIDEOPARTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATASPLITVIDEOPARTRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsResponseBodyDataSplitVideoPartResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsResponseBodyDataSplitVideoPartResults& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(By, by_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Theme, theme_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsResponseBodyDataSplitVideoPartResults& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(By, by_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Theme, theme_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SplitVideoPartsResponseBodyDataSplitVideoPartResults() = default ;
    SplitVideoPartsResponseBodyDataSplitVideoPartResults(const SplitVideoPartsResponseBodyDataSplitVideoPartResults &) = default ;
    SplitVideoPartsResponseBodyDataSplitVideoPartResults(SplitVideoPartsResponseBodyDataSplitVideoPartResults &&) = default ;
    SplitVideoPartsResponseBodyDataSplitVideoPartResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsResponseBodyDataSplitVideoPartResults() = default ;
    SplitVideoPartsResponseBodyDataSplitVideoPartResults& operator=(const SplitVideoPartsResponseBodyDataSplitVideoPartResults &) = default ;
    SplitVideoPartsResponseBodyDataSplitVideoPartResults& operator=(SplitVideoPartsResponseBodyDataSplitVideoPartResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->by_ != nullptr && this->endTime_ != nullptr && this->theme_ != nullptr && this->type_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline float beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0.0) };
    inline SplitVideoPartsResponseBodyDataSplitVideoPartResults& setBeginTime(float beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // by Field Functions 
    bool hasBy() const { return this->by_ != nullptr;};
    void deleteBy() { this->by_ = nullptr;};
    inline string by() const { DARABONBA_PTR_GET_DEFAULT(by_, "") };
    inline SplitVideoPartsResponseBodyDataSplitVideoPartResults& setBy(string by) { DARABONBA_PTR_SET_VALUE(by_, by) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline SplitVideoPartsResponseBodyDataSplitVideoPartResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline string theme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
    inline SplitVideoPartsResponseBodyDataSplitVideoPartResults& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SplitVideoPartsResponseBodyDataSplitVideoPartResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<float> beginTime_ = nullptr;
    std::shared_ptr<string> by_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<string> theme_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
