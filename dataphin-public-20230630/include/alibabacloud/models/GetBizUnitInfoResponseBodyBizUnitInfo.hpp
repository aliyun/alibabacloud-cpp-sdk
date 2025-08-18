// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBizUnitInfoResponseBodyBizUnitInfoAccountList.hpp>
#include <alibabacloud/models/GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList.hpp>
#include <alibabacloud/models/GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList.hpp>
#include <alibabacloud/models/GetBizUnitInfoResponseBodyBizUnitInfoEnvList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizUnitInfoResponseBodyBizUnitInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizUnitInfoResponseBodyBizUnitInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountList, accountList_);
      DARABONBA_PTR_TO_JSON(BizObjectCount, bizObjectCount_);
      DARABONBA_PTR_TO_JSON(BizProcessCount, bizProcessCount_);
      DARABONBA_PTR_TO_JSON(BusinessLeaderList, businessLeaderList_);
      DARABONBA_PTR_TO_JSON(DataDomainCount, dataDomainCount_);
      DARABONBA_PTR_TO_JSON(DataLeaderList, dataLeaderList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvList, envList_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizUnitInfoResponseBodyBizUnitInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
      DARABONBA_PTR_FROM_JSON(BizObjectCount, bizObjectCount_);
      DARABONBA_PTR_FROM_JSON(BizProcessCount, bizProcessCount_);
      DARABONBA_PTR_FROM_JSON(BusinessLeaderList, businessLeaderList_);
      DARABONBA_PTR_FROM_JSON(DataDomainCount, dataDomainCount_);
      DARABONBA_PTR_FROM_JSON(DataLeaderList, dataLeaderList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvList, envList_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
    };
    GetBizUnitInfoResponseBodyBizUnitInfo() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfo(const GetBizUnitInfoResponseBodyBizUnitInfo &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfo(GetBizUnitInfoResponseBodyBizUnitInfo &&) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizUnitInfoResponseBodyBizUnitInfo() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfo& operator=(const GetBizUnitInfoResponseBodyBizUnitInfo &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfo& operator=(GetBizUnitInfoResponseBodyBizUnitInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountList_ != nullptr
        && this->bizObjectCount_ != nullptr && this->bizProcessCount_ != nullptr && this->businessLeaderList_ != nullptr && this->dataDomainCount_ != nullptr && this->dataLeaderList_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->envList_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->icon_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr && this->lastModifierName_ != nullptr && this->mode_ != nullptr
        && this->name_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr; };
    // accountList Field Functions 
    bool hasAccountList() const { return this->accountList_ != nullptr;};
    void deleteAccountList() { this->accountList_ = nullptr;};
    inline const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList> & accountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList>) };
    inline vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList> accountList() { DARABONBA_PTR_GET(accountList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList>) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setAccountList(const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setAccountList(vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


    // bizObjectCount Field Functions 
    bool hasBizObjectCount() const { return this->bizObjectCount_ != nullptr;};
    void deleteBizObjectCount() { this->bizObjectCount_ = nullptr;};
    inline int32_t bizObjectCount() const { DARABONBA_PTR_GET_DEFAULT(bizObjectCount_, 0) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setBizObjectCount(int32_t bizObjectCount) { DARABONBA_PTR_SET_VALUE(bizObjectCount_, bizObjectCount) };


    // bizProcessCount Field Functions 
    bool hasBizProcessCount() const { return this->bizProcessCount_ != nullptr;};
    void deleteBizProcessCount() { this->bizProcessCount_ = nullptr;};
    inline int32_t bizProcessCount() const { DARABONBA_PTR_GET_DEFAULT(bizProcessCount_, 0) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setBizProcessCount(int32_t bizProcessCount) { DARABONBA_PTR_SET_VALUE(bizProcessCount_, bizProcessCount) };


    // businessLeaderList Field Functions 
    bool hasBusinessLeaderList() const { return this->businessLeaderList_ != nullptr;};
    void deleteBusinessLeaderList() { this->businessLeaderList_ = nullptr;};
    inline const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList> & businessLeaderList() const { DARABONBA_PTR_GET_CONST(businessLeaderList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList>) };
    inline vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList> businessLeaderList() { DARABONBA_PTR_GET(businessLeaderList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList>) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setBusinessLeaderList(const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList> & businessLeaderList) { DARABONBA_PTR_SET_VALUE(businessLeaderList_, businessLeaderList) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setBusinessLeaderList(vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList> && businessLeaderList) { DARABONBA_PTR_SET_RVALUE(businessLeaderList_, businessLeaderList) };


    // dataDomainCount Field Functions 
    bool hasDataDomainCount() const { return this->dataDomainCount_ != nullptr;};
    void deleteDataDomainCount() { this->dataDomainCount_ = nullptr;};
    inline int32_t dataDomainCount() const { DARABONBA_PTR_GET_DEFAULT(dataDomainCount_, 0) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setDataDomainCount(int32_t dataDomainCount) { DARABONBA_PTR_SET_VALUE(dataDomainCount_, dataDomainCount) };


    // dataLeaderList Field Functions 
    bool hasDataLeaderList() const { return this->dataLeaderList_ != nullptr;};
    void deleteDataLeaderList() { this->dataLeaderList_ = nullptr;};
    inline const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList> & dataLeaderList() const { DARABONBA_PTR_GET_CONST(dataLeaderList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList>) };
    inline vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList> dataLeaderList() { DARABONBA_PTR_GET(dataLeaderList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList>) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setDataLeaderList(const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList> & dataLeaderList) { DARABONBA_PTR_SET_VALUE(dataLeaderList_, dataLeaderList) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setDataLeaderList(vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList> && dataLeaderList) { DARABONBA_PTR_SET_RVALUE(dataLeaderList_, dataLeaderList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envList Field Functions 
    bool hasEnvList() const { return this->envList_ != nullptr;};
    void deleteEnvList() { this->envList_ = nullptr;};
    inline const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList> & envList() const { DARABONBA_PTR_GET_CONST(envList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList>) };
    inline vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList> envList() { DARABONBA_PTR_GET(envList_, vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList>) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setEnvList(const vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList> & envList) { DARABONBA_PTR_SET_VALUE(envList_, envList) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setEnvList(vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList> && envList) { DARABONBA_PTR_SET_RVALUE(envList_, envList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfo& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


  protected:
    std::shared_ptr<vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoAccountList>> accountList_ = nullptr;
    std::shared_ptr<int32_t> bizObjectCount_ = nullptr;
    std::shared_ptr<int32_t> bizProcessCount_ = nullptr;
    std::shared_ptr<vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList>> businessLeaderList_ = nullptr;
    std::shared_ptr<int32_t> dataDomainCount_ = nullptr;
    std::shared_ptr<vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoDataLeaderList>> dataLeaderList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<vector<Models::GetBizUnitInfoResponseBodyBizUnitInfoEnvList>> envList_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
