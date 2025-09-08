// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGMAPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGMAPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateConfigMapResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigMapResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigMapResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
    };
    UpdateConfigMapResponseBodyData() = default ;
    UpdateConfigMapResponseBodyData(const UpdateConfigMapResponseBodyData &) = default ;
    UpdateConfigMapResponseBodyData(UpdateConfigMapResponseBodyData &&) = default ;
    UpdateConfigMapResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigMapResponseBodyData() = default ;
    UpdateConfigMapResponseBodyData& operator=(const UpdateConfigMapResponseBodyData &) = default ;
    UpdateConfigMapResponseBodyData& operator=(UpdateConfigMapResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configMapId_ != nullptr; };
    // configMapId Field Functions 
    bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
    void deleteConfigMapId() { this->configMapId_ = nullptr;};
    inline string configMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, "") };
    inline UpdateConfigMapResponseBodyData& setConfigMapId(string configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


  protected:
    // The returned error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    std::shared_ptr<string> configMapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
