// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDbProxyInstanceSslResponseBodyDbProxyCertListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDbProxyInstanceSslResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbProxyInstanceSslResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbProxyInstanceSslResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDbProxyInstanceSslResponseBody() = default ;
    GetDbProxyInstanceSslResponseBody(const GetDbProxyInstanceSslResponseBody &) = default ;
    GetDbProxyInstanceSslResponseBody(GetDbProxyInstanceSslResponseBody &&) = default ;
    GetDbProxyInstanceSslResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbProxyInstanceSslResponseBody() = default ;
    GetDbProxyInstanceSslResponseBody& operator=(const GetDbProxyInstanceSslResponseBody &) = default ;
    GetDbProxyInstanceSslResponseBody& operator=(GetDbProxyInstanceSslResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyCertListItems_ == nullptr
        && return this->requestId_ == nullptr; };
    // dbProxyCertListItems Field Functions 
    bool hasDbProxyCertListItems() const { return this->dbProxyCertListItems_ != nullptr;};
    void deleteDbProxyCertListItems() { this->dbProxyCertListItems_ = nullptr;};
    inline const GetDbProxyInstanceSslResponseBodyDbProxyCertListItems & dbProxyCertListItems() const { DARABONBA_PTR_GET_CONST(dbProxyCertListItems_, GetDbProxyInstanceSslResponseBodyDbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItems dbProxyCertListItems() { DARABONBA_PTR_GET(dbProxyCertListItems_, GetDbProxyInstanceSslResponseBodyDbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBody& setDbProxyCertListItems(const GetDbProxyInstanceSslResponseBodyDbProxyCertListItems & dbProxyCertListItems) { DARABONBA_PTR_SET_VALUE(dbProxyCertListItems_, dbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBody& setDbProxyCertListItems(GetDbProxyInstanceSslResponseBodyDbProxyCertListItems && dbProxyCertListItems) { DARABONBA_PTR_SET_RVALUE(dbProxyCertListItems_, dbProxyCertListItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDbProxyInstanceSslResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of SSL encryption settings.
    std::shared_ptr<GetDbProxyInstanceSslResponseBodyDbProxyCertListItems> dbProxyCertListItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
