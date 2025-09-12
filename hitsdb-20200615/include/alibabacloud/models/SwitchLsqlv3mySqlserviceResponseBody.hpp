// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHLSQLV3MYSQLSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SWITCHLSQLV3MYSQLSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class SwitchLSQLV3MySQLServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchLSQLV3MySQLServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchLSQLV3MySQLServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SwitchLSQLV3MySQLServiceResponseBody() = default ;
    SwitchLSQLV3MySQLServiceResponseBody(const SwitchLSQLV3MySQLServiceResponseBody &) = default ;
    SwitchLSQLV3MySQLServiceResponseBody(SwitchLSQLV3MySQLServiceResponseBody &&) = default ;
    SwitchLSQLV3MySQLServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchLSQLV3MySQLServiceResponseBody() = default ;
    SwitchLSQLV3MySQLServiceResponseBody& operator=(const SwitchLSQLV3MySQLServiceResponseBody &) = default ;
    SwitchLSQLV3MySQLServiceResponseBody& operator=(SwitchLSQLV3MySQLServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline SwitchLSQLV3MySQLServiceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SwitchLSQLV3MySQLServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
