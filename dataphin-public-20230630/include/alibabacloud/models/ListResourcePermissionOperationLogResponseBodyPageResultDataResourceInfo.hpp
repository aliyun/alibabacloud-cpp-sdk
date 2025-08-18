// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATARESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATARESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo(const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo(ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo &&) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& operator=(const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& operator=(ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitInfo_ != nullptr
        && this->displayName_ != nullptr && this->env_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->projectInfo_ != nullptr
        && this->type_ != nullptr; };
    // bizUnitInfo Field Functions 
    bool hasBizUnitInfo() const { return this->bizUnitInfo_ != nullptr;};
    void deleteBizUnitInfo() { this->bizUnitInfo_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo & bizUnitInfo() const { DARABONBA_PTR_GET_CONST(bizUnitInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo bizUnitInfo() { DARABONBA_PTR_GET(bizUnitInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setBizUnitInfo(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo & bizUnitInfo) { DARABONBA_PTR_SET_VALUE(bizUnitInfo_, bizUnitInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setBizUnitInfo(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo && bizUnitInfo) { DARABONBA_PTR_SET_RVALUE(bizUnitInfo_, bizUnitInfo) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo & projectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo projectInfo() { DARABONBA_PTR_GET(projectInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setProjectInfo(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setProjectInfo(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo> bizUnitInfo_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo> projectInfo_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
