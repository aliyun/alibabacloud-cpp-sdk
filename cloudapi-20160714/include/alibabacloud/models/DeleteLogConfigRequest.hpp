// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DeleteLogConfigRequest() = default ;
    DeleteLogConfigRequest(const DeleteLogConfigRequest &) = default ;
    DeleteLogConfigRequest(DeleteLogConfigRequest &&) = default ;
    DeleteLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogConfigRequest() = default ;
    DeleteLogConfigRequest& operator=(const DeleteLogConfigRequest &) = default ;
    DeleteLogConfigRequest& operator=(DeleteLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logType_ == nullptr
        && this->securityToken_ == nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DeleteLogConfigRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteLogConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The log type. Valid values: **log** and **survey**.
    shared_ptr<string> logType_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
