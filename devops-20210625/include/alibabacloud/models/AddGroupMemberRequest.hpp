// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class AddGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(aliyunPks, aliyunPks_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(aliyunPks, aliyunPks_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    AddGroupMemberRequest() = default ;
    AddGroupMemberRequest(const AddGroupMemberRequest &) = default ;
    AddGroupMemberRequest(AddGroupMemberRequest &&) = default ;
    AddGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGroupMemberRequest() = default ;
    AddGroupMemberRequest& operator=(const AddGroupMemberRequest &) = default ;
    AddGroupMemberRequest& operator=(AddGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->accessLevel_ == nullptr && return this->aliyunPks_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline AddGroupMemberRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline AddGroupMemberRequest& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // aliyunPks Field Functions 
    bool hasAliyunPks() const { return this->aliyunPks_ != nullptr;};
    void deleteAliyunPks() { this->aliyunPks_ = nullptr;};
    inline string aliyunPks() const { DARABONBA_PTR_GET_DEFAULT(aliyunPks_, "") };
    inline AddGroupMemberRequest& setAliyunPks(string aliyunPks) { DARABONBA_PTR_SET_VALUE(aliyunPks_, aliyunPks) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline AddGroupMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aliyunPks_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
