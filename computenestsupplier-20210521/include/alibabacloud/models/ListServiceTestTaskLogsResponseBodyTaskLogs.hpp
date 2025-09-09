// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODYTASKLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODYTASKLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestTaskLogsResponseBodyTaskLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestTaskLogsResponseBodyTaskLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestTaskLogsResponseBodyTaskLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListServiceTestTaskLogsResponseBodyTaskLogs() = default ;
    ListServiceTestTaskLogsResponseBodyTaskLogs(const ListServiceTestTaskLogsResponseBodyTaskLogs &) = default ;
    ListServiceTestTaskLogsResponseBodyTaskLogs(ListServiceTestTaskLogsResponseBodyTaskLogs &&) = default ;
    ListServiceTestTaskLogsResponseBodyTaskLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestTaskLogsResponseBodyTaskLogs() = default ;
    ListServiceTestTaskLogsResponseBodyTaskLogs& operator=(const ListServiceTestTaskLogsResponseBodyTaskLogs &) = default ;
    ListServiceTestTaskLogsResponseBodyTaskLogs& operator=(ListServiceTestTaskLogsResponseBodyTaskLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->timestamp_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListServiceTestTaskLogsResponseBodyTaskLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListServiceTestTaskLogsResponseBodyTaskLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The log content.
    std::shared_ptr<string> content_ = nullptr;
    // The UTC timestamp when the response is returned.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
