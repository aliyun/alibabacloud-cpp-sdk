// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryDISyncTaskConfigProcessResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDISyncTaskConfigProcessResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskContent, taskContent_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDISyncTaskConfigProcessResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskContent, taskContent_);
    };
    QueryDISyncTaskConfigProcessResultResponseBodyData() = default ;
    QueryDISyncTaskConfigProcessResultResponseBodyData(const QueryDISyncTaskConfigProcessResultResponseBodyData &) = default ;
    QueryDISyncTaskConfigProcessResultResponseBodyData(QueryDISyncTaskConfigProcessResultResponseBodyData &&) = default ;
    QueryDISyncTaskConfigProcessResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDISyncTaskConfigProcessResultResponseBodyData() = default ;
    QueryDISyncTaskConfigProcessResultResponseBodyData& operator=(const QueryDISyncTaskConfigProcessResultResponseBodyData &) = default ;
    QueryDISyncTaskConfigProcessResultResponseBodyData& operator=(QueryDISyncTaskConfigProcessResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr && this->taskContent_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDISyncTaskConfigProcessResultResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryDISyncTaskConfigProcessResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskContent Field Functions 
    bool hasTaskContent() const { return this->taskContent_ != nullptr;};
    void deleteTaskContent() { this->taskContent_ = nullptr;};
    inline string taskContent() const { DARABONBA_PTR_GET_DEFAULT(taskContent_, "") };
    inline QueryDISyncTaskConfigProcessResultResponseBodyData& setTaskContent(string taskContent) { DARABONBA_PTR_SET_VALUE(taskContent_, taskContent) };


  protected:
    // The reason why the parameters fail to be obtained. If the parameters are obtained, the value null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the parameters are obtained. Valid values:
    // 
    // *   success: The parameters are obtained.
    // *   fail: The parameters fail to be obtained. You can view the reason for the failure and troubleshoot the issue based on the reason.
    std::shared_ptr<string> status_ = nullptr;
    // The parameters that are obtained. The parameters are used as the request parameters of the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) or [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to create or update a real-time synchronization task in Data Integration.
    std::shared_ptr<string> taskContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
