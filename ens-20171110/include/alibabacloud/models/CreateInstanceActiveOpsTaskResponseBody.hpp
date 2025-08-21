// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstanceActiveOpsTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceActiveOpsTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceActiveOpsTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceActiveOpsTask, instanceActiveOpsTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceActiveOpsTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceActiveOpsTask, instanceActiveOpsTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateInstanceActiveOpsTaskResponseBody() = default ;
    CreateInstanceActiveOpsTaskResponseBody(const CreateInstanceActiveOpsTaskResponseBody &) = default ;
    CreateInstanceActiveOpsTaskResponseBody(CreateInstanceActiveOpsTaskResponseBody &&) = default ;
    CreateInstanceActiveOpsTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceActiveOpsTaskResponseBody() = default ;
    CreateInstanceActiveOpsTaskResponseBody& operator=(const CreateInstanceActiveOpsTaskResponseBody &) = default ;
    CreateInstanceActiveOpsTaskResponseBody& operator=(CreateInstanceActiveOpsTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceActiveOpsTask_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceActiveOpsTask Field Functions 
    bool hasInstanceActiveOpsTask() const { return this->instanceActiveOpsTask_ != nullptr;};
    void deleteInstanceActiveOpsTask() { this->instanceActiveOpsTask_ = nullptr;};
    inline const InstanceActiveOpsTask & instanceActiveOpsTask() const { DARABONBA_PTR_GET_CONST(instanceActiveOpsTask_, InstanceActiveOpsTask) };
    inline InstanceActiveOpsTask instanceActiveOpsTask() { DARABONBA_PTR_GET(instanceActiveOpsTask_, InstanceActiveOpsTask) };
    inline CreateInstanceActiveOpsTaskResponseBody& setInstanceActiveOpsTask(const InstanceActiveOpsTask & instanceActiveOpsTask) { DARABONBA_PTR_SET_VALUE(instanceActiveOpsTask_, instanceActiveOpsTask) };
    inline CreateInstanceActiveOpsTaskResponseBody& setInstanceActiveOpsTask(InstanceActiveOpsTask && instanceActiveOpsTask) { DARABONBA_PTR_SET_RVALUE(instanceActiveOpsTask_, instanceActiveOpsTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceActiveOpsTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<InstanceActiveOpsTask> instanceActiveOpsTask_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
