// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODYSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODYSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveInputSecurityGroupResponseBodySecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InputIds, inputIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InputIds, inputIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRules_);
    };
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup() = default ;
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup(const GetMediaLiveInputSecurityGroupResponseBodySecurityGroup &) = default ;
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup(GetMediaLiveInputSecurityGroupResponseBodySecurityGroup &&) = default ;
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputSecurityGroupResponseBodySecurityGroup() = default ;
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& operator=(const GetMediaLiveInputSecurityGroupResponseBodySecurityGroup &) = default ;
    GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& operator=(GetMediaLiveInputSecurityGroupResponseBodySecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->inputIds_ != nullptr && this->name_ != nullptr && this->securityGroupId_ != nullptr && this->whitelistRules_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inputIds Field Functions 
    bool hasInputIds() const { return this->inputIds_ != nullptr;};
    void deleteInputIds() { this->inputIds_ = nullptr;};
    inline const vector<string> & inputIds() const { DARABONBA_PTR_GET_CONST(inputIds_, vector<string>) };
    inline vector<string> inputIds() { DARABONBA_PTR_GET(inputIds_, vector<string>) };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setInputIds(const vector<string> & inputIds) { DARABONBA_PTR_SET_VALUE(inputIds_, inputIds) };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setInputIds(vector<string> && inputIds) { DARABONBA_PTR_SET_RVALUE(inputIds_, inputIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // whitelistRules Field Functions 
    bool hasWhitelistRules() const { return this->whitelistRules_ != nullptr;};
    void deleteWhitelistRules() { this->whitelistRules_ = nullptr;};
    inline const vector<string> & whitelistRules() const { DARABONBA_PTR_GET_CONST(whitelistRules_, vector<string>) };
    inline vector<string> whitelistRules() { DARABONBA_PTR_GET(whitelistRules_, vector<string>) };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setWhitelistRules(const vector<string> & whitelistRules) { DARABONBA_PTR_SET_VALUE(whitelistRules_, whitelistRules) };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup& setWhitelistRules(vector<string> && whitelistRules) { DARABONBA_PTR_SET_RVALUE(whitelistRules_, whitelistRules) };


  protected:
    // The time when the security group was created. It follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The IDs of the inputs associated with the security group.
    std::shared_ptr<vector<string>> inputIds_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<string>> whitelistRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
