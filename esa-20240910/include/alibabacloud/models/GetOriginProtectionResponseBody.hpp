// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyCurrentIPWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyDiffIPWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyLatestIPWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentIPWhitelist, currentIPWhitelist_);
      DARABONBA_PTR_TO_JSON(DiffIPWhitelist, diffIPWhitelist_);
      DARABONBA_PTR_TO_JSON(LatestIPWhitelist, latestIPWhitelist_);
      DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_TO_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_TO_JSON(OriginProtection, originProtection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentIPWhitelist, currentIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(DiffIPWhitelist, diffIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(LatestIPWhitelist, latestIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_FROM_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_FROM_JSON(OriginProtection, originProtection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetOriginProtectionResponseBody() = default ;
    GetOriginProtectionResponseBody(const GetOriginProtectionResponseBody &) = default ;
    GetOriginProtectionResponseBody(GetOriginProtectionResponseBody &&) = default ;
    GetOriginProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBody() = default ;
    GetOriginProtectionResponseBody& operator=(const GetOriginProtectionResponseBody &) = default ;
    GetOriginProtectionResponseBody& operator=(GetOriginProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentIPWhitelist_ == nullptr
        && return this->diffIPWhitelist_ == nullptr && return this->latestIPWhitelist_ == nullptr && return this->needUpdate_ == nullptr && return this->originConverge_ == nullptr && return this->originProtection_ == nullptr
        && return this->requestId_ == nullptr && return this->siteId_ == nullptr; };
    // currentIPWhitelist Field Functions 
    bool hasCurrentIPWhitelist() const { return this->currentIPWhitelist_ != nullptr;};
    void deleteCurrentIPWhitelist() { this->currentIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBodyCurrentIPWhitelist & currentIPWhitelist() const { DARABONBA_PTR_GET_CONST(currentIPWhitelist_, GetOriginProtectionResponseBodyCurrentIPWhitelist) };
    inline GetOriginProtectionResponseBodyCurrentIPWhitelist currentIPWhitelist() { DARABONBA_PTR_GET(currentIPWhitelist_, GetOriginProtectionResponseBodyCurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setCurrentIPWhitelist(const GetOriginProtectionResponseBodyCurrentIPWhitelist & currentIPWhitelist) { DARABONBA_PTR_SET_VALUE(currentIPWhitelist_, currentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setCurrentIPWhitelist(GetOriginProtectionResponseBodyCurrentIPWhitelist && currentIPWhitelist) { DARABONBA_PTR_SET_RVALUE(currentIPWhitelist_, currentIPWhitelist) };


    // diffIPWhitelist Field Functions 
    bool hasDiffIPWhitelist() const { return this->diffIPWhitelist_ != nullptr;};
    void deleteDiffIPWhitelist() { this->diffIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBodyDiffIPWhitelist & diffIPWhitelist() const { DARABONBA_PTR_GET_CONST(diffIPWhitelist_, GetOriginProtectionResponseBodyDiffIPWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist diffIPWhitelist() { DARABONBA_PTR_GET(diffIPWhitelist_, GetOriginProtectionResponseBodyDiffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setDiffIPWhitelist(const GetOriginProtectionResponseBodyDiffIPWhitelist & diffIPWhitelist) { DARABONBA_PTR_SET_VALUE(diffIPWhitelist_, diffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setDiffIPWhitelist(GetOriginProtectionResponseBodyDiffIPWhitelist && diffIPWhitelist) { DARABONBA_PTR_SET_RVALUE(diffIPWhitelist_, diffIPWhitelist) };


    // latestIPWhitelist Field Functions 
    bool hasLatestIPWhitelist() const { return this->latestIPWhitelist_ != nullptr;};
    void deleteLatestIPWhitelist() { this->latestIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBodyLatestIPWhitelist & latestIPWhitelist() const { DARABONBA_PTR_GET_CONST(latestIPWhitelist_, GetOriginProtectionResponseBodyLatestIPWhitelist) };
    inline GetOriginProtectionResponseBodyLatestIPWhitelist latestIPWhitelist() { DARABONBA_PTR_GET(latestIPWhitelist_, GetOriginProtectionResponseBodyLatestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setLatestIPWhitelist(const GetOriginProtectionResponseBodyLatestIPWhitelist & latestIPWhitelist) { DARABONBA_PTR_SET_VALUE(latestIPWhitelist_, latestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setLatestIPWhitelist(GetOriginProtectionResponseBodyLatestIPWhitelist && latestIPWhitelist) { DARABONBA_PTR_SET_RVALUE(latestIPWhitelist_, latestIPWhitelist) };


    // needUpdate Field Functions 
    bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
    void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
    inline bool needUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
    inline GetOriginProtectionResponseBody& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


    // originConverge Field Functions 
    bool hasOriginConverge() const { return this->originConverge_ != nullptr;};
    void deleteOriginConverge() { this->originConverge_ = nullptr;};
    inline string originConverge() const { DARABONBA_PTR_GET_DEFAULT(originConverge_, "") };
    inline GetOriginProtectionResponseBody& setOriginConverge(string originConverge) { DARABONBA_PTR_SET_VALUE(originConverge_, originConverge) };


    // originProtection Field Functions 
    bool hasOriginProtection() const { return this->originProtection_ != nullptr;};
    void deleteOriginProtection() { this->originProtection_ = nullptr;};
    inline string originProtection() const { DARABONBA_PTR_GET_DEFAULT(originProtection_, "") };
    inline GetOriginProtectionResponseBody& setOriginProtection(string originProtection) { DARABONBA_PTR_SET_VALUE(originProtection_, originProtection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOriginProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetOriginProtectionResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The IP whitelist for origin protection used by the website.
    std::shared_ptr<GetOriginProtectionResponseBodyCurrentIPWhitelist> currentIPWhitelist_ = nullptr;
    // The IP whitelist for origin protection that has been updated.
    std::shared_ptr<GetOriginProtectionResponseBodyDiffIPWhitelist> diffIPWhitelist_ = nullptr;
    // The latest IP whitelist for origin protection.
    std::shared_ptr<GetOriginProtectionResponseBodyLatestIPWhitelist> latestIPWhitelist_ = nullptr;
    // Indicates whether the IP whitelist for origin protection needs to be updated. If the currently used IP whitelist is different from the latest IP whitelist, it needs to be updated, and the value is true.
    // 
    // *   true: The update is required.
    // *   false: No update is required.
    std::shared_ptr<bool> needUpdate_ = nullptr;
    // Indicates whether IP convergence is enabled.
    // 
    // *   on
    // *   off
    std::shared_ptr<string> originConverge_ = nullptr;
    // Indicates whether origin protection is enabled.
    // 
    // *   on
    // *   off
    std::shared_ptr<string> originProtection_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
