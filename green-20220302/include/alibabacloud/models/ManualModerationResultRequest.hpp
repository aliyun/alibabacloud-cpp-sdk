// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ManualModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ManualModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ManualModerationResultRequest() = default ;
    ManualModerationResultRequest(const ManualModerationResultRequest &) = default ;
    ManualModerationResultRequest(ManualModerationResultRequest &&) = default ;
    ManualModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualModerationResultRequest() = default ;
    ManualModerationResultRequest& operator=(const ManualModerationResultRequest &) = default ;
    ManualModerationResultRequest& operator=(ManualModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceParameters_ != nullptr; };
    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ManualModerationResultRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // Set of parameters required by the service, in JSON string format.
    // - TaskId: The task ID returned when the task was submitted.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
