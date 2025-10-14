// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSOPERATELOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSOPERATELOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsOperateLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsOperateLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsOperateLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    DescribePdnsOperateLogsResponseBodyLogs() = default ;
    DescribePdnsOperateLogsResponseBodyLogs(const DescribePdnsOperateLogsResponseBodyLogs &) = default ;
    DescribePdnsOperateLogsResponseBodyLogs(DescribePdnsOperateLogsResponseBodyLogs &&) = default ;
    DescribePdnsOperateLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsOperateLogsResponseBodyLogs() = default ;
    DescribePdnsOperateLogsResponseBodyLogs& operator=(const DescribePdnsOperateLogsResponseBodyLogs &) = default ;
    DescribePdnsOperateLogsResponseBodyLogs& operator=(DescribePdnsOperateLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->operateTime_ == nullptr && return this->type_ == nullptr && return this->content_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribePdnsOperateLogsResponseBodyLogs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline DescribePdnsOperateLogsResponseBodyLogs& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePdnsOperateLogsResponseBodyLogs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribePdnsOperateLogsResponseBodyLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> operateTime_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
