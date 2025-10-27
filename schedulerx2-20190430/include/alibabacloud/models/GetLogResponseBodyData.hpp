// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
    };
    GetLogResponseBodyData() = default ;
    GetLogResponseBodyData(const GetLogResponseBodyData &) = default ;
    GetLogResponseBodyData(GetLogResponseBodyData &&) = default ;
    GetLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogResponseBodyData() = default ;
    GetLogResponseBodyData& operator=(const GetLogResponseBodyData &) = default ;
    GetLogResponseBodyData& operator=(GetLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline GetLogResponseBodyData& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetLogResponseBodyData& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


  protected:
    // The logs. The value is an array of strings.
    std::shared_ptr<vector<string>> logs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
