// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeLogConfigRequest() = default ;
    DescribeLogConfigRequest(const DescribeLogConfigRequest &) = default ;
    DescribeLogConfigRequest(DescribeLogConfigRequest &&) = default ;
    DescribeLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogConfigRequest() = default ;
    DescribeLogConfigRequest& operator=(const DescribeLogConfigRequest &) = default ;
    DescribeLogConfigRequest& operator=(DescribeLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logType_ == nullptr
        && return this->securityToken_ == nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeLogConfigRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeLogConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The log type.
    // 
    // Valid values:
    // 
    // *   PROVIDER
    std::shared_ptr<string> logType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
