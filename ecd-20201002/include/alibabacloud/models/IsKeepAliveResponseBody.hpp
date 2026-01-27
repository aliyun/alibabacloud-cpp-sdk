// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISKEEPALIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ISKEEPALIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class IsKeepAliveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsKeepAliveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsKeepAlive, isKeepAlive_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, IsKeepAliveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsKeepAlive, isKeepAlive_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    IsKeepAliveResponseBody() = default ;
    IsKeepAliveResponseBody(const IsKeepAliveResponseBody &) = default ;
    IsKeepAliveResponseBody(IsKeepAliveResponseBody &&) = default ;
    IsKeepAliveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsKeepAliveResponseBody() = default ;
    IsKeepAliveResponseBody& operator=(const IsKeepAliveResponseBody &) = default ;
    IsKeepAliveResponseBody& operator=(IsKeepAliveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isKeepAlive_ == nullptr
        && this->officeSiteId_ == nullptr && this->requestId_ == nullptr && this->tenantId_ == nullptr; };
    // isKeepAlive Field Functions 
    bool hasIsKeepAlive() const { return this->isKeepAlive_ != nullptr;};
    void deleteIsKeepAlive() { this->isKeepAlive_ = nullptr;};
    inline bool getIsKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(isKeepAlive_, false) };
    inline IsKeepAliveResponseBody& setIsKeepAlive(bool isKeepAlive) { DARABONBA_PTR_SET_VALUE(isKeepAlive_, isKeepAlive) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline IsKeepAliveResponseBody& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IsKeepAliveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline IsKeepAliveResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Identifies whether the user should remain logged on to the client.
    shared_ptr<bool> isKeepAlive_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The unique ID (UID) of the Alibaba Cloud account.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
