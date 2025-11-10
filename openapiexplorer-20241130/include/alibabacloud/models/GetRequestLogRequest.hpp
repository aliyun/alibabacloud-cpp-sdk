// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(logRequestId, logRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(logRequestId, logRequestId_);
    };
    GetRequestLogRequest() = default ;
    GetRequestLogRequest(const GetRequestLogRequest &) = default ;
    GetRequestLogRequest(GetRequestLogRequest &&) = default ;
    GetRequestLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogRequest() = default ;
    GetRequestLogRequest& operator=(const GetRequestLogRequest &) = default ;
    GetRequestLogRequest& operator=(GetRequestLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logRequestId_ == nullptr; };
    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline GetRequestLogRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


  protected:
    // The request ID returned by the API for which you want to query the log. The value is the universally unique identifiers (UUID) of the API request and must be uppercase.
    // 
    // This parameter is required.
    std::shared_ptr<string> logRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
