// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULECONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULECONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ScheduleConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(intervalSecs, intervalSecs_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(intervalSecs, intervalSecs_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ScheduleConfigUnified() = default ;
    ScheduleConfigUnified(const ScheduleConfigUnified &) = default ;
    ScheduleConfigUnified(ScheduleConfigUnified &&) = default ;
    ScheduleConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleConfigUnified() = default ;
    ScheduleConfigUnified& operator=(const ScheduleConfigUnified &) = default ;
    ScheduleConfigUnified& operator=(ScheduleConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intervalSecs_ == nullptr
        && this->type_ == nullptr; };
    // intervalSecs Field Functions 
    bool hasIntervalSecs() const { return this->intervalSecs_ != nullptr;};
    void deleteIntervalSecs() { this->intervalSecs_ = nullptr;};
    inline int32_t getIntervalSecs() const { DARABONBA_PTR_GET_DEFAULT(intervalSecs_, 0) };
    inline ScheduleConfigUnified& setIntervalSecs(int32_t intervalSecs) { DARABONBA_PTR_SET_VALUE(intervalSecs_, intervalSecs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScheduleConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 调度间隔（秒），type=FIXED 时使用
    shared_ptr<int32_t> intervalSecs_ {};
    // 调度类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
