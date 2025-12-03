// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPBYPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPBYPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetGroupByPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupByPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(identity, identity_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupByPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(identity, identity_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    GetGroupByPathRequest() = default ;
    GetGroupByPathRequest(const GetGroupByPathRequest &) = default ;
    GetGroupByPathRequest(GetGroupByPathRequest &&) = default ;
    GetGroupByPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupByPathRequest() = default ;
    GetGroupByPathRequest& operator=(const GetGroupByPathRequest &) = default ;
    GetGroupByPathRequest& operator=(GetGroupByPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identity_ == nullptr
        && return this->organizationId_ == nullptr; };
    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline GetGroupByPathRequest& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetGroupByPathRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> identity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
