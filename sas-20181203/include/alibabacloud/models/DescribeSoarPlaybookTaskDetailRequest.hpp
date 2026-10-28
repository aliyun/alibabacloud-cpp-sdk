// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARPLAYBOOKTASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARPLAYBOOKTASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarPlaybookTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarPlaybookTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookId, playbookId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarPlaybookTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookId, playbookId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
    };
    DescribeSoarPlaybookTaskDetailRequest() = default ;
    DescribeSoarPlaybookTaskDetailRequest(const DescribeSoarPlaybookTaskDetailRequest &) = default ;
    DescribeSoarPlaybookTaskDetailRequest(DescribeSoarPlaybookTaskDetailRequest &&) = default ;
    DescribeSoarPlaybookTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarPlaybookTaskDetailRequest() = default ;
    DescribeSoarPlaybookTaskDetailRequest& operator=(const DescribeSoarPlaybookTaskDetailRequest &) = default ;
    DescribeSoarPlaybookTaskDetailRequest& operator=(DescribeSoarPlaybookTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookId_ == nullptr
        && this->recordId_ == nullptr && this->requestUuid_ == nullptr; };
    // playbookId Field Functions 
    bool hasPlaybookId() const { return this->playbookId_ != nullptr;};
    void deletePlaybookId() { this->playbookId_ = nullptr;};
    inline int64_t getPlaybookId() const { DARABONBA_PTR_GET_DEFAULT(playbookId_, 0L) };
    inline DescribeSoarPlaybookTaskDetailRequest& setPlaybookId(int64_t playbookId) { DARABONBA_PTR_SET_VALUE(playbookId_, playbookId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DescribeSoarPlaybookTaskDetailRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string getRequestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescribeSoarPlaybookTaskDetailRequest& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


  protected:
    // The ID of the playbook.
    // >You can call the [DescribePlaybooks](https://help.aliyun.com/document_detail/3000306.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> playbookId_ {};
    // The ID of the vulnerability passed when creating the policy task.
    // >You can call the [DescribeVulList](~~DescribeVulList~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The UUID of the playbook task execution.
    // >You can call the [DescribeSoarRecords](https://help.aliyun.com/document_detail/2627455.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> requestUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
