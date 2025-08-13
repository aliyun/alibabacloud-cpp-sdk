// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEUREKASERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEUREKASERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListEurekaServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEurekaServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstancesId, instancesId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpStatus, upStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListEurekaServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancesId, instancesId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpStatus, upStatus_);
    };
    ListEurekaServicesResponseBodyData() = default ;
    ListEurekaServicesResponseBodyData(const ListEurekaServicesResponseBodyData &) = default ;
    ListEurekaServicesResponseBodyData(ListEurekaServicesResponseBodyData &&) = default ;
    ListEurekaServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEurekaServicesResponseBodyData() = default ;
    ListEurekaServicesResponseBodyData& operator=(const ListEurekaServicesResponseBodyData &) = default ;
    ListEurekaServicesResponseBodyData& operator=(ListEurekaServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instancesId_ != nullptr
        && this->name_ != nullptr && this->upStatus_ != nullptr; };
    // instancesId Field Functions 
    bool hasInstancesId() const { return this->instancesId_ != nullptr;};
    void deleteInstancesId() { this->instancesId_ = nullptr;};
    inline const vector<string> & instancesId() const { DARABONBA_PTR_GET_CONST(instancesId_, vector<string>) };
    inline vector<string> instancesId() { DARABONBA_PTR_GET(instancesId_, vector<string>) };
    inline ListEurekaServicesResponseBodyData& setInstancesId(const vector<string> & instancesId) { DARABONBA_PTR_SET_VALUE(instancesId_, instancesId) };
    inline ListEurekaServicesResponseBodyData& setInstancesId(vector<string> && instancesId) { DARABONBA_PTR_SET_RVALUE(instancesId_, instancesId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEurekaServicesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // upStatus Field Functions 
    bool hasUpStatus() const { return this->upStatus_ != nullptr;};
    void deleteUpStatus() { this->upStatus_ = nullptr;};
    inline string upStatus() const { DARABONBA_PTR_GET_DEFAULT(upStatus_, "") };
    inline ListEurekaServicesResponseBodyData& setUpStatus(string upStatus) { DARABONBA_PTR_SET_VALUE(upStatus_, upStatus) };


  protected:
    // The details of the instance.
    std::shared_ptr<vector<string>> instancesId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The number of service providers. The value is in the following format: Number of healthy instances/Total number of instances.
    std::shared_ptr<string> upStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
