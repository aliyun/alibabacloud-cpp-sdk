// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateAclPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAclPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAclPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateAclPolicyRequest() = default ;
    CreateAclPolicyRequest(const CreateAclPolicyRequest &) = default ;
    CreateAclPolicyRequest(CreateAclPolicyRequest &&) = default ;
    CreateAclPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAclPolicyRequest() = default ;
    CreateAclPolicyRequest& operator=(const CreateAclPolicyRequest &) = default ;
    CreateAclPolicyRequest& operator=(CreateAclPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclPolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclPolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Entry, entry_);
      };
      friend void from_json(const Darabonba::Json& j, AclPolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
      };
      AclPolicyList() = default ;
      AclPolicyList(const AclPolicyList &) = default ;
      AclPolicyList(AclPolicyList &&) = default ;
      AclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclPolicyList() = default ;
      AclPolicyList& operator=(const AclPolicyList &) = default ;
      AclPolicyList& operator=(AclPolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->entry_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline AclPolicyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
      inline AclPolicyList& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    protected:
      // The comment on the IP CIDR block in the VPC that can access the private gateway.
      shared_ptr<string> comment_ {};
      // The IP CIDR block in the VPC that can access the private gateway.
      // 
      // This parameter is required.
      shared_ptr<string> entry_ {};
    };

    virtual bool empty() const override { return this->aclPolicyList_ == nullptr
        && this->vpcId_ == nullptr; };
    // aclPolicyList Field Functions 
    bool hasAclPolicyList() const { return this->aclPolicyList_ != nullptr;};
    void deleteAclPolicyList() { this->aclPolicyList_ = nullptr;};
    inline const vector<CreateAclPolicyRequest::AclPolicyList> & getAclPolicyList() const { DARABONBA_PTR_GET_CONST(aclPolicyList_, vector<CreateAclPolicyRequest::AclPolicyList>) };
    inline vector<CreateAclPolicyRequest::AclPolicyList> getAclPolicyList() { DARABONBA_PTR_GET(aclPolicyList_, vector<CreateAclPolicyRequest::AclPolicyList>) };
    inline CreateAclPolicyRequest& setAclPolicyList(const vector<CreateAclPolicyRequest::AclPolicyList> & aclPolicyList) { DARABONBA_PTR_SET_VALUE(aclPolicyList_, aclPolicyList) };
    inline CreateAclPolicyRequest& setAclPolicyList(vector<CreateAclPolicyRequest::AclPolicyList> && aclPolicyList) { DARABONBA_PTR_SET_RVALUE(aclPolicyList_, aclPolicyList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAclPolicyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The whitelisted IP CIDR blocks in the VPC that can access the private gateway.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateAclPolicyRequest::AclPolicyList>> aclPolicyList_ {};
    // The ID of the virtual private cloud (VPC). For more information about how to obtain the VPC ID, see DescribeVpcs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
