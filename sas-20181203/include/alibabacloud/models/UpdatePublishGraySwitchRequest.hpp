// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLISHGRAYSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLISHGRAYSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdatePublishGraySwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublishGraySwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GraySwitchStatus, graySwitchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublishGraySwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GraySwitchStatus, graySwitchStatus_);
    };
    UpdatePublishGraySwitchRequest() = default ;
    UpdatePublishGraySwitchRequest(const UpdatePublishGraySwitchRequest &) = default ;
    UpdatePublishGraySwitchRequest(UpdatePublishGraySwitchRequest &&) = default ;
    UpdatePublishGraySwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublishGraySwitchRequest() = default ;
    UpdatePublishGraySwitchRequest& operator=(const UpdatePublishGraySwitchRequest &) = default ;
    UpdatePublishGraySwitchRequest& operator=(UpdatePublishGraySwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->graySwitchStatus_ != nullptr; };
    // graySwitchStatus Field Functions 
    bool hasGraySwitchStatus() const { return this->graySwitchStatus_ != nullptr;};
    void deleteGraySwitchStatus() { this->graySwitchStatus_ = nullptr;};
    inline int32_t graySwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(graySwitchStatus_, 0) };
    inline UpdatePublishGraySwitchRequest& setGraySwitchStatus(int32_t graySwitchStatus) { DARABONBA_PTR_SET_VALUE(graySwitchStatus_, graySwitchStatus) };


  protected:
    // Specifies whether to enable the canary release feature. Valid values:
    // 
    // *   **1**: enabled.
    // *   **0**: disabled.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> graySwitchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
