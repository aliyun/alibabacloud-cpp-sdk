// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateAiModelSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiModelSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiModelSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    UpdateAiModelSourceRequest() = default ;
    UpdateAiModelSourceRequest(const UpdateAiModelSourceRequest &) = default ;
    UpdateAiModelSourceRequest(UpdateAiModelSourceRequest &&) = default ;
    UpdateAiModelSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiModelSourceRequest() = default ;
    UpdateAiModelSourceRequest& operator=(const UpdateAiModelSourceRequest &) = default ;
    UpdateAiModelSourceRequest& operator=(UpdateAiModelSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->expectedVersion_ == nullptr && this->serviceId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAiModelSourceRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateAiModelSourceRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateAiModelSourceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The display name of the model source or model provider.
    shared_ptr<string> displayName_ {};
    // The expected object version. Use the version returned by the most recent query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // The ID of the actual AI service bound to the model source.
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
