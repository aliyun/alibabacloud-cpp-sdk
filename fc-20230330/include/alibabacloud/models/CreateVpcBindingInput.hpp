// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCBINDINGINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCBINDINGINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateVpcBindingInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcBindingInput& obj) { 
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcBindingInput& obj) { 
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    CreateVpcBindingInput() = default ;
    CreateVpcBindingInput(const CreateVpcBindingInput &) = default ;
    CreateVpcBindingInput(CreateVpcBindingInput &&) = default ;
    CreateVpcBindingInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcBindingInput() = default ;
    CreateVpcBindingInput& operator=(const CreateVpcBindingInput &) = default ;
    CreateVpcBindingInput& operator=(CreateVpcBindingInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcBindingInput& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
