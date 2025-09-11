// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODYDIRQUOTAINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODYDIRQUOTAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDirQuotasResponseBodyDirQuotaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirQuotasResponseBodyDirQuotaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DirInode, dirInode_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserQuotaInfos, userQuotaInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirQuotasResponseBodyDirQuotaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DirInode, dirInode_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserQuotaInfos, userQuotaInfos_);
    };
    DescribeDirQuotasResponseBodyDirQuotaInfos() = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfos(const DescribeDirQuotasResponseBodyDirQuotaInfos &) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfos(DescribeDirQuotasResponseBodyDirQuotaInfos &&) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirQuotasResponseBodyDirQuotaInfos() = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfos& operator=(const DescribeDirQuotasResponseBodyDirQuotaInfos &) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfos& operator=(DescribeDirQuotasResponseBodyDirQuotaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dirInode_ != nullptr
        && this->path_ != nullptr && this->status_ != nullptr && this->userQuotaInfos_ != nullptr; };
    // dirInode Field Functions 
    bool hasDirInode() const { return this->dirInode_ != nullptr;};
    void deleteDirInode() { this->dirInode_ = nullptr;};
    inline string dirInode() const { DARABONBA_PTR_GET_DEFAULT(dirInode_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfos& setDirInode(string dirInode) { DARABONBA_PTR_SET_VALUE(dirInode_, dirInode) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfos& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userQuotaInfos Field Functions 
    bool hasUserQuotaInfos() const { return this->userQuotaInfos_ != nullptr;};
    void deleteUserQuotaInfos() { this->userQuotaInfos_ = nullptr;};
    inline const vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos> & userQuotaInfos() const { DARABONBA_PTR_GET_CONST(userQuotaInfos_, vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>) };
    inline vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos> userQuotaInfos() { DARABONBA_PTR_GET(userQuotaInfos_, vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfos& setUserQuotaInfos(const vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos> & userQuotaInfos) { DARABONBA_PTR_SET_VALUE(userQuotaInfos_, userQuotaInfos) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfos& setUserQuotaInfos(vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos> && userQuotaInfos) { DARABONBA_PTR_SET_RVALUE(userQuotaInfos_, userQuotaInfos) };


  protected:
    // The inode number of the directory.
    std::shared_ptr<string> dirInode_ = nullptr;
    // The absolute path of a directory.
    std::shared_ptr<string> path_ = nullptr;
    // The status of the quota created for the directory. Valid values: Initializing and Normal. The Initializing state indicates that the quota is being created. The Normal state indicates that the quota is created.
    std::shared_ptr<string> status_ = nullptr;
    // The information about quotas for all users.
    std::shared_ptr<vector<Models::DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>> userQuotaInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
