// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeBatchResultCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeBatchResultCountRequest() = default ;
    DescribeBatchResultCountRequest(const DescribeBatchResultCountRequest &) = default ;
    DescribeBatchResultCountRequest(DescribeBatchResultCountRequest &&) = default ;
    DescribeBatchResultCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultCountRequest() = default ;
    DescribeBatchResultCountRequest& operator=(const DescribeBatchResultCountRequest &) = default ;
    DescribeBatchResultCountRequest& operator=(DescribeBatchResultCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchType_ == nullptr
        && this->lang_ == nullptr && this->taskId_ == nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline DescribeBatchResultCountRequest& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeBatchResultCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeBatchResultCountRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The type of the batch operation. Valid values:
    // 
    // *   **DOMAIN_ADD**: adds domain names in batches.
    // *   **DOMAIN_DEL**: deletes domain names in batches.
    // *   **RR_ADD**: adds Domain Name System (DNS) records in batches.
    // *   **RR_DEL**: deletes DNS records in batches.
    // 
    // >  If you do not specify this parameter, filtering is not required.
    shared_ptr<string> batchType_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The task ID.
    // 
    // >  If you specify TaskId, the execution result of the specified task is returned. If you do not specify TaskId, the execution result of the last task is returned.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
