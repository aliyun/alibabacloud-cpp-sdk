// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CheckServiceLinkedRoleForDeletingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForDeletingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Deletable, deletable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleUsages, roleUsages_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForDeletingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleUsages, roleUsages_);
    };
    CheckServiceLinkedRoleForDeletingResponseBody() = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(const CheckServiceLinkedRoleForDeletingResponseBody &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(CheckServiceLinkedRoleForDeletingResponseBody &&) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForDeletingResponseBody() = default ;
    CheckServiceLinkedRoleForDeletingResponseBody& operator=(const CheckServiceLinkedRoleForDeletingResponseBody &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody& operator=(CheckServiceLinkedRoleForDeletingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleUsages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleUsages& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
      };
      friend void from_json(const Darabonba::Json& j, RoleUsages& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
      };
      RoleUsages() = default ;
      RoleUsages(const RoleUsages &) = default ;
      RoleUsages(RoleUsages &&) = default ;
      RoleUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleUsages() = default ;
      RoleUsages& operator=(const RoleUsages &) = default ;
      RoleUsages& operator=(RoleUsages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->region_ == nullptr
        && this->resources_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline RoleUsages& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
      inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
      inline RoleUsages& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline RoleUsages& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      shared_ptr<string> region_ {};
      shared_ptr<vector<string>> resources_ {};
    };

    virtual bool empty() const override { return this->deletable_ == nullptr
        && this->requestId_ == nullptr && this->roleUsages_ == nullptr; };
    // deletable Field Functions 
    bool hasDeletable() const { return this->deletable_ != nullptr;};
    void deleteDeletable() { this->deletable_ = nullptr;};
    inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleUsages Field Functions 
    bool hasRoleUsages() const { return this->roleUsages_ != nullptr;};
    void deleteRoleUsages() { this->roleUsages_ = nullptr;};
    inline const vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages> & getRoleUsages() const { DARABONBA_PTR_GET_CONST(roleUsages_, vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages>) };
    inline vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages> getRoleUsages() { DARABONBA_PTR_GET(roleUsages_, vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages>) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRoleUsages(const vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages> & roleUsages) { DARABONBA_PTR_SET_VALUE(roleUsages_, roleUsages) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRoleUsages(vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages> && roleUsages) { DARABONBA_PTR_SET_RVALUE(roleUsages_, roleUsages) };


  protected:
    shared_ptr<bool> deletable_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CheckServiceLinkedRoleForDeletingResponseBody::RoleUsages>> roleUsages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
