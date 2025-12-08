// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAPERSONINFOEARPHONE_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAPERSONINFOEARPHONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationResponseBodyDataPersonInfoEarPhone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationResponseBodyDataPersonInfoEarPhone& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationResponseBodyDataPersonInfoEarPhone& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    MonitorExaminationResponseBodyDataPersonInfoEarPhone() = default ;
    MonitorExaminationResponseBodyDataPersonInfoEarPhone(const MonitorExaminationResponseBodyDataPersonInfoEarPhone &) = default ;
    MonitorExaminationResponseBodyDataPersonInfoEarPhone(MonitorExaminationResponseBodyDataPersonInfoEarPhone &&) = default ;
    MonitorExaminationResponseBodyDataPersonInfoEarPhone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationResponseBodyDataPersonInfoEarPhone() = default ;
    MonitorExaminationResponseBodyDataPersonInfoEarPhone& operator=(const MonitorExaminationResponseBodyDataPersonInfoEarPhone &) = default ;
    MonitorExaminationResponseBodyDataPersonInfoEarPhone& operator=(MonitorExaminationResponseBodyDataPersonInfoEarPhone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr
        && return this->threshold_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline MonitorExaminationResponseBodyDataPersonInfoEarPhone& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline MonitorExaminationResponseBodyDataPersonInfoEarPhone& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
