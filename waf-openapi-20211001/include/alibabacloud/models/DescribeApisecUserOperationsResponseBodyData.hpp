// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECUSEROPERATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECUSEROPERATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecUserOperationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecUserOperationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FromStatus, fromStatus_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(OperationSource, operationSource_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(ToStatus, toStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecUserOperationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FromStatus, fromStatus_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(OperationSource, operationSource_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(ToStatus, toStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeApisecUserOperationsResponseBodyData() = default ;
    DescribeApisecUserOperationsResponseBodyData(const DescribeApisecUserOperationsResponseBodyData &) = default ;
    DescribeApisecUserOperationsResponseBodyData(DescribeApisecUserOperationsResponseBodyData &&) = default ;
    DescribeApisecUserOperationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecUserOperationsResponseBodyData() = default ;
    DescribeApisecUserOperationsResponseBodyData& operator=(const DescribeApisecUserOperationsResponseBodyData &) = default ;
    DescribeApisecUserOperationsResponseBodyData& operator=(DescribeApisecUserOperationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromStatus_ == nullptr
        && return this->note_ == nullptr && return this->objectId_ == nullptr && return this->operationSource_ == nullptr && return this->time_ == nullptr && return this->toStatus_ == nullptr
        && return this->type_ == nullptr && return this->userId_ == nullptr; };
    // fromStatus Field Functions 
    bool hasFromStatus() const { return this->fromStatus_ != nullptr;};
    void deleteFromStatus() { this->fromStatus_ = nullptr;};
    inline string fromStatus() const { DARABONBA_PTR_GET_DEFAULT(fromStatus_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setFromStatus(string fromStatus) { DARABONBA_PTR_SET_VALUE(fromStatus_, fromStatus) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // operationSource Field Functions 
    bool hasOperationSource() const { return this->operationSource_ != nullptr;};
    void deleteOperationSource() { this->operationSource_ = nullptr;};
    inline string operationSource() const { DARABONBA_PTR_GET_DEFAULT(operationSource_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setOperationSource(string operationSource) { DARABONBA_PTR_SET_VALUE(operationSource_, operationSource) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeApisecUserOperationsResponseBodyData& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // toStatus Field Functions 
    bool hasToStatus() const { return this->toStatus_ != nullptr;};
    void deleteToStatus() { this->toStatus_ = nullptr;};
    inline string toStatus() const { DARABONBA_PTR_GET_DEFAULT(toStatus_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setToStatus(string toStatus) { DARABONBA_PTR_SET_VALUE(toStatus_, toStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeApisecUserOperationsResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The state before the operation.
    // 
    // Valid values of the risk state:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **toBeFixed**
    // *   **fixed**
    // *   **ignored**
    // 
    // Valid values of the event state:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **ignored**
    std::shared_ptr<string> fromStatus_ = nullptr;
    // The remarks.
    std::shared_ptr<string> note_ = nullptr;
    // The object ID of the operation record.
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> operationSource_ = nullptr;
    // The time at which the operation was performed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The state after the operation.
    // 
    // Valid values of the risk state:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **toBeFixed**
    // *   **fixed**
    // *   **ignored**
    // 
    // Valid values of the event state:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **ignored**
    std::shared_ptr<string> toStatus_ = nullptr;
    // The type of the operation record. Valid values:
    // 
    // *   **abnormal**: risk detection
    // *   **event**: security event
    std::shared_ptr<string> type_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
