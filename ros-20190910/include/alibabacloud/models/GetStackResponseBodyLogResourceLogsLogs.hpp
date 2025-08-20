// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOGRESOURCELOGSLOGS_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOGRESOURCELOGSLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyLogResourceLogsLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyLogResourceLogsLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyLogResourceLogsLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    GetStackResponseBodyLogResourceLogsLogs() = default ;
    GetStackResponseBodyLogResourceLogsLogs(const GetStackResponseBodyLogResourceLogsLogs &) = default ;
    GetStackResponseBodyLogResourceLogsLogs(GetStackResponseBodyLogResourceLogsLogs &&) = default ;
    GetStackResponseBodyLogResourceLogsLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyLogResourceLogsLogs() = default ;
    GetStackResponseBodyLogResourceLogsLogs& operator=(const GetStackResponseBodyLogResourceLogsLogs &) = default ;
    GetStackResponseBodyLogResourceLogsLogs& operator=(GetStackResponseBodyLogResourceLogsLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->keys_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetStackResponseBodyLogResourceLogsLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline GetStackResponseBodyLogResourceLogsLogs& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline GetStackResponseBodyLogResourceLogsLogs& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


  protected:
    // The content of a resource log.
    std::shared_ptr<string> content_ = nullptr;
    // The keywords of a resource log.
    std::shared_ptr<vector<string>> keys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
