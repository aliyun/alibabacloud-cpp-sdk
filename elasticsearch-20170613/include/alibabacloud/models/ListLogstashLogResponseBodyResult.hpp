// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHLOGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHLOGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashLogResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashLogResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashLogResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    ListLogstashLogResponseBodyResult() = default ;
    ListLogstashLogResponseBodyResult(const ListLogstashLogResponseBodyResult &) = default ;
    ListLogstashLogResponseBodyResult(ListLogstashLogResponseBodyResult &&) = default ;
    ListLogstashLogResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashLogResponseBodyResult() = default ;
    ListLogstashLogResponseBodyResult& operator=(const ListLogstashLogResponseBodyResult &) = default ;
    ListLogstashLogResponseBodyResult& operator=(ListLogstashLogResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->host_ != nullptr && this->instanceId_ != nullptr && this->level_ != nullptr && this->timestamp_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListLogstashLogResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListLogstashLogResponseBodyResult& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLogstashLogResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListLogstashLogResponseBodyResult& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListLogstashLogResponseBodyResult& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The IP address of the node that generates the log.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
