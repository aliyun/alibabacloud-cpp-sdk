// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITQUALITYWATCHTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITQUALITYWATCHTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitQualityWatchTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitQualityWatchTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitQualityWatchTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitQualityWatchTasksRequest() = default ;
    SubmitQualityWatchTasksRequest(const SubmitQualityWatchTasksRequest &) = default ;
    SubmitQualityWatchTasksRequest(SubmitQualityWatchTasksRequest &&) = default ;
    SubmitQualityWatchTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitQualityWatchTasksRequest() = default ;
    SubmitQualityWatchTasksRequest& operator=(const SubmitQualityWatchTasksRequest &) = default ;
    SubmitQualityWatchTasksRequest& operator=(SubmitQualityWatchTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_TO_JSON(WatchIdList, watchIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_FROM_JSON(WatchIdList, watchIdList_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->partitionExpression_ == nullptr && this->watchIdList_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline SubmitCommand& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // partitionExpression Field Functions 
      bool hasPartitionExpression() const { return this->partitionExpression_ != nullptr;};
      void deletePartitionExpression() { this->partitionExpression_ = nullptr;};
      inline string getPartitionExpression() const { DARABONBA_PTR_GET_DEFAULT(partitionExpression_, "") };
      inline SubmitCommand& setPartitionExpression(string partitionExpression) { DARABONBA_PTR_SET_VALUE(partitionExpression_, partitionExpression) };


      // watchIdList Field Functions 
      bool hasWatchIdList() const { return this->watchIdList_ != nullptr;};
      void deleteWatchIdList() { this->watchIdList_ = nullptr;};
      inline const vector<int64_t> & getWatchIdList() const { DARABONBA_PTR_GET_CONST(watchIdList_, vector<int64_t>) };
      inline vector<int64_t> getWatchIdList() { DARABONBA_PTR_GET(watchIdList_, vector<int64_t>) };
      inline SubmitCommand& setWatchIdList(const vector<int64_t> & watchIdList) { DARABONBA_PTR_SET_VALUE(watchIdList_, watchIdList) };
      inline SubmitCommand& setWatchIdList(vector<int64_t> && watchIdList) { DARABONBA_PTR_SET_RVALUE(watchIdList_, watchIdList) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> partitionExpression_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> watchIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitQualityWatchTasksRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitQualityWatchTasksRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitQualityWatchTasksRequest::SubmitCommand) };
    inline SubmitQualityWatchTasksRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitQualityWatchTasksRequest::SubmitCommand) };
    inline SubmitQualityWatchTasksRequest& setSubmitCommand(const SubmitQualityWatchTasksRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitQualityWatchTasksRequest& setSubmitCommand(SubmitQualityWatchTasksRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<SubmitQualityWatchTasksRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
