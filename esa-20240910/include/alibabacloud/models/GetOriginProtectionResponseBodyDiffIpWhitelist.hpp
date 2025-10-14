// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYDIFFIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYDIFFIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyDiffIPWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyDiffIPWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AddedIPWhitelist, addedIPWhitelist_);
      DARABONBA_PTR_TO_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
      DARABONBA_PTR_TO_JSON(RemovedIPWhitelist, removedIPWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyDiffIPWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedIPWhitelist, addedIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
      DARABONBA_PTR_FROM_JSON(RemovedIPWhitelist, removedIPWhitelist_);
    };
    GetOriginProtectionResponseBodyDiffIPWhitelist() = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelist(const GetOriginProtectionResponseBodyDiffIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelist(GetOriginProtectionResponseBodyDiffIPWhitelist &&) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyDiffIPWhitelist() = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelist& operator=(const GetOriginProtectionResponseBodyDiffIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelist& operator=(GetOriginProtectionResponseBodyDiffIPWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedIPWhitelist_ == nullptr
        && return this->noChangeIpWhitelist_ == nullptr && return this->removedIPWhitelist_ == nullptr; };
    // addedIPWhitelist Field Functions 
    bool hasAddedIPWhitelist() const { return this->addedIPWhitelist_ != nullptr;};
    void deleteAddedIPWhitelist() { this->addedIPWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist & addedIPWhitelist() const { DARABONBA_PTR_GET_CONST(addedIPWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist) };
    inline Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist addedIPWhitelist() { DARABONBA_PTR_GET(addedIPWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setAddedIPWhitelist(const Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist & addedIPWhitelist) { DARABONBA_PTR_SET_VALUE(addedIPWhitelist_, addedIPWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setAddedIPWhitelist(Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist && addedIPWhitelist) { DARABONBA_PTR_SET_RVALUE(addedIPWhitelist_, addedIPWhitelist) };


    // noChangeIpWhitelist Field Functions 
    bool hasNoChangeIpWhitelist() const { return this->noChangeIpWhitelist_ != nullptr;};
    void deleteNoChangeIpWhitelist() { this->noChangeIpWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist & noChangeIpWhitelist() const { DARABONBA_PTR_GET_CONST(noChangeIpWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist) };
    inline Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist noChangeIpWhitelist() { DARABONBA_PTR_GET(noChangeIpWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setNoChangeIpWhitelist(const Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist & noChangeIpWhitelist) { DARABONBA_PTR_SET_VALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setNoChangeIpWhitelist(Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist && noChangeIpWhitelist) { DARABONBA_PTR_SET_RVALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };


    // removedIPWhitelist Field Functions 
    bool hasRemovedIPWhitelist() const { return this->removedIPWhitelist_ != nullptr;};
    void deleteRemovedIPWhitelist() { this->removedIPWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist & removedIPWhitelist() const { DARABONBA_PTR_GET_CONST(removedIPWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist) };
    inline Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist removedIPWhitelist() { DARABONBA_PTR_GET(removedIPWhitelist_, Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setRemovedIPWhitelist(const Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist & removedIPWhitelist) { DARABONBA_PTR_SET_VALUE(removedIPWhitelist_, removedIPWhitelist) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelist& setRemovedIPWhitelist(Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist && removedIPWhitelist) { DARABONBA_PTR_SET_RVALUE(removedIPWhitelist_, removedIPWhitelist) };


  protected:
    // The new IP whitelist for origin protection.
    std::shared_ptr<Models::GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist> addedIPWhitelist_ = nullptr;
    // The IP whitelist for origin protection that remains unchanged.
    std::shared_ptr<Models::GetOriginProtectionResponseBodyDiffIPWhitelistNoChangeIpWhitelist> noChangeIpWhitelist_ = nullptr;
    // The IP whitelist for origin protection that has been deleted.
    std::shared_ptr<Models::GetOriginProtectionResponseBodyDiffIPWhitelistRemovedIPWhitelist> removedIPWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
