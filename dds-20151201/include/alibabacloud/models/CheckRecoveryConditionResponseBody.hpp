// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRECOVERYCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRECOVERYCONDITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CheckRecoveryConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRecoveryConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IsValid, isValid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRecoveryConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IsValid, isValid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckRecoveryConditionResponseBody() = default ;
    CheckRecoveryConditionResponseBody(const CheckRecoveryConditionResponseBody &) = default ;
    CheckRecoveryConditionResponseBody(CheckRecoveryConditionResponseBody &&) = default ;
    CheckRecoveryConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRecoveryConditionResponseBody() = default ;
    CheckRecoveryConditionResponseBody& operator=(const CheckRecoveryConditionResponseBody &) = default ;
    CheckRecoveryConditionResponseBody& operator=(CheckRecoveryConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->isValid_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CheckRecoveryConditionResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // isValid Field Functions 
    bool hasIsValid() const { return this->isValid_ != nullptr;};
    void deleteIsValid() { this->isValid_ = nullptr;};
    inline bool getIsValid() const { DARABONBA_PTR_GET_DEFAULT(isValid_, false) };
    inline CheckRecoveryConditionResponseBody& setIsValid(bool isValid) { DARABONBA_PTR_SET_VALUE(isValid_, isValid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckRecoveryConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID
    shared_ptr<string> DBInstanceName_ {};
    // Indicates whether the data of the instance can be restored. Valid values:
    // 
    // *   **true**: The data of the instance can be restored.
    // *   **false**: The data of the instance cannot be restored.
    shared_ptr<bool> isValid_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
