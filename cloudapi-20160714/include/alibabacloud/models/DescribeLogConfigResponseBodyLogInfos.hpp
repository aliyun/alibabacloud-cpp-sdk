// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODYLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODYLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogConfigResponseBodyLogInfosLogInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeLogConfigResponseBodyLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogConfigResponseBodyLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogConfigResponseBodyLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
    };
    DescribeLogConfigResponseBodyLogInfos() = default ;
    DescribeLogConfigResponseBodyLogInfos(const DescribeLogConfigResponseBodyLogInfos &) = default ;
    DescribeLogConfigResponseBodyLogInfos(DescribeLogConfigResponseBodyLogInfos &&) = default ;
    DescribeLogConfigResponseBodyLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogConfigResponseBodyLogInfos() = default ;
    DescribeLogConfigResponseBodyLogInfos& operator=(const DescribeLogConfigResponseBodyLogInfos &) = default ;
    DescribeLogConfigResponseBodyLogInfos& operator=(DescribeLogConfigResponseBodyLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfo_ == nullptr; };
    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo> & logInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo>) };
    inline vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo> logInfo() { DARABONBA_PTR_GET(logInfo_, vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo>) };
    inline DescribeLogConfigResponseBodyLogInfos& setLogInfo(const vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo> & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline DescribeLogConfigResponseBodyLogInfos& setLogInfo(vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo> && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLogConfigResponseBodyLogInfosLogInfo>> logInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
