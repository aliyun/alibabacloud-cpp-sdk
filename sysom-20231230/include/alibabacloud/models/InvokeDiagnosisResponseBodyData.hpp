// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEDIAGNOSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INVOKEDIAGNOSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InvokeDiagnosisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    InvokeDiagnosisResponseBodyData() = default ;
    InvokeDiagnosisResponseBodyData(const InvokeDiagnosisResponseBodyData &) = default ;
    InvokeDiagnosisResponseBodyData(InvokeDiagnosisResponseBodyData &&) = default ;
    InvokeDiagnosisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeDiagnosisResponseBodyData() = default ;
    InvokeDiagnosisResponseBodyData& operator=(const InvokeDiagnosisResponseBodyData &) = default ;
    InvokeDiagnosisResponseBodyData& operator=(InvokeDiagnosisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline InvokeDiagnosisResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
