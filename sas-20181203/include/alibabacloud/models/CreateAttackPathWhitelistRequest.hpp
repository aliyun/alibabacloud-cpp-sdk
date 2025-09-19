// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAttackPathWhitelistRequestAttackPathAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAttackPathWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    CreateAttackPathWhitelistRequest() = default ;
    CreateAttackPathWhitelistRequest(const CreateAttackPathWhitelistRequest &) = default ;
    CreateAttackPathWhitelistRequest(CreateAttackPathWhitelistRequest &&) = default ;
    CreateAttackPathWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathWhitelistRequest() = default ;
    CreateAttackPathWhitelistRequest& operator=(const CreateAttackPathWhitelistRequest &) = default ;
    CreateAttackPathWhitelistRequest& operator=(CreateAttackPathWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackPathAssetList_ != nullptr
        && this->pathName_ != nullptr && this->pathType_ != nullptr && this->remark_ != nullptr && this->whitelistName_ != nullptr && this->whitelistType_ != nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<CreateAttackPathWhitelistRequestAttackPathAssetList> & attackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<CreateAttackPathWhitelistRequestAttackPathAssetList>) };
    inline vector<CreateAttackPathWhitelistRequestAttackPathAssetList> attackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<CreateAttackPathWhitelistRequestAttackPathAssetList>) };
    inline CreateAttackPathWhitelistRequest& setAttackPathAssetList(const vector<CreateAttackPathWhitelistRequestAttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline CreateAttackPathWhitelistRequest& setAttackPathAssetList(vector<CreateAttackPathWhitelistRequestAttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline CreateAttackPathWhitelistRequest& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline CreateAttackPathWhitelistRequest& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateAttackPathWhitelistRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // whitelistName Field Functions 
    bool hasWhitelistName() const { return this->whitelistName_ != nullptr;};
    void deleteWhitelistName() { this->whitelistName_ = nullptr;};
    inline string whitelistName() const { DARABONBA_PTR_GET_DEFAULT(whitelistName_, "") };
    inline CreateAttackPathWhitelistRequest& setWhitelistName(string whitelistName) { DARABONBA_PTR_SET_VALUE(whitelistName_, whitelistName) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string whitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline CreateAttackPathWhitelistRequest& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    // List of cloud product assets in the attack path.
    std::shared_ptr<vector<CreateAttackPathWhitelistRequestAttackPathAssetList>> attackPathAssetList_ = nullptr;
    // Path name.
    // 
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path name.
    std::shared_ptr<string> pathName_ = nullptr;
    // Path type.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path type.
    // 
    // This parameter is required.
    std::shared_ptr<string> pathType_ = nullptr;
    // Remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // Whitelist name.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelistName_ = nullptr;
    // Whitelist type. Values:
    // 
    // - **ALL_ASSET**: All assets
    // - **PART_ASSET**: Partial assets
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelistType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
