// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
      DARABONBA_PTR_TO_JSON(ref, ref_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
      DARABONBA_PTR_FROM_JSON(ref, ref_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateBranchRequest() = default ;
    CreateBranchRequest(const CreateBranchRequest &) = default ;
    CreateBranchRequest(CreateBranchRequest &&) = default ;
    CreateBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBranchRequest() = default ;
    CreateBranchRequest& operator=(const CreateBranchRequest &) = default ;
    CreateBranchRequest& operator=(CreateBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->branchName_ == nullptr && return this->ref_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateBranchRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateBranchRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // ref Field Functions 
    bool hasRef() const { return this->ref_ != nullptr;};
    void deleteRef() { this->ref_ = nullptr;};
    inline string ref() const { DARABONBA_PTR_GET_DEFAULT(ref_, "") };
    inline CreateBranchRequest& setRef(string ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateBranchRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branchName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ref_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
