// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIMODELPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIMODELPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateAiModelProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiModelProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiModelProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
    };
    UpdateAiModelProviderRequest() = default ;
    UpdateAiModelProviderRequest(const UpdateAiModelProviderRequest &) = default ;
    UpdateAiModelProviderRequest(UpdateAiModelProviderRequest &&) = default ;
    UpdateAiModelProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiModelProviderRequest() = default ;
    UpdateAiModelProviderRequest& operator=(const UpdateAiModelProviderRequest &) = default ;
    UpdateAiModelProviderRequest& operator=(UpdateAiModelProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->serviceIds_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAiModelProviderRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline UpdateAiModelProviderRequest& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline UpdateAiModelProviderRequest& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    // The display name of the model provider. This parameter is required. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The complete set of AI service IDs to bind to the model provider. If this parameter is not specified, the existing bindings are retained. If an empty array is specified, all bindings are cleared. Duplicate and empty values are normalized.
    shared_ptr<vector<string>> serviceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
