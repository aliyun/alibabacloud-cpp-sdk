// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTCLIPBOARDGRAINEDS_HPP_
#define ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTCLIPBOARDGRAINEDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCenterPolicyRequestClipboardGraineds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenterPolicyRequestClipboardGraineds& obj) { 
      DARABONBA_PTR_TO_JSON(ClipboardSize, clipboardSize_);
      DARABONBA_PTR_TO_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
      DARABONBA_PTR_TO_JSON(ClipboardType, clipboardType_);
      DARABONBA_PTR_TO_JSON(GrainedType, grainedType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenterPolicyRequestClipboardGraineds& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipboardSize, clipboardSize_);
      DARABONBA_PTR_FROM_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
      DARABONBA_PTR_FROM_JSON(ClipboardType, clipboardType_);
      DARABONBA_PTR_FROM_JSON(GrainedType, grainedType_);
    };
    CreateCenterPolicyRequestClipboardGraineds() = default ;
    CreateCenterPolicyRequestClipboardGraineds(const CreateCenterPolicyRequestClipboardGraineds &) = default ;
    CreateCenterPolicyRequestClipboardGraineds(CreateCenterPolicyRequestClipboardGraineds &&) = default ;
    CreateCenterPolicyRequestClipboardGraineds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenterPolicyRequestClipboardGraineds() = default ;
    CreateCenterPolicyRequestClipboardGraineds& operator=(const CreateCenterPolicyRequestClipboardGraineds &) = default ;
    CreateCenterPolicyRequestClipboardGraineds& operator=(CreateCenterPolicyRequestClipboardGraineds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipboardSize_ == nullptr
        && return this->clipboardSizeUnit_ == nullptr && return this->clipboardType_ == nullptr && return this->grainedType_ == nullptr; };
    // clipboardSize Field Functions 
    bool hasClipboardSize() const { return this->clipboardSize_ != nullptr;};
    void deleteClipboardSize() { this->clipboardSize_ = nullptr;};
    inline int32_t clipboardSize() const { DARABONBA_PTR_GET_DEFAULT(clipboardSize_, 0) };
    inline CreateCenterPolicyRequestClipboardGraineds& setClipboardSize(int32_t clipboardSize) { DARABONBA_PTR_SET_VALUE(clipboardSize_, clipboardSize) };


    // clipboardSizeUnit Field Functions 
    bool hasClipboardSizeUnit() const { return this->clipboardSizeUnit_ != nullptr;};
    void deleteClipboardSizeUnit() { this->clipboardSizeUnit_ = nullptr;};
    inline string clipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(clipboardSizeUnit_, "") };
    inline CreateCenterPolicyRequestClipboardGraineds& setClipboardSizeUnit(string clipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(clipboardSizeUnit_, clipboardSizeUnit) };


    // clipboardType Field Functions 
    bool hasClipboardType() const { return this->clipboardType_ != nullptr;};
    void deleteClipboardType() { this->clipboardType_ = nullptr;};
    inline string clipboardType() const { DARABONBA_PTR_GET_DEFAULT(clipboardType_, "") };
    inline CreateCenterPolicyRequestClipboardGraineds& setClipboardType(string clipboardType) { DARABONBA_PTR_SET_VALUE(clipboardType_, clipboardType) };


    // grainedType Field Functions 
    bool hasGrainedType() const { return this->grainedType_ != nullptr;};
    void deleteGrainedType() { this->grainedType_ = nullptr;};
    inline string grainedType() const { DARABONBA_PTR_GET_DEFAULT(grainedType_, "") };
    inline CreateCenterPolicyRequestClipboardGraineds& setGrainedType(string grainedType) { DARABONBA_PTR_SET_VALUE(grainedType_, grainedType) };


  protected:
    std::shared_ptr<int32_t> clipboardSize_ = nullptr;
    std::shared_ptr<string> clipboardSizeUnit_ = nullptr;
    std::shared_ptr<string> clipboardType_ = nullptr;
    std::shared_ptr<string> grainedType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
