// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertAiOutboundPhoneNumsRequestDetails.hpp>
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
    virtual bool empty() const override { this->batchVersion_ != nullptr
        && this->details_ != nullptr && this->instanceId_ != nullptr && this->taskId_ != nullptr; };
    // batchVersion Field Functions 
    bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
    void deleteBatchVersion() { this->batchVersion_ = nullptr;};
    inline int32_t batchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
    inline InsertAiOutboundPhoneNumsRequest& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<InsertAiOutboundPhoneNumsRequestDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<InsertAiOutboundPhoneNumsRequestDetails>) };
    inline vector<InsertAiOutboundPhoneNumsRequestDetails> details() { DARABONBA_PTR_GET(details_, vector<InsertAiOutboundPhoneNumsRequestDetails>) };
    inline InsertAiOutboundPhoneNumsRequest& setDetails(const vector<InsertAiOutboundPhoneNumsRequestDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline InsertAiOutboundPhoneNumsRequest& setDetails(vector<InsertAiOutboundPhoneNumsRequestDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InsertAiOutboundPhoneNumsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline InsertAiOutboundPhoneNumsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> batchVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<InsertAiOutboundPhoneNumsRequestDetails>> details_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
