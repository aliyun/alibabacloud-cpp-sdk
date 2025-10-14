// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetHttpDDoSAttackProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHttpDDoSAttackProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalMode, globalMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetHttpDDoSAttackProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalMode, globalMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetHttpDDoSAttackProtectionResponseBody() = default ;
    SetHttpDDoSAttackProtectionResponseBody(const SetHttpDDoSAttackProtectionResponseBody &) = default ;
    SetHttpDDoSAttackProtectionResponseBody(SetHttpDDoSAttackProtectionResponseBody &&) = default ;
    SetHttpDDoSAttackProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHttpDDoSAttackProtectionResponseBody() = default ;
    SetHttpDDoSAttackProtectionResponseBody& operator=(const SetHttpDDoSAttackProtectionResponseBody &) = default ;
    SetHttpDDoSAttackProtectionResponseBody& operator=(SetHttpDDoSAttackProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalMode_ == nullptr
        && return this->requestId_ == nullptr && return this->siteId_ == nullptr; };
    // globalMode Field Functions 
    bool hasGlobalMode() const { return this->globalMode_ != nullptr;};
    void deleteGlobalMode() { this->globalMode_ = nullptr;};
    inline string globalMode() const { DARABONBA_PTR_GET_DEFAULT(globalMode_, "") };
    inline SetHttpDDoSAttackProtectionResponseBody& setGlobalMode(string globalMode) { DARABONBA_PTR_SET_VALUE(globalMode_, globalMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetHttpDDoSAttackProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetHttpDDoSAttackProtectionResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The level of HTTP DDoS attack protection.
    std::shared_ptr<string> globalMode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
