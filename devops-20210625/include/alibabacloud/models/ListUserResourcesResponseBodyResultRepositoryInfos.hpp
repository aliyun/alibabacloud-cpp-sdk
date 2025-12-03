// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTREPOSITORYINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTREPOSITORYINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserResourcesResponseBodyResultRepositoryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesResponseBodyResultRepositoryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(repositoryInfo, repositoryInfo_);
      DARABONBA_PTR_TO_JSON(repositoryRole, repositoryRole_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesResponseBodyResultRepositoryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(repositoryInfo, repositoryInfo_);
      DARABONBA_PTR_FROM_JSON(repositoryRole, repositoryRole_);
    };
    ListUserResourcesResponseBodyResultRepositoryInfos() = default ;
    ListUserResourcesResponseBodyResultRepositoryInfos(const ListUserResourcesResponseBodyResultRepositoryInfos &) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfos(ListUserResourcesResponseBodyResultRepositoryInfos &&) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesResponseBodyResultRepositoryInfos() = default ;
    ListUserResourcesResponseBodyResultRepositoryInfos& operator=(const ListUserResourcesResponseBodyResultRepositoryInfos &) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfos& operator=(ListUserResourcesResponseBodyResultRepositoryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->repositoryInfo_ == nullptr
        && return this->repositoryRole_ == nullptr; };
    // repositoryInfo Field Functions 
    bool hasRepositoryInfo() const { return this->repositoryInfo_ != nullptr;};
    void deleteRepositoryInfo() { this->repositoryInfo_ = nullptr;};
    inline const Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo & repositoryInfo() const { DARABONBA_PTR_GET_CONST(repositoryInfo_, Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo) };
    inline Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo repositoryInfo() { DARABONBA_PTR_GET(repositoryInfo_, Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo) };
    inline ListUserResourcesResponseBodyResultRepositoryInfos& setRepositoryInfo(const Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo & repositoryInfo) { DARABONBA_PTR_SET_VALUE(repositoryInfo_, repositoryInfo) };
    inline ListUserResourcesResponseBodyResultRepositoryInfos& setRepositoryInfo(Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo && repositoryInfo) { DARABONBA_PTR_SET_RVALUE(repositoryInfo_, repositoryInfo) };


    // repositoryRole Field Functions 
    bool hasRepositoryRole() const { return this->repositoryRole_ != nullptr;};
    void deleteRepositoryRole() { this->repositoryRole_ = nullptr;};
    inline const Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole & repositoryRole() const { DARABONBA_PTR_GET_CONST(repositoryRole_, Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole) };
    inline Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole repositoryRole() { DARABONBA_PTR_GET(repositoryRole_, Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole) };
    inline ListUserResourcesResponseBodyResultRepositoryInfos& setRepositoryRole(const Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole & repositoryRole) { DARABONBA_PTR_SET_VALUE(repositoryRole_, repositoryRole) };
    inline ListUserResourcesResponseBodyResultRepositoryInfos& setRepositoryRole(Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole && repositoryRole) { DARABONBA_PTR_SET_RVALUE(repositoryRole_, repositoryRole) };


  protected:
    std::shared_ptr<Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo> repositoryInfo_ = nullptr;
    std::shared_ptr<Models::ListUserResourcesResponseBodyResultRepositoryInfosRepositoryRole> repositoryRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
