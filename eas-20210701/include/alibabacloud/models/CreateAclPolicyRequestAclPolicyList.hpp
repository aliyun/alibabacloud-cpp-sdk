// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACLPOLICYREQUESTACLPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACLPOLICYREQUESTACLPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateAclPolicyRequestAclPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAclPolicyRequestAclPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAclPolicyRequestAclPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    CreateAclPolicyRequestAclPolicyList() = default ;
    CreateAclPolicyRequestAclPolicyList(const CreateAclPolicyRequestAclPolicyList &) = default ;
    CreateAclPolicyRequestAclPolicyList(CreateAclPolicyRequestAclPolicyList &&) = default ;
    CreateAclPolicyRequestAclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAclPolicyRequestAclPolicyList() = default ;
    CreateAclPolicyRequestAclPolicyList& operator=(const CreateAclPolicyRequestAclPolicyList &) = default ;
    CreateAclPolicyRequestAclPolicyList& operator=(CreateAclPolicyRequestAclPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->entry_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateAclPolicyRequestAclPolicyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline CreateAclPolicyRequestAclPolicyList& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    // The comment on the IP CIDR block in the VPC that can access the private gateway.
    std::shared_ptr<string> comment_ = nullptr;
    // The IP CIDR block in the VPC that can access the private gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
