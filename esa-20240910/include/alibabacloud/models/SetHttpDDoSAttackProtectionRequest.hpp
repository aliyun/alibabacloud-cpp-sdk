// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetHttpDDoSAttackProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHttpDDoSAttackProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalMode, globalMode_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetHttpDDoSAttackProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalMode, globalMode_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetHttpDDoSAttackProtectionRequest() = default ;
    SetHttpDDoSAttackProtectionRequest(const SetHttpDDoSAttackProtectionRequest &) = default ;
    SetHttpDDoSAttackProtectionRequest(SetHttpDDoSAttackProtectionRequest &&) = default ;
    SetHttpDDoSAttackProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHttpDDoSAttackProtectionRequest() = default ;
    SetHttpDDoSAttackProtectionRequest& operator=(const SetHttpDDoSAttackProtectionRequest &) = default ;
    SetHttpDDoSAttackProtectionRequest& operator=(SetHttpDDoSAttackProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalMode_ == nullptr
        && this->siteId_ == nullptr; };
    // globalMode Field Functions 
    bool hasGlobalMode() const { return this->globalMode_ != nullptr;};
    void deleteGlobalMode() { this->globalMode_ = nullptr;};
    inline string getGlobalMode() const { DARABONBA_PTR_GET_DEFAULT(globalMode_, "") };
    inline SetHttpDDoSAttackProtectionRequest& setGlobalMode(string globalMode) { DARABONBA_PTR_SET_VALUE(globalMode_, globalMode) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetHttpDDoSAttackProtectionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The level of HTTP DDoS attack protection. Valid values:
    // 
    // *   **very weak**: very loose.
    // *   **weak**: loose.
    // *   **default**: normal.
    // *   **hard**: strict.
    // 
    // This parameter is required.
    shared_ptr<string> globalMode_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
