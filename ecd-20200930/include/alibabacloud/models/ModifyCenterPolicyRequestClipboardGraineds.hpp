// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTCLIPBOARDGRAINEDS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTCLIPBOARDGRAINEDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequestClipboardGraineds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequestClipboardGraineds& obj) { 
      DARABONBA_PTR_TO_JSON(ClipboardSize, clipboardSize_);
      DARABONBA_PTR_TO_JSON(ClipboardType, clipboardType_);
      DARABONBA_PTR_TO_JSON(GrainedType, grainedType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequestClipboardGraineds& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipboardSize, clipboardSize_);
      DARABONBA_PTR_FROM_JSON(ClipboardType, clipboardType_);
      DARABONBA_PTR_FROM_JSON(GrainedType, grainedType_);
    };
    ModifyCenterPolicyRequestClipboardGraineds() = default ;
    ModifyCenterPolicyRequestClipboardGraineds(const ModifyCenterPolicyRequestClipboardGraineds &) = default ;
    ModifyCenterPolicyRequestClipboardGraineds(ModifyCenterPolicyRequestClipboardGraineds &&) = default ;
    ModifyCenterPolicyRequestClipboardGraineds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequestClipboardGraineds() = default ;
    ModifyCenterPolicyRequestClipboardGraineds& operator=(const ModifyCenterPolicyRequestClipboardGraineds &) = default ;
    ModifyCenterPolicyRequestClipboardGraineds& operator=(ModifyCenterPolicyRequestClipboardGraineds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipboardSize_ == nullptr
        && return this->clipboardType_ == nullptr && return this->grainedType_ == nullptr; };
    // clipboardSize Field Functions 
    bool hasClipboardSize() const { return this->clipboardSize_ != nullptr;};
    void deleteClipboardSize() { this->clipboardSize_ = nullptr;};
    inline int32_t clipboardSize() const { DARABONBA_PTR_GET_DEFAULT(clipboardSize_, 0) };
    inline ModifyCenterPolicyRequestClipboardGraineds& setClipboardSize(int32_t clipboardSize) { DARABONBA_PTR_SET_VALUE(clipboardSize_, clipboardSize) };


    // clipboardType Field Functions 
    bool hasClipboardType() const { return this->clipboardType_ != nullptr;};
    void deleteClipboardType() { this->clipboardType_ = nullptr;};
    inline string clipboardType() const { DARABONBA_PTR_GET_DEFAULT(clipboardType_, "") };
    inline ModifyCenterPolicyRequestClipboardGraineds& setClipboardType(string clipboardType) { DARABONBA_PTR_SET_VALUE(clipboardType_, clipboardType) };


    // grainedType Field Functions 
    bool hasGrainedType() const { return this->grainedType_ != nullptr;};
    void deleteGrainedType() { this->grainedType_ = nullptr;};
    inline string grainedType() const { DARABONBA_PTR_GET_DEFAULT(grainedType_, "") };
    inline ModifyCenterPolicyRequestClipboardGraineds& setGrainedType(string grainedType) { DARABONBA_PTR_SET_VALUE(grainedType_, grainedType) };


  protected:
    std::shared_ptr<int32_t> clipboardSize_ = nullptr;
    std::shared_ptr<string> clipboardType_ = nullptr;
    std::shared_ptr<string> grainedType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
