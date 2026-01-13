// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class GetInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    GetInstanceRequest() = default ;
    GetInstanceRequest(const GetInstanceRequest &) = default ;
    GetInstanceRequest(GetInstanceRequest &&) = default ;
    GetInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceRequest() = default ;
    GetInstanceRequest& operator=(const GetInstanceRequest &) = default ;
    GetInstanceRequest& operator=(GetInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
