// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteServiceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(SoftRestart, softRestart_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(SoftRestart, softRestart_);
    };
    DeleteServiceInstancesRequest() = default ;
    DeleteServiceInstancesRequest(const DeleteServiceInstancesRequest &) = default ;
    DeleteServiceInstancesRequest(DeleteServiceInstancesRequest &&) = default ;
    DeleteServiceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceInstancesRequest() = default ;
    DeleteServiceInstancesRequest& operator=(const DeleteServiceInstancesRequest &) = default ;
    DeleteServiceInstancesRequest& operator=(DeleteServiceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->container_ != nullptr
        && this->instanceList_ != nullptr && this->softRestart_ != nullptr; };
    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string container() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline DeleteServiceInstancesRequest& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline string instanceList() const { DARABONBA_PTR_GET_DEFAULT(instanceList_, "") };
    inline DeleteServiceInstancesRequest& setInstanceList(string instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };


    // softRestart Field Functions 
    bool hasSoftRestart() const { return this->softRestart_ != nullptr;};
    void deleteSoftRestart() { this->softRestart_ = nullptr;};
    inline bool softRestart() const { DARABONBA_PTR_GET_DEFAULT(softRestart_, false) };
    inline DeleteServiceInstancesRequest& setSoftRestart(bool softRestart) { DARABONBA_PTR_SET_VALUE(softRestart_, softRestart) };


  protected:
    // The name of the container whose process needs to be restarted. This parameter takes effect only if the SoftRestart parameter is set to true.
    std::shared_ptr<string> container_ = nullptr;
    // The instances that you want to restart. Separate multiple instance names with commas (,). For more information about how to query the instance name, see [ListServiceInstances](https://help.aliyun.com/document_detail/412108.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceList_ = nullptr;
    // Specifies whether to restart only the container process without recreating the instance. Default value: false. Valid values: true and false.
    std::shared_ptr<bool> softRestart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
