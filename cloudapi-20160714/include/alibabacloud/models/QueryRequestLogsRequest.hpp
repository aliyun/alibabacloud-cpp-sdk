// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREQUESTLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREQUESTLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class QueryRequestLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRequestLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RequestLogId, requestLogId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRequestLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestLogId, requestLogId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    QueryRequestLogsRequest() = default ;
    QueryRequestLogsRequest(const QueryRequestLogsRequest &) = default ;
    QueryRequestLogsRequest(QueryRequestLogsRequest &&) = default ;
    QueryRequestLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRequestLogsRequest() = default ;
    QueryRequestLogsRequest& operator=(const QueryRequestLogsRequest &) = default ;
    QueryRequestLogsRequest& operator=(QueryRequestLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestLogId_ == nullptr
        && return this->securityToken_ == nullptr; };
    // requestLogId Field Functions 
    bool hasRequestLogId() const { return this->requestLogId_ != nullptr;};
    void deleteRequestLogId() { this->requestLogId_ = nullptr;};
    inline string requestLogId() const { DARABONBA_PTR_GET_DEFAULT(requestLogId_, "") };
    inline QueryRequestLogsRequest& setRequestLogId(string requestLogId) { DARABONBA_PTR_SET_VALUE(requestLogId_, requestLogId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline QueryRequestLogsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the request log.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestLogId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
