// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODYPERSISTENTAPPINSTANCEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODYPERSISTENTAPPINSTANCEMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentName, appInstancePersistentName_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentStatus, appInstancePersistentStatus_);
      DARABONBA_PTR_TO_JSON(AppInstanceStatus, appInstanceStatus_);
      DARABONBA_PTR_TO_JSON(AuthorizedUsers, authorizedUsers_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
    };
    friend void from_json(const Darabonba::Json& j, ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentName, appInstancePersistentName_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentStatus, appInstancePersistentStatus_);
      DARABONBA_PTR_FROM_JSON(AppInstanceStatus, appInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUsers, authorizedUsers_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
    };
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels() = default ;
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels(const ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels &) = default ;
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels(ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels &&) = default ;
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels() = default ;
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& operator=(const ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels &) = default ;
    ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& operator=(ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->appInstanceId_ != nullptr && this->appInstancePersistentId_ != nullptr && this->appInstancePersistentName_ != nullptr && this->appInstancePersistentStatus_ != nullptr && this->appInstanceStatus_ != nullptr
        && this->authorizedUsers_ != nullptr && this->gmtCreate_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string appInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // appInstancePersistentName Field Functions 
    bool hasAppInstancePersistentName() const { return this->appInstancePersistentName_ != nullptr;};
    void deleteAppInstancePersistentName() { this->appInstancePersistentName_ = nullptr;};
    inline string appInstancePersistentName() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentName_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstancePersistentName(string appInstancePersistentName) { DARABONBA_PTR_SET_VALUE(appInstancePersistentName_, appInstancePersistentName) };


    // appInstancePersistentStatus Field Functions 
    bool hasAppInstancePersistentStatus() const { return this->appInstancePersistentStatus_ != nullptr;};
    void deleteAppInstancePersistentStatus() { this->appInstancePersistentStatus_ = nullptr;};
    inline string appInstancePersistentStatus() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentStatus_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstancePersistentStatus(string appInstancePersistentStatus) { DARABONBA_PTR_SET_VALUE(appInstancePersistentStatus_, appInstancePersistentStatus) };


    // appInstanceStatus Field Functions 
    bool hasAppInstanceStatus() const { return this->appInstanceStatus_ != nullptr;};
    void deleteAppInstanceStatus() { this->appInstanceStatus_ = nullptr;};
    inline string appInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(appInstanceStatus_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAppInstanceStatus(string appInstanceStatus) { DARABONBA_PTR_SET_VALUE(appInstanceStatus_, appInstanceStatus) };


    // authorizedUsers Field Functions 
    bool hasAuthorizedUsers() const { return this->authorizedUsers_ != nullptr;};
    void deleteAuthorizedUsers() { this->authorizedUsers_ = nullptr;};
    inline const vector<string> & authorizedUsers() const { DARABONBA_PTR_GET_CONST(authorizedUsers_, vector<string>) };
    inline vector<string> authorizedUsers() { DARABONBA_PTR_GET(authorizedUsers_, vector<string>) };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAuthorizedUsers(const vector<string> & authorizedUsers) { DARABONBA_PTR_SET_VALUE(authorizedUsers_, authorizedUsers) };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setAuthorizedUsers(vector<string> && authorizedUsers) { DARABONBA_PTR_SET_RVALUE(authorizedUsers_, authorizedUsers) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


  protected:
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> appInstanceId_ = nullptr;
    std::shared_ptr<string> appInstancePersistentId_ = nullptr;
    std::shared_ptr<string> appInstancePersistentName_ = nullptr;
    std::shared_ptr<string> appInstancePersistentStatus_ = nullptr;
    std::shared_ptr<string> appInstanceStatus_ = nullptr;
    std::shared_ptr<vector<string>> authorizedUsers_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
