// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINSTANCELABELS_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINSTANCELABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ResourceInstanceLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInstanceLabels& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceInstanceLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
    };
    ResourceInstanceLabels() = default ;
    ResourceInstanceLabels(const ResourceInstanceLabels &) = default ;
    ResourceInstanceLabels(ResourceInstanceLabels &&) = default ;
    ResourceInstanceLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInstanceLabels() = default ;
    ResourceInstanceLabels& operator=(const ResourceInstanceLabels &) = default ;
    ResourceInstanceLabels& operator=(ResourceInstanceLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelKey_ != nullptr
        && this->labelValue_ != nullptr; };
    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string labelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline ResourceInstanceLabels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // labelValue Field Functions 
    bool hasLabelValue() const { return this->labelValue_ != nullptr;};
    void deleteLabelValue() { this->labelValue_ = nullptr;};
    inline string labelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
    inline ResourceInstanceLabels& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


  protected:
    std::shared_ptr<string> labelKey_ = nullptr;
    std::shared_ptr<string> labelValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
