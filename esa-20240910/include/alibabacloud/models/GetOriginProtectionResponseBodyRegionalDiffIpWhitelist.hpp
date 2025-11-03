// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalDiffIPWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AddedIPRegionWhitelist, addedIPRegionWhitelist_);
      DARABONBA_PTR_TO_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
      DARABONBA_PTR_TO_JSON(RemovedIPRegionWhitelist, removedIPRegionWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedIPRegionWhitelist, addedIPRegionWhitelist_);
      DARABONBA_PTR_FROM_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
      DARABONBA_PTR_FROM_JSON(RemovedIPRegionWhitelist, removedIPRegionWhitelist_);
    };
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist(GetOriginProtectionResponseBodyRegionalDiffIPWhitelist &&) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalDiffIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& operator=(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& operator=(GetOriginProtectionResponseBodyRegionalDiffIPWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedIPRegionWhitelist_ == nullptr
        && return this->noChangeIpWhitelist_ == nullptr && return this->removedIPRegionWhitelist_ == nullptr; };
    // addedIPRegionWhitelist Field Functions 
    bool hasAddedIPRegionWhitelist() const { return this->addedIPRegionWhitelist_ != nullptr;};
    void deleteAddedIPRegionWhitelist() { this->addedIPRegionWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist & addedIPRegionWhitelist() const { DARABONBA_PTR_GET_CONST(addedIPRegionWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist) };
    inline Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist addedIPRegionWhitelist() { DARABONBA_PTR_GET(addedIPRegionWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setAddedIPRegionWhitelist(const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist & addedIPRegionWhitelist) { DARABONBA_PTR_SET_VALUE(addedIPRegionWhitelist_, addedIPRegionWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setAddedIPRegionWhitelist(Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist && addedIPRegionWhitelist) { DARABONBA_PTR_SET_RVALUE(addedIPRegionWhitelist_, addedIPRegionWhitelist) };


    // noChangeIpWhitelist Field Functions 
    bool hasNoChangeIpWhitelist() const { return this->noChangeIpWhitelist_ != nullptr;};
    void deleteNoChangeIpWhitelist() { this->noChangeIpWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist & noChangeIpWhitelist() const { DARABONBA_PTR_GET_CONST(noChangeIpWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist) };
    inline Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist noChangeIpWhitelist() { DARABONBA_PTR_GET(noChangeIpWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setNoChangeIpWhitelist(const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist & noChangeIpWhitelist) { DARABONBA_PTR_SET_VALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setNoChangeIpWhitelist(Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist && noChangeIpWhitelist) { DARABONBA_PTR_SET_RVALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };


    // removedIPRegionWhitelist Field Functions 
    bool hasRemovedIPRegionWhitelist() const { return this->removedIPRegionWhitelist_ != nullptr;};
    void deleteRemovedIPRegionWhitelist() { this->removedIPRegionWhitelist_ = nullptr;};
    inline const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist & removedIPRegionWhitelist() const { DARABONBA_PTR_GET_CONST(removedIPRegionWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist) };
    inline Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist removedIPRegionWhitelist() { DARABONBA_PTR_GET(removedIPRegionWhitelist_, Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setRemovedIPRegionWhitelist(const Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist & removedIPRegionWhitelist) { DARABONBA_PTR_SET_VALUE(removedIPRegionWhitelist_, removedIPRegionWhitelist) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelist& setRemovedIPRegionWhitelist(Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist && removedIPRegionWhitelist) { DARABONBA_PTR_SET_RVALUE(removedIPRegionWhitelist_, removedIPRegionWhitelist) };


  protected:
    std::shared_ptr<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist> addedIPRegionWhitelist_ = nullptr;
    std::shared_ptr<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist> noChangeIpWhitelist_ = nullptr;
    std::shared_ptr<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistRemovedIPRegionWhitelist> removedIPRegionWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
