// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODYREMOVEUSERSRESULT_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODYREMOVEUSERSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveUsersResponseBodyRemoveUsersResultFailedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveUsersResponseBodyRemoveUsersResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersResponseBodyRemoveUsersResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_TO_JSON(RemovedUsers, removedUsers_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersResponseBodyRemoveUsersResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_FROM_JSON(RemovedUsers, removedUsers_);
    };
    RemoveUsersResponseBodyRemoveUsersResult() = default ;
    RemoveUsersResponseBodyRemoveUsersResult(const RemoveUsersResponseBodyRemoveUsersResult &) = default ;
    RemoveUsersResponseBodyRemoveUsersResult(RemoveUsersResponseBodyRemoveUsersResult &&) = default ;
    RemoveUsersResponseBodyRemoveUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersResponseBodyRemoveUsersResult() = default ;
    RemoveUsersResponseBodyRemoveUsersResult& operator=(const RemoveUsersResponseBodyRemoveUsersResult &) = default ;
    RemoveUsersResponseBodyRemoveUsersResult& operator=(RemoveUsersResponseBodyRemoveUsersResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedUsers_ != nullptr
        && this->removedUsers_ != nullptr; };
    // failedUsers Field Functions 
    bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
    void deleteFailedUsers() { this->failedUsers_ = nullptr;};
    inline const vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers> & failedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers>) };
    inline vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers> failedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers>) };
    inline RemoveUsersResponseBodyRemoveUsersResult& setFailedUsers(const vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
    inline RemoveUsersResponseBodyRemoveUsersResult& setFailedUsers(vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


    // removedUsers Field Functions 
    bool hasRemovedUsers() const { return this->removedUsers_ != nullptr;};
    void deleteRemovedUsers() { this->removedUsers_ = nullptr;};
    inline const vector<string> & removedUsers() const { DARABONBA_PTR_GET_CONST(removedUsers_, vector<string>) };
    inline vector<string> removedUsers() { DARABONBA_PTR_GET(removedUsers_, vector<string>) };
    inline RemoveUsersResponseBodyRemoveUsersResult& setRemovedUsers(const vector<string> & removedUsers) { DARABONBA_PTR_SET_VALUE(removedUsers_, removedUsers) };
    inline RemoveUsersResponseBodyRemoveUsersResult& setRemovedUsers(vector<string> && removedUsers) { DARABONBA_PTR_SET_RVALUE(removedUsers_, removedUsers) };


  protected:
    // The convenience users that failed to be removed.
    std::shared_ptr<vector<Models::RemoveUsersResponseBodyRemoveUsersResultFailedUsers>> failedUsers_ = nullptr;
    // The convenience users that were removed.
    std::shared_ptr<vector<string>> removedUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
