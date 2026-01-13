// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDINSTANCE2VPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDINSTANCE2VPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UnbindInstance2VpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindInstance2VpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceVpcName, instanceVpcName_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindInstance2VpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceVpcName, instanceVpcName_);
    };
    UnbindInstance2VpcRequest() = default ;
    UnbindInstance2VpcRequest(const UnbindInstance2VpcRequest &) = default ;
    UnbindInstance2VpcRequest(UnbindInstance2VpcRequest &&) = default ;
    UnbindInstance2VpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindInstance2VpcRequest() = default ;
    UnbindInstance2VpcRequest& operator=(const UnbindInstance2VpcRequest &) = default ;
    UnbindInstance2VpcRequest& operator=(UnbindInstance2VpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->instanceVpcName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UnbindInstance2VpcRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceVpcName Field Functions 
    bool hasInstanceVpcName() const { return this->instanceVpcName_ != nullptr;};
    void deleteInstanceVpcName() { this->instanceVpcName_ = nullptr;};
    inline string getInstanceVpcName() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcName_, "") };
    inline UnbindInstance2VpcRequest& setInstanceVpcName(string instanceVpcName) { DARABONBA_PTR_SET_VALUE(instanceVpcName_, instanceVpcName) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> instanceVpcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
