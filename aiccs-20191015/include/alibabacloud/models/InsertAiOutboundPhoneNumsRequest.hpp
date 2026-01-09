// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertAiOutboundPhoneNumsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertAiOutboundPhoneNumsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertAiOutboundPhoneNumsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    InsertAiOutboundPhoneNumsRequest() = default ;
    InsertAiOutboundPhoneNumsRequest(const InsertAiOutboundPhoneNumsRequest &) = default ;
    InsertAiOutboundPhoneNumsRequest(InsertAiOutboundPhoneNumsRequest &&) = default ;
    InsertAiOutboundPhoneNumsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertAiOutboundPhoneNumsRequest() = default ;
    InsertAiOutboundPhoneNumsRequest& operator=(const InsertAiOutboundPhoneNumsRequest &) = default ;
    InsertAiOutboundPhoneNumsRequest& operator=(InsertAiOutboundPhoneNumsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(BizData, bizData_);
        DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(BizData, bizData_);
        DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      };
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizData_ == nullptr
        && this->phoneNum_ == nullptr; };
      // bizData Field Functions 
      bool hasBizData() const { return this->bizData_ != nullptr;};
      void deleteBizData() { this->bizData_ = nullptr;};
      inline string getBizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
      inline Details& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


      // phoneNum Field Functions 
      bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
      void deletePhoneNum() { this->phoneNum_ = nullptr;};
      inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
      inline Details& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    protected:
      shared_ptr<string> bizData_ {};
      shared_ptr<string> phoneNum_ {};
    };

    virtual bool empty() const override { return this->batchVersion_ == nullptr
        && this->details_ == nullptr && this->instanceId_ == nullptr && this->taskId_ == nullptr; };
    // batchVersion Field Functions 
    bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
    void deleteBatchVersion() { this->batchVersion_ = nullptr;};
    inline int32_t getBatchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
    inline InsertAiOutboundPhoneNumsRequest& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<InsertAiOutboundPhoneNumsRequest::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<InsertAiOutboundPhoneNumsRequest::Details>) };
    inline vector<InsertAiOutboundPhoneNumsRequest::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<InsertAiOutboundPhoneNumsRequest::Details>) };
    inline InsertAiOutboundPhoneNumsRequest& setDetails(const vector<InsertAiOutboundPhoneNumsRequest::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline InsertAiOutboundPhoneNumsRequest& setDetails(vector<InsertAiOutboundPhoneNumsRequest::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InsertAiOutboundPhoneNumsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline InsertAiOutboundPhoneNumsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> batchVersion_ {};
    // This parameter is required.
    shared_ptr<vector<InsertAiOutboundPhoneNumsRequest::Details>> details_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
