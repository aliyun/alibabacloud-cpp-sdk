// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECDCVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECDCVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradeCDCVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeCDCVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeCDCVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpgradeCDCVersionResponseBody() = default ;
    UpgradeCDCVersionResponseBody(const UpgradeCDCVersionResponseBody &) = default ;
    UpgradeCDCVersionResponseBody(UpgradeCDCVersionResponseBody &&) = default ;
    UpgradeCDCVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeCDCVersionResponseBody() = default ;
    UpgradeCDCVersionResponseBody& operator=(const UpgradeCDCVersionResponseBody &) = default ;
    UpgradeCDCVersionResponseBody& operator=(UpgradeCDCVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
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
      class TaskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
          DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        TaskList() = default ;
        TaskList(const TaskList &) = default ;
        TaskList(TaskList &&) = default ;
        TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskList() = default ;
        TaskList& operator=(const TaskList &) = default ;
        TaskList& operator=(TaskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbInstanceName_ == nullptr
        && this->taskId_ == nullptr; };
        // dbInstanceName Field Functions 
        bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
        void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
        inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
        inline TaskList& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
        inline TaskList& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> dbInstanceName_ {};
        shared_ptr<int32_t> taskId_ {};
      };

      virtual bool empty() const override { return this->minorVersion_ == nullptr
        && this->taskList_ == nullptr; };
      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline Data& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // taskList Field Functions 
      bool hasTaskList() const { return this->taskList_ != nullptr;};
      void deleteTaskList() { this->taskList_ = nullptr;};
      inline const vector<Data::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<Data::TaskList>) };
      inline vector<Data::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<Data::TaskList>) };
      inline Data& setTaskList(const vector<Data::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
      inline Data& setTaskList(vector<Data::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    protected:
      shared_ptr<string> minorVersion_ {};
      shared_ptr<vector<Data::TaskList>> taskList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpgradeCDCVersionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpgradeCDCVersionResponseBody::Data) };
    inline UpgradeCDCVersionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpgradeCDCVersionResponseBody::Data) };
    inline UpgradeCDCVersionResponseBody& setData(const UpgradeCDCVersionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpgradeCDCVersionResponseBody& setData(UpgradeCDCVersionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpgradeCDCVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeCDCVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpgradeCDCVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<UpgradeCDCVersionResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
