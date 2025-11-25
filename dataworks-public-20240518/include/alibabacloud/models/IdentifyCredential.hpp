// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDENTIFYCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_IDENTIFYCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IdentifyCredentialDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class IdentifyCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdentifyCredential& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, IdentifyCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    IdentifyCredential() = default ;
    IdentifyCredential(const IdentifyCredential &) = default ;
    IdentifyCredential(IdentifyCredential &&) = default ;
    IdentifyCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdentifyCredential() = default ;
    IdentifyCredential& operator=(const IdentifyCredential &) = default ;
    IdentifyCredential& operator=(IdentifyCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSource_ == nullptr
        && return this->projectId_ == nullptr && return this->userId_ == nullptr && return this->userType_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const IdentifyCredentialDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, IdentifyCredentialDataSource) };
    inline IdentifyCredentialDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, IdentifyCredentialDataSource) };
    inline IdentifyCredential& setDataSource(const IdentifyCredentialDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline IdentifyCredential& setDataSource(IdentifyCredentialDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline IdentifyCredential& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IdentifyCredential& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline IdentifyCredential& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<IdentifyCredentialDataSource> dataSource_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
