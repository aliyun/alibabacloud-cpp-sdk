// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultGroupInfos.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultRepositoryInfos.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserResourcesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_TO_JSON(repositoryInfos, repositoryInfos_);
      DARABONBA_PTR_TO_JSON(userInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_FROM_JSON(repositoryInfos, repositoryInfos_);
      DARABONBA_PTR_FROM_JSON(userInfo, userInfo_);
    };
    ListUserResourcesResponseBodyResult() = default ;
    ListUserResourcesResponseBodyResult(const ListUserResourcesResponseBodyResult &) = default ;
    ListUserResourcesResponseBodyResult(ListUserResourcesResponseBodyResult &&) = default ;
    ListUserResourcesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesResponseBodyResult() = default ;
    ListUserResourcesResponseBodyResult& operator=(const ListUserResourcesResponseBodyResult &) = default ;
    ListUserResourcesResponseBodyResult& operator=(ListUserResourcesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupInfos_ == nullptr
        && return this->repositoryInfos_ == nullptr && return this->userInfo_ == nullptr; };
    // groupInfos Field Functions 
    bool hasGroupInfos() const { return this->groupInfos_ != nullptr;};
    void deleteGroupInfos() { this->groupInfos_ = nullptr;};
    inline const vector<Models::ListUserResourcesResponseBodyResultGroupInfos> & groupInfos() const { DARABONBA_PTR_GET_CONST(groupInfos_, vector<Models::ListUserResourcesResponseBodyResultGroupInfos>) };
    inline vector<Models::ListUserResourcesResponseBodyResultGroupInfos> groupInfos() { DARABONBA_PTR_GET(groupInfos_, vector<Models::ListUserResourcesResponseBodyResultGroupInfos>) };
    inline ListUserResourcesResponseBodyResult& setGroupInfos(const vector<Models::ListUserResourcesResponseBodyResultGroupInfos> & groupInfos) { DARABONBA_PTR_SET_VALUE(groupInfos_, groupInfos) };
    inline ListUserResourcesResponseBodyResult& setGroupInfos(vector<Models::ListUserResourcesResponseBodyResultGroupInfos> && groupInfos) { DARABONBA_PTR_SET_RVALUE(groupInfos_, groupInfos) };


    // repositoryInfos Field Functions 
    bool hasRepositoryInfos() const { return this->repositoryInfos_ != nullptr;};
    void deleteRepositoryInfos() { this->repositoryInfos_ = nullptr;};
    inline const vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos> & repositoryInfos() const { DARABONBA_PTR_GET_CONST(repositoryInfos_, vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos>) };
    inline vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos> repositoryInfos() { DARABONBA_PTR_GET(repositoryInfos_, vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos>) };
    inline ListUserResourcesResponseBodyResult& setRepositoryInfos(const vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos> & repositoryInfos) { DARABONBA_PTR_SET_VALUE(repositoryInfos_, repositoryInfos) };
    inline ListUserResourcesResponseBodyResult& setRepositoryInfos(vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos> && repositoryInfos) { DARABONBA_PTR_SET_RVALUE(repositoryInfos_, repositoryInfos) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::ListUserResourcesResponseBodyResultUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::ListUserResourcesResponseBodyResultUserInfo) };
    inline Models::ListUserResourcesResponseBodyResultUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::ListUserResourcesResponseBodyResultUserInfo) };
    inline ListUserResourcesResponseBodyResult& setUserInfo(const Models::ListUserResourcesResponseBodyResultUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListUserResourcesResponseBodyResult& setUserInfo(Models::ListUserResourcesResponseBodyResultUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<vector<Models::ListUserResourcesResponseBodyResultGroupInfos>> groupInfos_ = nullptr;
    std::shared_ptr<vector<Models::ListUserResourcesResponseBodyResultRepositoryInfos>> repositoryInfos_ = nullptr;
    std::shared_ptr<Models::ListUserResourcesResponseBodyResultUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
