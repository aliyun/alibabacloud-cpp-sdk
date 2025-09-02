// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORCREATINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORCREATINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GenerateDISyncTaskConfigForCreatingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDISyncTaskConfigForCreatingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDISyncTaskConfigForCreatingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GenerateDISyncTaskConfigForCreatingResponseBodyData() = default ;
    GenerateDISyncTaskConfigForCreatingResponseBodyData(const GenerateDISyncTaskConfigForCreatingResponseBodyData &) = default ;
    GenerateDISyncTaskConfigForCreatingResponseBodyData(GenerateDISyncTaskConfigForCreatingResponseBodyData &&) = default ;
    GenerateDISyncTaskConfigForCreatingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDISyncTaskConfigForCreatingResponseBodyData() = default ;
    GenerateDISyncTaskConfigForCreatingResponseBodyData& operator=(const GenerateDISyncTaskConfigForCreatingResponseBodyData &) = default ;
    GenerateDISyncTaskConfigForCreatingResponseBodyData& operator=(GenerateDISyncTaskConfigForCreatingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->processId_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateDISyncTaskConfigForCreatingResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline int64_t processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
    inline GenerateDISyncTaskConfigForCreatingResponseBodyData& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GenerateDISyncTaskConfigForCreatingResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the ID of the asynchronous thread fails to be generated. If the ID is successfully generated, no value is returned for this parameter.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the asynchronous thread. You can call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. The parameters are used to create a synchronization task in Data Integration.
    std::shared_ptr<int64_t> processId_ = nullptr;
    // Indicates whether the ID of the asynchronous thread is generated. Valid values: Valid values:
    // 
    // *   success: indicates that the ID of the asynchronous thread is generated.
    // *   fail: indicates that the ID of the asynchronous thread fails to be generated. You can view the reason for the failure and troubleshoot the issue based on the reason.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
