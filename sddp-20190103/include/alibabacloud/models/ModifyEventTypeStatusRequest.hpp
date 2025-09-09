// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTTYPESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTTYPESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyEventTypeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventTypeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SubTypeIds, subTypeIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventTypeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SubTypeIds, subTypeIds_);
    };
    ModifyEventTypeStatusRequest() = default ;
    ModifyEventTypeStatusRequest(const ModifyEventTypeStatusRequest &) = default ;
    ModifyEventTypeStatusRequest(ModifyEventTypeStatusRequest &&) = default ;
    ModifyEventTypeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventTypeStatusRequest() = default ;
    ModifyEventTypeStatusRequest& operator=(const ModifyEventTypeStatusRequest &) = default ;
    ModifyEventTypeStatusRequest& operator=(ModifyEventTypeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureType_ != nullptr
        && this->lang_ != nullptr && this->subTypeIds_ != nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline ModifyEventTypeStatusRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyEventTypeStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // subTypeIds Field Functions 
    bool hasSubTypeIds() const { return this->subTypeIds_ != nullptr;};
    void deleteSubTypeIds() { this->subTypeIds_ = nullptr;};
    inline string subTypeIds() const { DARABONBA_PTR_GET_DEFAULT(subTypeIds_, "") };
    inline ModifyEventTypeStatusRequest& setSubTypeIds(string subTypeIds) { DARABONBA_PTR_SET_VALUE(subTypeIds_, subTypeIds) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The language of the content within the request and response. Valid values: **zh** and **en**. The value zh indicates Chinese, and the value en indicates English.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the anomalous event subtype. Separate multiple IDs with commas (,).
    // 
    // > You can call the **DescribeEventTypes** operation to query the ID of anomalous event subtype.
    std::shared_ptr<string> subTypeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
