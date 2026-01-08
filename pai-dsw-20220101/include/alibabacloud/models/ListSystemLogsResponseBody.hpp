// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListSystemLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(SystemLogs, systemLogs_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(SystemLogs, systemLogs_);
    };
    ListSystemLogsResponseBody() = default ;
    ListSystemLogsResponseBody(const ListSystemLogsResponseBody &) = default ;
    ListSystemLogsResponseBody(ListSystemLogsResponseBody &&) = default ;
    ListSystemLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemLogsResponseBody() = default ;
    ListSystemLogsResponseBody& operator=(const ListSystemLogsResponseBody &) = default ;
    ListSystemLogsResponseBody& operator=(ListSystemLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemLogs& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, SystemLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      SystemLogs() = default ;
      SystemLogs(const SystemLogs &) = default ;
      SystemLogs(SystemLogs &&) = default ;
      SystemLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemLogs() = default ;
      SystemLogs& operator=(const SystemLogs &) = default ;
      SystemLogs& operator=(SystemLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->level_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline SystemLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline SystemLogs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline SystemLogs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      shared_ptr<string> content_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->offset_ == nullptr
        && this->systemLogs_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline ListSystemLogsResponseBody& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // systemLogs Field Functions 
    bool hasSystemLogs() const { return this->systemLogs_ != nullptr;};
    void deleteSystemLogs() { this->systemLogs_ = nullptr;};
    inline const vector<ListSystemLogsResponseBody::SystemLogs> & getSystemLogs() const { DARABONBA_PTR_GET_CONST(systemLogs_, vector<ListSystemLogsResponseBody::SystemLogs>) };
    inline vector<ListSystemLogsResponseBody::SystemLogs> getSystemLogs() { DARABONBA_PTR_GET(systemLogs_, vector<ListSystemLogsResponseBody::SystemLogs>) };
    inline ListSystemLogsResponseBody& setSystemLogs(const vector<ListSystemLogsResponseBody::SystemLogs> & systemLogs) { DARABONBA_PTR_SET_VALUE(systemLogs_, systemLogs) };
    inline ListSystemLogsResponseBody& setSystemLogs(vector<ListSystemLogsResponseBody::SystemLogs> && systemLogs) { DARABONBA_PTR_SET_RVALUE(systemLogs_, systemLogs) };


  protected:
    shared_ptr<string> offset_ {};
    shared_ptr<vector<ListSystemLogsResponseBody::SystemLogs>> systemLogs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
