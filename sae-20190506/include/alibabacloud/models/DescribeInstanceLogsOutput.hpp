// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELOGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELOGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebLogEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeInstanceLogsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceLogsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(WebLogEntrys, webLogEntrys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceLogsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(WebLogEntrys, webLogEntrys_);
    };
    DescribeInstanceLogsOutput() = default ;
    DescribeInstanceLogsOutput(const DescribeInstanceLogsOutput &) = default ;
    DescribeInstanceLogsOutput(DescribeInstanceLogsOutput &&) = default ;
    DescribeInstanceLogsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceLogsOutput() = default ;
    DescribeInstanceLogsOutput& operator=(const DescribeInstanceLogsOutput &) = default ;
    DescribeInstanceLogsOutput& operator=(DescribeInstanceLogsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->webLogEntrys_ != nullptr; };
    // webLogEntrys Field Functions 
    bool hasWebLogEntrys() const { return this->webLogEntrys_ != nullptr;};
    void deleteWebLogEntrys() { this->webLogEntrys_ = nullptr;};
    inline const vector<WebLogEntry> & webLogEntrys() const { DARABONBA_PTR_GET_CONST(webLogEntrys_, vector<WebLogEntry>) };
    inline vector<WebLogEntry> webLogEntrys() { DARABONBA_PTR_GET(webLogEntrys_, vector<WebLogEntry>) };
    inline DescribeInstanceLogsOutput& setWebLogEntrys(const vector<WebLogEntry> & webLogEntrys) { DARABONBA_PTR_SET_VALUE(webLogEntrys_, webLogEntrys) };
    inline DescribeInstanceLogsOutput& setWebLogEntrys(vector<WebLogEntry> && webLogEntrys) { DARABONBA_PTR_SET_RVALUE(webLogEntrys_, webLogEntrys) };


  protected:
    std::shared_ptr<vector<WebLogEntry>> webLogEntrys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
