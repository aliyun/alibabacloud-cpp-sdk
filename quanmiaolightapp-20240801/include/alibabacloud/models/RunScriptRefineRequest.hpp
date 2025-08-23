// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTREFINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTREFINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptRefineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptRefineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptRefineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    RunScriptRefineRequest() = default ;
    RunScriptRefineRequest(const RunScriptRefineRequest &) = default ;
    RunScriptRefineRequest(RunScriptRefineRequest &&) = default ;
    RunScriptRefineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptRefineRequest() = default ;
    RunScriptRefineRequest& operator=(const RunScriptRefineRequest &) = default ;
    RunScriptRefineRequest& operator=(RunScriptRefineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunScriptRefineRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
