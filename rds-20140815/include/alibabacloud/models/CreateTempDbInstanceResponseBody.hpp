// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateTempDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTempDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTempDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
    };
    CreateTempDBInstanceResponseBody() = default ;
    CreateTempDBInstanceResponseBody(const CreateTempDBInstanceResponseBody &) = default ;
    CreateTempDBInstanceResponseBody(CreateTempDBInstanceResponseBody &&) = default ;
    CreateTempDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTempDBInstanceResponseBody() = default ;
    CreateTempDBInstanceResponseBody& operator=(const CreateTempDBInstanceResponseBody &) = default ;
    CreateTempDBInstanceResponseBody& operator=(CreateTempDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tempDBInstanceId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTempDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tempDBInstanceId Field Functions 
    bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
    void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
    inline string getTempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
    inline CreateTempDBInstanceResponseBody& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The temporary instance ID.
    shared_ptr<string> tempDBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
