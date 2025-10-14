// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODYSYSTEMLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODYSYSTEMLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListSystemLogsResponseBodySystemLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemLogsResponseBodySystemLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemLogsResponseBodySystemLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    ListSystemLogsResponseBodySystemLogs() = default ;
    ListSystemLogsResponseBodySystemLogs(const ListSystemLogsResponseBodySystemLogs &) = default ;
    ListSystemLogsResponseBodySystemLogs(ListSystemLogsResponseBodySystemLogs &&) = default ;
    ListSystemLogsResponseBodySystemLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemLogsResponseBodySystemLogs() = default ;
    ListSystemLogsResponseBodySystemLogs& operator=(const ListSystemLogsResponseBodySystemLogs &) = default ;
    ListSystemLogsResponseBodySystemLogs& operator=(ListSystemLogsResponseBodySystemLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->level_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListSystemLogsResponseBodySystemLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListSystemLogsResponseBodySystemLogs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListSystemLogsResponseBodySystemLogs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
