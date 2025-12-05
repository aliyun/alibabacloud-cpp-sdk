// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyAssetScopeResponseBodyAssetScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyAssetScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAssetScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetScope, assetScope_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAssetScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetScope, assetScope_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyAssetScopeResponseBody() = default ;
    GetPolicyAssetScopeResponseBody(const GetPolicyAssetScopeResponseBody &) = default ;
    GetPolicyAssetScopeResponseBody(GetPolicyAssetScopeResponseBody &&) = default ;
    GetPolicyAssetScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAssetScopeResponseBody() = default ;
    GetPolicyAssetScopeResponseBody& operator=(const GetPolicyAssetScopeResponseBody &) = default ;
    GetPolicyAssetScopeResponseBody& operator=(GetPolicyAssetScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetScope_ == nullptr
        && return this->requestId_ == nullptr; };
    // assetScope Field Functions 
    bool hasAssetScope() const { return this->assetScope_ != nullptr;};
    void deleteAssetScope() { this->assetScope_ = nullptr;};
    inline const GetPolicyAssetScopeResponseBodyAssetScope & assetScope() const { DARABONBA_PTR_GET_CONST(assetScope_, GetPolicyAssetScopeResponseBodyAssetScope) };
    inline GetPolicyAssetScopeResponseBodyAssetScope assetScope() { DARABONBA_PTR_GET(assetScope_, GetPolicyAssetScopeResponseBodyAssetScope) };
    inline GetPolicyAssetScopeResponseBody& setAssetScope(const GetPolicyAssetScopeResponseBodyAssetScope & assetScope) { DARABONBA_PTR_SET_VALUE(assetScope_, assetScope) };
    inline GetPolicyAssetScopeResponseBody& setAssetScope(GetPolicyAssetScopeResponseBodyAssetScope && assetScope) { DARABONBA_PTR_SET_RVALUE(assetScope_, assetScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyAssetScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The assets to which the control policy applies.
    std::shared_ptr<GetPolicyAssetScopeResponseBodyAssetScope> assetScope_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
