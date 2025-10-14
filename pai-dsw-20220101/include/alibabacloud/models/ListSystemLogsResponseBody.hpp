// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemLogsResponseBodySystemLogs.hpp>
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
    virtual bool empty() const override { return this->offset_ == nullptr
        && return this->systemLogs_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline ListSystemLogsResponseBody& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // systemLogs Field Functions 
    bool hasSystemLogs() const { return this->systemLogs_ != nullptr;};
    void deleteSystemLogs() { this->systemLogs_ = nullptr;};
    inline const vector<ListSystemLogsResponseBodySystemLogs> & systemLogs() const { DARABONBA_PTR_GET_CONST(systemLogs_, vector<ListSystemLogsResponseBodySystemLogs>) };
    inline vector<ListSystemLogsResponseBodySystemLogs> systemLogs() { DARABONBA_PTR_GET(systemLogs_, vector<ListSystemLogsResponseBodySystemLogs>) };
    inline ListSystemLogsResponseBody& setSystemLogs(const vector<ListSystemLogsResponseBodySystemLogs> & systemLogs) { DARABONBA_PTR_SET_VALUE(systemLogs_, systemLogs) };
    inline ListSystemLogsResponseBody& setSystemLogs(vector<ListSystemLogsResponseBodySystemLogs> && systemLogs) { DARABONBA_PTR_SET_RVALUE(systemLogs_, systemLogs) };


  protected:
    std::shared_ptr<string> offset_ = nullptr;
    std::shared_ptr<vector<ListSystemLogsResponseBodySystemLogs>> systemLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
