// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCESLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCESLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    UpdateEventStreamingRequestSourceSourceSLSParameters() = default ;
    UpdateEventStreamingRequestSourceSourceSLSParameters(const UpdateEventStreamingRequestSourceSourceSLSParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceSLSParameters(UpdateEventStreamingRequestSourceSourceSLSParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceSLSParameters() = default ;
    UpdateEventStreamingRequestSourceSourceSLSParameters& operator=(const UpdateEventStreamingRequestSourceSourceSLSParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceSLSParameters& operator=(UpdateEventStreamingRequestSourceSourceSLSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleName_ != nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateEventStreamingRequestSourceSourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
