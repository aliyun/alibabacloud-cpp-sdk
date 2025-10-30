// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATARESOURCEINFOPROJECTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATARESOURCEINFOPROJECTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo(const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo(ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo &&) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& operator=(const ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& operator=(ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->env_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
