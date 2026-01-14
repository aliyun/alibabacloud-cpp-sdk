// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISCOMPLETEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ISCOMPLETEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class IsCompletedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsCompletedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, IsCompletedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    IsCompletedResponseBody() = default ;
    IsCompletedResponseBody(const IsCompletedResponseBody &) = default ;
    IsCompletedResponseBody(IsCompletedResponseBody &&) = default ;
    IsCompletedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsCompletedResponseBody() = default ;
    IsCompletedResponseBody& operator=(const IsCompletedResponseBody &) = default ;
    IsCompletedResponseBody& operator=(IsCompletedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(taskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(taskShortResult, taskShortResult_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(taskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(taskShortResult, taskShortResult_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modifiedTime_ == nullptr
        && this->taskKey_ == nullptr && this->taskShortResult_ == nullptr && this->taskStatus_ == nullptr; };
      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline Data& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Data& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // taskShortResult Field Functions 
      bool hasTaskShortResult() const { return this->taskShortResult_ != nullptr;};
      void deleteTaskShortResult() { this->taskShortResult_ = nullptr;};
      inline string getTaskShortResult() const { DARABONBA_PTR_GET_DEFAULT(taskShortResult_, "") };
      inline Data& setTaskShortResult(string taskShortResult) { DARABONBA_PTR_SET_VALUE(taskShortResult_, taskShortResult) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // Modified time in milliseconds, e.g. 1711438780000.
      shared_ptr<int64_t> modifiedTime_ {};
      // The unique key of this generation task.
      shared_ptr<string> taskKey_ {};
      // Unused temporarily.
      shared_ptr<string> taskShortResult_ {};
      // The status of the report generation task. The possible values are `running`, `success`, and `error`, which mean generating, generating succeeded, and generating failed, respectively. If you encounter a result generation failure, check the model, correct the model, and then generate the result again.
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const IsCompletedResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, IsCompletedResponseBody::Data) };
    inline IsCompletedResponseBody::Data getData() { DARABONBA_PTR_GET(data_, IsCompletedResponseBody::Data) };
    inline IsCompletedResponseBody& setData(const IsCompletedResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline IsCompletedResponseBody& setData(IsCompletedResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IsCompletedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<IsCompletedResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
