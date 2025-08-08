// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyApplicationSpecRequestInstanceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ModifyApplicationSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
    };
    ModifyApplicationSpecRequest() = default ;
    ModifyApplicationSpecRequest(const ModifyApplicationSpecRequest &) = default ;
    ModifyApplicationSpecRequest(ModifyApplicationSpecRequest &&) = default ;
    ModifyApplicationSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationSpecRequest() = default ;
    ModifyApplicationSpecRequest& operator=(const ModifyApplicationSpecRequest &) = default ;
    ModifyApplicationSpecRequest& operator=(ModifyApplicationSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->instanceSpec_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationSpecRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const vector<ModifyApplicationSpecRequestInstanceSpec> & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, vector<ModifyApplicationSpecRequestInstanceSpec>) };
    inline vector<ModifyApplicationSpecRequestInstanceSpec> instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, vector<ModifyApplicationSpecRequestInstanceSpec>) };
    inline ModifyApplicationSpecRequest& setInstanceSpec(const vector<ModifyApplicationSpecRequestInstanceSpec> & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline ModifyApplicationSpecRequest& setInstanceSpec(vector<ModifyApplicationSpecRequestInstanceSpec> && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<vector<ModifyApplicationSpecRequestInstanceSpec>> instanceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
