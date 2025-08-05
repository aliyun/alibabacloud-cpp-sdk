// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEMEMBERATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEMEMBERATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyInstanceMemberAttributesRequestMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyInstanceMemberAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceMemberAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceMemberAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    ModifyInstanceMemberAttributesRequest() = default ;
    ModifyInstanceMemberAttributesRequest(const ModifyInstanceMemberAttributesRequest &) = default ;
    ModifyInstanceMemberAttributesRequest(ModifyInstanceMemberAttributesRequest &&) = default ;
    ModifyInstanceMemberAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceMemberAttributesRequest() = default ;
    ModifyInstanceMemberAttributesRequest& operator=(const ModifyInstanceMemberAttributesRequest &) = default ;
    ModifyInstanceMemberAttributesRequest& operator=(ModifyInstanceMemberAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ModifyInstanceMemberAttributesRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<ModifyInstanceMemberAttributesRequestMembers>) };
    inline vector<ModifyInstanceMemberAttributesRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<ModifyInstanceMemberAttributesRequestMembers>) };
    inline ModifyInstanceMemberAttributesRequest& setMembers(const vector<ModifyInstanceMemberAttributesRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ModifyInstanceMemberAttributesRequest& setMembers(vector<ModifyInstanceMemberAttributesRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The members that to be modified.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyInstanceMemberAttributesRequestMembers>> members_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
