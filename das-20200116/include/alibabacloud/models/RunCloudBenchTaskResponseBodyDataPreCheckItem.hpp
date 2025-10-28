// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODYDATAPRECHECKITEM_HPP_
#define ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODYDATAPRECHECKITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class RunCloudBenchTaskResponseBodyDataPreCheckItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCloudBenchTaskResponseBodyDataPreCheckItem& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RunCloudBenchTaskResponseBodyDataPreCheckItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    RunCloudBenchTaskResponseBodyDataPreCheckItem() = default ;
    RunCloudBenchTaskResponseBodyDataPreCheckItem(const RunCloudBenchTaskResponseBodyDataPreCheckItem &) = default ;
    RunCloudBenchTaskResponseBodyDataPreCheckItem(RunCloudBenchTaskResponseBodyDataPreCheckItem &&) = default ;
    RunCloudBenchTaskResponseBodyDataPreCheckItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCloudBenchTaskResponseBodyDataPreCheckItem() = default ;
    RunCloudBenchTaskResponseBodyDataPreCheckItem& operator=(const RunCloudBenchTaskResponseBodyDataPreCheckItem &) = default ;
    RunCloudBenchTaskResponseBodyDataPreCheckItem& operator=(RunCloudBenchTaskResponseBodyDataPreCheckItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->details_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->order_ == nullptr && return this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunCloudBenchTaskResponseBodyDataPreCheckItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The detailed information of the check item.
    std::shared_ptr<string> details_ = nullptr;
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the check item. Valid values:
    // 
    // * **SqlArchiveStatusChecker**: checks whether SQL Explorer is available.
    // * **BenchClientEnvChecker**: checks whether the runtime environment for programs on the stress testing client is available.
    // * **SpecChecker**: checks whether the destination instance type and the instance type of the stress testing client support this API operation.
    // * **SourceInstanceChecker**: checks whether the account of the source instance is available and whether the source instance is connected to the destination instance.
    // * **BenchTargetChecker**: checks whether the account of the destination instance is available and whether the source instance is connected to the destination instance.
    std::shared_ptr<string> name_ = nullptr;
    // The sequence number of the check item. Valid values: **0** to **10**.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **SUCCESS**: The task is successful.
    // *   **IGNORED**: The task is ignored.
    // *   **RUNNING**: The task is running.
    // *   **EXCEPTION**: An error occurred.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
