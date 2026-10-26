// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCEINSPECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCEINSPECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class RunInstanceInspectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(runId, runId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(runId, runId_);
    };
    RunInstanceInspectionResponseBody() = default ;
    RunInstanceInspectionResponseBody(const RunInstanceInspectionResponseBody &) = default ;
    RunInstanceInspectionResponseBody(RunInstanceInspectionResponseBody &&) = default ;
    RunInstanceInspectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstanceInspectionResponseBody() = default ;
    RunInstanceInspectionResponseBody& operator=(const RunInstanceInspectionResponseBody &) = default ;
    RunInstanceInspectionResponseBody& operator=(RunInstanceInspectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->runId_ == nullptr; };
    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline RunInstanceInspectionResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


  protected:
    shared_ptr<string> runId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
