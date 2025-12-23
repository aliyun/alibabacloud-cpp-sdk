// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONDEFAULTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONDEFAULTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionDefaultInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionDefaultInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionDefaultInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
    };
    UpdateFunctionDefaultInstanceRequest() = default ;
    UpdateFunctionDefaultInstanceRequest(const UpdateFunctionDefaultInstanceRequest &) = default ;
    UpdateFunctionDefaultInstanceRequest(UpdateFunctionDefaultInstanceRequest &&) = default ;
    UpdateFunctionDefaultInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionDefaultInstanceRequest() = default ;
    UpdateFunctionDefaultInstanceRequest& operator=(const UpdateFunctionDefaultInstanceRequest &) = default ;
    UpdateFunctionDefaultInstanceRequest& operator=(UpdateFunctionDefaultInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateFunctionDefaultInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
