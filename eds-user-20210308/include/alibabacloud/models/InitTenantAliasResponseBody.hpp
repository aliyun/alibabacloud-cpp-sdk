// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitTenantAliasResponseBodyAliasInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class InitTenantAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitTenantAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasInfo, aliasInfo_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InitTenantAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasInfo, aliasInfo_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InitTenantAliasResponseBody() = default ;
    InitTenantAliasResponseBody(const InitTenantAliasResponseBody &) = default ;
    InitTenantAliasResponseBody(InitTenantAliasResponseBody &&) = default ;
    InitTenantAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitTenantAliasResponseBody() = default ;
    InitTenantAliasResponseBody& operator=(const InitTenantAliasResponseBody &) = default ;
    InitTenantAliasResponseBody& operator=(InitTenantAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasInfo_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // aliasInfo Field Functions 
    bool hasAliasInfo() const { return this->aliasInfo_ != nullptr;};
    void deleteAliasInfo() { this->aliasInfo_ = nullptr;};
    inline const InitTenantAliasResponseBodyAliasInfo & aliasInfo() const { DARABONBA_PTR_GET_CONST(aliasInfo_, InitTenantAliasResponseBodyAliasInfo) };
    inline InitTenantAliasResponseBodyAliasInfo aliasInfo() { DARABONBA_PTR_GET(aliasInfo_, InitTenantAliasResponseBodyAliasInfo) };
    inline InitTenantAliasResponseBody& setAliasInfo(const InitTenantAliasResponseBodyAliasInfo & aliasInfo) { DARABONBA_PTR_SET_VALUE(aliasInfo_, aliasInfo) };
    inline InitTenantAliasResponseBody& setAliasInfo(InitTenantAliasResponseBodyAliasInfo && aliasInfo) { DARABONBA_PTR_SET_RVALUE(aliasInfo_, aliasInfo) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline InitTenantAliasResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitTenantAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<InitTenantAliasResponseBodyAliasInfo> aliasInfo_ = nullptr;
    // The generated ID of the organization.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
