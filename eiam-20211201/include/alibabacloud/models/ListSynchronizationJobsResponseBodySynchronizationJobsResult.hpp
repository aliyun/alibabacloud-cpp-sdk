// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GroupMemberStatistics, groupMemberStatistics_);
      DARABONBA_PTR_TO_JSON(GroupStatistics, groupStatistics_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
      DARABONBA_PTR_TO_JSON(UserStatistics, userStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GroupMemberStatistics, groupMemberStatistics_);
      DARABONBA_PTR_FROM_JSON(GroupStatistics, groupStatistics_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
      DARABONBA_PTR_FROM_JSON(UserStatistics, userStatistics_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResult() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResult(const ListSynchronizationJobsResponseBodySynchronizationJobsResult &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResult(ListSynchronizationJobsResponseBodySynchronizationJobsResult &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResult() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResult& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResult &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResult& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->groupMemberStatistics_ == nullptr && return this->groupStatistics_ == nullptr && return this->organizationalUnitStatistics_ == nullptr && return this->userStatistics_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // groupMemberStatistics Field Functions 
    bool hasGroupMemberStatistics() const { return this->groupMemberStatistics_ != nullptr;};
    void deleteGroupMemberStatistics() { this->groupMemberStatistics_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics & groupMemberStatistics() const { DARABONBA_PTR_GET_CONST(groupMemberStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics groupMemberStatistics() { DARABONBA_PTR_GET(groupMemberStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setGroupMemberStatistics(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics & groupMemberStatistics) { DARABONBA_PTR_SET_VALUE(groupMemberStatistics_, groupMemberStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setGroupMemberStatistics(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics && groupMemberStatistics) { DARABONBA_PTR_SET_RVALUE(groupMemberStatistics_, groupMemberStatistics) };


    // groupStatistics Field Functions 
    bool hasGroupStatistics() const { return this->groupStatistics_ != nullptr;};
    void deleteGroupStatistics() { this->groupStatistics_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics & groupStatistics() const { DARABONBA_PTR_GET_CONST(groupStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics groupStatistics() { DARABONBA_PTR_GET(groupStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setGroupStatistics(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics & groupStatistics) { DARABONBA_PTR_SET_VALUE(groupStatistics_, groupStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setGroupStatistics(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics && groupStatistics) { DARABONBA_PTR_SET_RVALUE(groupStatistics_, groupStatistics) };


    // organizationalUnitStatistics Field Functions 
    bool hasOrganizationalUnitStatistics() const { return this->organizationalUnitStatistics_ != nullptr;};
    void deleteOrganizationalUnitStatistics() { this->organizationalUnitStatistics_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics & organizationalUnitStatistics() const { DARABONBA_PTR_GET_CONST(organizationalUnitStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics organizationalUnitStatistics() { DARABONBA_PTR_GET(organizationalUnitStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setOrganizationalUnitStatistics(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics & organizationalUnitStatistics) { DARABONBA_PTR_SET_VALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setOrganizationalUnitStatistics(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics && organizationalUnitStatistics) { DARABONBA_PTR_SET_RVALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };


    // userStatistics Field Functions 
    bool hasUserStatistics() const { return this->userStatistics_ != nullptr;};
    void deleteUserStatistics() { this->userStatistics_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics & userStatistics() const { DARABONBA_PTR_GET_CONST(userStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics userStatistics() { DARABONBA_PTR_GET(userStatistics_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setUserStatistics(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics & userStatistics) { DARABONBA_PTR_SET_VALUE(userStatistics_, userStatistics) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResult& setUserStatistics(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics && userStatistics) { DARABONBA_PTR_SET_RVALUE(userStatistics_, userStatistics) };


  protected:
    // 同步结果错误码
    std::shared_ptr<string> errorCode_ = nullptr;
    // 同步结果错误信息描述
    std::shared_ptr<string> errorMessage_ = nullptr;
    // 组成员同步结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics> groupMemberStatistics_ = nullptr;
    // 组同步结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics> groupStatistics_ = nullptr;
    // 组织同步结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics> organizationalUnitStatistics_ = nullptr;
    // 用户同步结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics> userStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
