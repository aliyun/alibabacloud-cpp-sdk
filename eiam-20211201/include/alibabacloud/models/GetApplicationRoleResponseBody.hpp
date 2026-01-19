// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationRole, applicationRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationRole, applicationRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationRoleResponseBody() = default ;
    GetApplicationRoleResponseBody(const GetApplicationRoleResponseBody &) = default ;
    GetApplicationRoleResponseBody(GetApplicationRoleResponseBody &&) = default ;
    GetApplicationRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationRoleResponseBody() = default ;
    GetApplicationRoleResponseBody& operator=(const GetApplicationRoleResponseBody &) = default ;
    GetApplicationRoleResponseBody& operator=(GetApplicationRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationRole : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationRole& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleName, applicationRoleName_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleValue, applicationRoleValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationRole& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleName, applicationRoleName_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleValue, applicationRoleValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      ApplicationRole() = default ;
      ApplicationRole(const ApplicationRole &) = default ;
      ApplicationRole(ApplicationRole &&) = default ;
      ApplicationRole(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationRole() = default ;
      ApplicationRole& operator=(const ApplicationRole &) = default ;
      ApplicationRole& operator=(ApplicationRole &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationRoleId_ == nullptr && this->applicationRoleName_ == nullptr && this->applicationRoleValue_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationRole& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationRoleId Field Functions 
      bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
      void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
      inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
      inline ApplicationRole& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


      // applicationRoleName Field Functions 
      bool hasApplicationRoleName() const { return this->applicationRoleName_ != nullptr;};
      void deleteApplicationRoleName() { this->applicationRoleName_ = nullptr;};
      inline string getApplicationRoleName() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleName_, "") };
      inline ApplicationRole& setApplicationRoleName(string applicationRoleName) { DARABONBA_PTR_SET_VALUE(applicationRoleName_, applicationRoleName) };


      // applicationRoleValue Field Functions 
      bool hasApplicationRoleValue() const { return this->applicationRoleValue_ != nullptr;};
      void deleteApplicationRoleValue() { this->applicationRoleValue_ = nullptr;};
      inline string getApplicationRoleValue() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleValue_, "") };
      inline ApplicationRole& setApplicationRoleValue(string applicationRoleValue) { DARABONBA_PTR_SET_VALUE(applicationRoleValue_, applicationRoleValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationRole& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 应用唯一标识
      shared_ptr<string> applicationId_ {};
      // 应用角色的唯一标识
      shared_ptr<string> applicationRoleId_ {};
      // 应用角色名称
      shared_ptr<string> applicationRoleName_ {};
      // 应用角色值
      shared_ptr<string> applicationRoleValue_ {};
      // 应用角色描述
      shared_ptr<string> description_ {};
      // EIAM 实例唯一标识
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->applicationRole_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationRole Field Functions 
    bool hasApplicationRole() const { return this->applicationRole_ != nullptr;};
    void deleteApplicationRole() { this->applicationRole_ = nullptr;};
    inline const GetApplicationRoleResponseBody::ApplicationRole & getApplicationRole() const { DARABONBA_PTR_GET_CONST(applicationRole_, GetApplicationRoleResponseBody::ApplicationRole) };
    inline GetApplicationRoleResponseBody::ApplicationRole getApplicationRole() { DARABONBA_PTR_GET(applicationRole_, GetApplicationRoleResponseBody::ApplicationRole) };
    inline GetApplicationRoleResponseBody& setApplicationRole(const GetApplicationRoleResponseBody::ApplicationRole & applicationRole) { DARABONBA_PTR_SET_VALUE(applicationRole_, applicationRole) };
    inline GetApplicationRoleResponseBody& setApplicationRole(GetApplicationRoleResponseBody::ApplicationRole && applicationRole) { DARABONBA_PTR_SET_RVALUE(applicationRole_, applicationRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetApplicationRoleResponseBody::ApplicationRole> applicationRole_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
