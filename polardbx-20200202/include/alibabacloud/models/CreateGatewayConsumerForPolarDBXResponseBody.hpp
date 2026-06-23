// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYCONSUMERFORPOLARDBXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYCONSUMERFORPOLARDBXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateGatewayConsumerForPolarDBXResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayConsumerForPolarDBXResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayConsumerForPolarDBXResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateGatewayConsumerForPolarDBXResponseBody() = default ;
    CreateGatewayConsumerForPolarDBXResponseBody(const CreateGatewayConsumerForPolarDBXResponseBody &) = default ;
    CreateGatewayConsumerForPolarDBXResponseBody(CreateGatewayConsumerForPolarDBXResponseBody &&) = default ;
    CreateGatewayConsumerForPolarDBXResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayConsumerForPolarDBXResponseBody() = default ;
    CreateGatewayConsumerForPolarDBXResponseBody& operator=(const CreateGatewayConsumerForPolarDBXResponseBody &) = default ;
    CreateGatewayConsumerForPolarDBXResponseBody& operator=(CreateGatewayConsumerForPolarDBXResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateGatewayConsumerForPolarDBXResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGatewayConsumerForPolarDBXResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline CreateGatewayConsumerForPolarDBXResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance name.
    shared_ptr<string> DBInstanceName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The backend task ID.
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
