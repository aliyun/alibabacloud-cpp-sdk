// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GroupMemberStatistics, groupMemberStatistics_);
      DARABONBA_PTR_TO_JSON(GroupStatistics, groupStatistics_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
      DARABONBA_PTR_TO_JSON(UserStatistics, userStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GroupMemberStatistics, groupMemberStatistics_);
      DARABONBA_PTR_FROM_JSON(GroupStatistics, groupStatistics_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
      DARABONBA_PTR_FROM_JSON(UserStatistics, userStatistics_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResult() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResult(const GetSynchronizationJobResponseBodySynchronizationJobResult &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResult(GetSynchronizationJobResponseBodySynchronizationJobResult &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResult() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResult& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResult &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResult& operator=(GetSynchronizationJobResponseBodySynchronizationJobResult &&) = default ;
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
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // groupMemberStatistics Field Functions 
    bool hasGroupMemberStatistics() const { return this->groupMemberStatistics_ != nullptr;};
    void deleteGroupMemberStatistics() { this->groupMemberStatistics_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics & groupMemberStatistics() const { DARABONBA_PTR_GET_CONST(groupMemberStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics groupMemberStatistics() { DARABONBA_PTR_GET(groupMemberStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setGroupMemberStatistics(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics & groupMemberStatistics) { DARABONBA_PTR_SET_VALUE(groupMemberStatistics_, groupMemberStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setGroupMemberStatistics(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics && groupMemberStatistics) { DARABONBA_PTR_SET_RVALUE(groupMemberStatistics_, groupMemberStatistics) };


    // groupStatistics Field Functions 
    bool hasGroupStatistics() const { return this->groupStatistics_ != nullptr;};
    void deleteGroupStatistics() { this->groupStatistics_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics & groupStatistics() const { DARABONBA_PTR_GET_CONST(groupStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics groupStatistics() { DARABONBA_PTR_GET(groupStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setGroupStatistics(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics & groupStatistics) { DARABONBA_PTR_SET_VALUE(groupStatistics_, groupStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setGroupStatistics(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics && groupStatistics) { DARABONBA_PTR_SET_RVALUE(groupStatistics_, groupStatistics) };


    // organizationalUnitStatistics Field Functions 
    bool hasOrganizationalUnitStatistics() const { return this->organizationalUnitStatistics_ != nullptr;};
    void deleteOrganizationalUnitStatistics() { this->organizationalUnitStatistics_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics & organizationalUnitStatistics() const { DARABONBA_PTR_GET_CONST(organizationalUnitStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics organizationalUnitStatistics() { DARABONBA_PTR_GET(organizationalUnitStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setOrganizationalUnitStatistics(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics & organizationalUnitStatistics) { DARABONBA_PTR_SET_VALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setOrganizationalUnitStatistics(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics && organizationalUnitStatistics) { DARABONBA_PTR_SET_RVALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };


    // userStatistics Field Functions 
    bool hasUserStatistics() const { return this->userStatistics_ != nullptr;};
    void deleteUserStatistics() { this->userStatistics_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics & userStatistics() const { DARABONBA_PTR_GET_CONST(userStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics userStatistics() { DARABONBA_PTR_GET(userStatistics_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setUserStatistics(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics & userStatistics) { DARABONBA_PTR_SET_VALUE(userStatistics_, userStatistics) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResult& setUserStatistics(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics && userStatistics) { DARABONBA_PTR_SET_RVALUE(userStatistics_, userStatistics) };


  protected:
    // The error code corresponding to the error message.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned in the case of an error.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The group member synchronization result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics> groupMemberStatistics_ = nullptr;
    // The group synchronization result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics> groupStatistics_ = nullptr;
    // The organization synchronization result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics> organizationalUnitStatistics_ = nullptr;
    // The user synchronization result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics> userStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
