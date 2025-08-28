// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnSslServerLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnSslServerLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnSslServerLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
    };
    DescribeVpnSslServerLogsResponseBodyData() = default ;
    DescribeVpnSslServerLogsResponseBodyData(const DescribeVpnSslServerLogsResponseBodyData &) = default ;
    DescribeVpnSslServerLogsResponseBodyData(DescribeVpnSslServerLogsResponseBodyData &&) = default ;
    DescribeVpnSslServerLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnSslServerLogsResponseBodyData() = default ;
    DescribeVpnSslServerLogsResponseBodyData& operator=(const DescribeVpnSslServerLogsResponseBodyData &) = default ;
    DescribeVpnSslServerLogsResponseBodyData& operator=(DescribeVpnSslServerLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logs_ != nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline DescribeVpnSslServerLogsResponseBodyData& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeVpnSslServerLogsResponseBodyData& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


  protected:
    std::shared_ptr<vector<string>> logs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
