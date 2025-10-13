// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateInstanceNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
    };
    UpdateInstanceNameRequest() = default ;
    UpdateInstanceNameRequest(const UpdateInstanceNameRequest &) = default ;
    UpdateInstanceNameRequest(UpdateInstanceNameRequest &&) = default ;
    UpdateInstanceNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceNameRequest() = default ;
    UpdateInstanceNameRequest& operator=(const UpdateInstanceNameRequest &) = default ;
    UpdateInstanceNameRequest& operator=(UpdateInstanceNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceNameRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The new name of the instance. The name must be 2 to 64 characters in length.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
