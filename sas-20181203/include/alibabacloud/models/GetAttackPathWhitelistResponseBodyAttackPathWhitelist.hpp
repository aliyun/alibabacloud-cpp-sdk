// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHWHITELISTRESPONSEBODYATTACKPATHWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHWHITELISTRESPONSEBODYATTACKPATHWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathWhitelistResponseBodyAttackPathWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathWhitelistResponseBodyAttackPathWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
      DARABONBA_PTR_TO_JSON(LastModifiedTimestamp, lastModifiedTimestamp_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathWhitelistResponseBodyAttackPathWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTimestamp, lastModifiedTimestamp_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist() = default ;
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist(const GetAttackPathWhitelistResponseBodyAttackPathWhitelist &) = default ;
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist(GetAttackPathWhitelistResponseBodyAttackPathWhitelist &&) = default ;
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathWhitelistResponseBodyAttackPathWhitelist() = default ;
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist& operator=(const GetAttackPathWhitelistResponseBodyAttackPathWhitelist &) = default ;
    GetAttackPathWhitelistResponseBodyAttackPathWhitelist& operator=(GetAttackPathWhitelistResponseBodyAttackPathWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && return this->attackPathWhitelistId_ == nullptr && return this->lastModifiedTimestamp_ == nullptr && return this->pathName_ == nullptr && return this->pathType_ == nullptr && return this->remark_ == nullptr
        && return this->whitelistName_ == nullptr && return this->whitelistType_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList> & attackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList>) };
    inline vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList> attackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList>) };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setAttackPathAssetList(const vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setAttackPathAssetList(vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // attackPathWhitelistId Field Functions 
    bool hasAttackPathWhitelistId() const { return this->attackPathWhitelistId_ != nullptr;};
    void deleteAttackPathWhitelistId() { this->attackPathWhitelistId_ = nullptr;};
    inline string attackPathWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(attackPathWhitelistId_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setAttackPathWhitelistId(string attackPathWhitelistId) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistId_, attackPathWhitelistId) };


    // lastModifiedTimestamp Field Functions 
    bool hasLastModifiedTimestamp() const { return this->lastModifiedTimestamp_ != nullptr;};
    void deleteLastModifiedTimestamp() { this->lastModifiedTimestamp_ = nullptr;};
    inline int64_t lastModifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTimestamp_, 0L) };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setLastModifiedTimestamp(int64_t lastModifiedTimestamp) { DARABONBA_PTR_SET_VALUE(lastModifiedTimestamp_, lastModifiedTimestamp) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // whitelistName Field Functions 
    bool hasWhitelistName() const { return this->whitelistName_ != nullptr;};
    void deleteWhitelistName() { this->whitelistName_ = nullptr;};
    inline string whitelistName() const { DARABONBA_PTR_GET_DEFAULT(whitelistName_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setWhitelistName(string whitelistName) { DARABONBA_PTR_SET_VALUE(whitelistName_, whitelistName) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string whitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline GetAttackPathWhitelistResponseBodyAttackPathWhitelist& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    // List of cloud product assets in the attack path.
    std::shared_ptr<vector<Models::GetAttackPathWhitelistResponseBodyAttackPathWhitelistAttackPathAssetList>> attackPathAssetList_ = nullptr;
    // Attack path whitelist ID.
    std::shared_ptr<string> attackPathWhitelistId_ = nullptr;
    // Last modified timestamp, in milliseconds.
    std::shared_ptr<int64_t> lastModifiedTimestamp_ = nullptr;
    // Path name.
    std::shared_ptr<string> pathName_ = nullptr;
    // Path type.
    std::shared_ptr<string> pathType_ = nullptr;
    // Remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // Whitelist name.
    std::shared_ptr<string> whitelistName_ = nullptr;
    // Whitelist type. Possible values:
    // 
    // - **ALL_ASSET**: All assets
    // - **PART_ASSET**: Partial assets
    std::shared_ptr<string> whitelistType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
