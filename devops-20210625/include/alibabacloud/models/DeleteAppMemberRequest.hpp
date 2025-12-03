// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteAppMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(subjectId, subjectId_);
      DARABONBA_PTR_TO_JSON(subjectType, subjectType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(subjectId, subjectId_);
      DARABONBA_PTR_FROM_JSON(subjectType, subjectType_);
    };
    DeleteAppMemberRequest() = default ;
    DeleteAppMemberRequest(const DeleteAppMemberRequest &) = default ;
    DeleteAppMemberRequest(DeleteAppMemberRequest &&) = default ;
    DeleteAppMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppMemberRequest() = default ;
    DeleteAppMemberRequest& operator=(const DeleteAppMemberRequest &) = default ;
    DeleteAppMemberRequest& operator=(DeleteAppMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationId_ == nullptr
        && return this->subjectId_ == nullptr && return this->subjectType_ == nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline DeleteAppMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // subjectId Field Functions 
    bool hasSubjectId() const { return this->subjectId_ != nullptr;};
    void deleteSubjectId() { this->subjectId_ = nullptr;};
    inline string subjectId() const { DARABONBA_PTR_GET_DEFAULT(subjectId_, "") };
    inline DeleteAppMemberRequest& setSubjectId(string subjectId) { DARABONBA_PTR_SET_VALUE(subjectId_, subjectId) };


    // subjectType Field Functions 
    bool hasSubjectType() const { return this->subjectType_ != nullptr;};
    void deleteSubjectType() { this->subjectType_ = nullptr;};
    inline string subjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
    inline DeleteAppMemberRequest& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> subjectId_ = nullptr;
    std::shared_ptr<string> subjectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
