// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKWORKER_HPP_
#define ALIBABACLOUD_MODELS_TASKWORKER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskWorker : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskWorker& obj) { 
      DARABONBA_PTR_TO_JSON(presetWorker, presetWorker_);
    };
    friend void from_json(const Darabonba::Json& j, TaskWorker& obj) { 
      DARABONBA_PTR_FROM_JSON(presetWorker, presetWorker_);
    };
    TaskWorker() = default ;
    TaskWorker(const TaskWorker &) = default ;
    TaskWorker(TaskWorker &&) = default ;
    TaskWorker(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskWorker() = default ;
    TaskWorker& operator=(const TaskWorker &) = default ;
    TaskWorker& operator=(TaskWorker &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->presetWorker_ != nullptr; };
    // presetWorker Field Functions 
    bool hasPresetWorker() const { return this->presetWorker_ != nullptr;};
    void deletePresetWorker() { this->presetWorker_ = nullptr;};
    inline string presetWorker() const { DARABONBA_PTR_GET_DEFAULT(presetWorker_, "") };
    inline TaskWorker& setPresetWorker(string presetWorker) { DARABONBA_PTR_SET_VALUE(presetWorker_, presetWorker) };


  protected:
    std::shared_ptr<string> presetWorker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
