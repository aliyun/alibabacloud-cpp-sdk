// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
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
  class GetMediaLiveInputSecurityGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
    };
    GetMediaLiveInputSecurityGroupResponseBody() = default ;
    GetMediaLiveInputSecurityGroupResponseBody(const GetMediaLiveInputSecurityGroupResponseBody &) = default ;
    GetMediaLiveInputSecurityGroupResponseBody(GetMediaLiveInputSecurityGroupResponseBody &&) = default ;
    GetMediaLiveInputSecurityGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputSecurityGroupResponseBody() = default ;
    GetMediaLiveInputSecurityGroupResponseBody& operator=(const GetMediaLiveInputSecurityGroupResponseBody &) = default ;
    GetMediaLiveInputSecurityGroupResponseBody& operator=(GetMediaLiveInputSecurityGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InputIds, inputIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRules_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InputIds, inputIds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRules_);
      };
      SecurityGroup() = default ;
      SecurityGroup(const SecurityGroup &) = default ;
      SecurityGroup(SecurityGroup &&) = default ;
      SecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroup() = default ;
      SecurityGroup& operator=(const SecurityGroup &) = default ;
      SecurityGroup& operator=(SecurityGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->inputIds_ == nullptr && this->name_ == nullptr && this->securityGroupId_ == nullptr && this->whitelistRules_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inputIds Field Functions 
      bool hasInputIds() const { return this->inputIds_ != nullptr;};
      void deleteInputIds() { this->inputIds_ = nullptr;};
      inline const vector<string> & getInputIds() const { DARABONBA_PTR_GET_CONST(inputIds_, vector<string>) };
      inline vector<string> getInputIds() { DARABONBA_PTR_GET(inputIds_, vector<string>) };
      inline SecurityGroup& setInputIds(const vector<string> & inputIds) { DARABONBA_PTR_SET_VALUE(inputIds_, inputIds) };
      inline SecurityGroup& setInputIds(vector<string> && inputIds) { DARABONBA_PTR_SET_RVALUE(inputIds_, inputIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // whitelistRules Field Functions 
      bool hasWhitelistRules() const { return this->whitelistRules_ != nullptr;};
      void deleteWhitelistRules() { this->whitelistRules_ = nullptr;};
      inline const vector<string> & getWhitelistRules() const { DARABONBA_PTR_GET_CONST(whitelistRules_, vector<string>) };
      inline vector<string> getWhitelistRules() { DARABONBA_PTR_GET(whitelistRules_, vector<string>) };
      inline SecurityGroup& setWhitelistRules(const vector<string> & whitelistRules) { DARABONBA_PTR_SET_VALUE(whitelistRules_, whitelistRules) };
      inline SecurityGroup& setWhitelistRules(vector<string> && whitelistRules) { DARABONBA_PTR_SET_RVALUE(whitelistRules_, whitelistRules) };


    protected:
      // The time when the security group was created. It follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The IDs of the inputs associated with the security group.
      shared_ptr<vector<string>> inputIds_ {};
      // The name of the security group.
      shared_ptr<string> name_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The security group rules.
      shared_ptr<vector<string>> whitelistRules_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaLiveInputSecurityGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBody& setSecurityGroup(const GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBody& setSecurityGroup(GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The security group information.
    shared_ptr<GetMediaLiveInputSecurityGroupResponseBody::SecurityGroup> securityGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
