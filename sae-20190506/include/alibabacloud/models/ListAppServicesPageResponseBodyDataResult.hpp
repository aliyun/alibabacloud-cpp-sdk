// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSERVICESPAGERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSERVICESPAGERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppServicesPageResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppServicesPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppServicesPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAppServicesPageResponseBodyDataResult() = default ;
    ListAppServicesPageResponseBodyDataResult(const ListAppServicesPageResponseBodyDataResult &) = default ;
    ListAppServicesPageResponseBodyDataResult(ListAppServicesPageResponseBodyDataResult &&) = default ;
    ListAppServicesPageResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppServicesPageResponseBodyDataResult() = default ;
    ListAppServicesPageResponseBodyDataResult& operator=(const ListAppServicesPageResponseBodyDataResult &) = default ;
    ListAppServicesPageResponseBodyDataResult& operator=(ListAppServicesPageResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edasAppId_ == nullptr
        && return this->edasAppName_ == nullptr && return this->group_ == nullptr && return this->instanceNum_ == nullptr && return this->serviceName_ == nullptr && return this->version_ == nullptr; };
    // edasAppId Field Functions 
    bool hasEdasAppId() const { return this->edasAppId_ != nullptr;};
    void deleteEdasAppId() { this->edasAppId_ = nullptr;};
    inline string edasAppId() const { DARABONBA_PTR_GET_DEFAULT(edasAppId_, "") };
    inline ListAppServicesPageResponseBodyDataResult& setEdasAppId(string edasAppId) { DARABONBA_PTR_SET_VALUE(edasAppId_, edasAppId) };


    // edasAppName Field Functions 
    bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
    void deleteEdasAppName() { this->edasAppName_ = nullptr;};
    inline string edasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
    inline ListAppServicesPageResponseBodyDataResult& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListAppServicesPageResponseBodyDataResult& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int64_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0L) };
    inline ListAppServicesPageResponseBodyDataResult& setInstanceNum(int64_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAppServicesPageResponseBodyDataResult& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAppServicesPageResponseBodyDataResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> edasAppId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> edasAppName_ = nullptr;
    // The group to which the service belongs. You can create a custom group.
    std::shared_ptr<string> group_ = nullptr;
    // The number of instances.
    std::shared_ptr<int64_t> instanceNum_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The version of a service. You can create a custom version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
