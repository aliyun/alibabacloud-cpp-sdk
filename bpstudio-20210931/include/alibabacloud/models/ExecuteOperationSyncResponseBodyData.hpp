// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEOPERATIONSYNCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEOPERATIONSYNCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ExecuteOperationSyncResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteOperationSyncResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Arguments, arguments_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteOperationSyncResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ExecuteOperationSyncResponseBodyData() = default ;
    ExecuteOperationSyncResponseBodyData(const ExecuteOperationSyncResponseBodyData &) = default ;
    ExecuteOperationSyncResponseBodyData(ExecuteOperationSyncResponseBodyData &&) = default ;
    ExecuteOperationSyncResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteOperationSyncResponseBodyData() = default ;
    ExecuteOperationSyncResponseBodyData& operator=(const ExecuteOperationSyncResponseBodyData &) = default ;
    ExecuteOperationSyncResponseBodyData& operator=(ExecuteOperationSyncResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arguments_ == nullptr
        && return this->message_ == nullptr && return this->operationId_ == nullptr && return this->status_ == nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline string arguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
    inline ExecuteOperationSyncResponseBodyData& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteOperationSyncResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ExecuteOperationSyncResponseBodyData& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExecuteOperationSyncResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> arguments_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> operationId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
