// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(MaterialValue, materialValue_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(MaterialValue, materialValue_);
    };
    DetectFaceAttributesRequest() = default ;
    DetectFaceAttributesRequest(const DetectFaceAttributesRequest &) = default ;
    DetectFaceAttributesRequest(DetectFaceAttributesRequest &&) = default ;
    DetectFaceAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesRequest() = default ;
    DetectFaceAttributesRequest& operator=(const DetectFaceAttributesRequest &) = default ;
    DetectFaceAttributesRequest& operator=(DetectFaceAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->materialValue_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DetectFaceAttributesRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // materialValue Field Functions 
    bool hasMaterialValue() const { return this->materialValue_ != nullptr;};
    void deleteMaterialValue() { this->materialValue_ = nullptr;};
    inline string getMaterialValue() const { DARABONBA_PTR_GET_DEFAULT(materialValue_, "") };
    inline DetectFaceAttributesRequest& setMaterialValue(string materialValue) { DARABONBA_PTR_SET_VALUE(materialValue_, materialValue) };


  protected:
    // Identifier for the business scenario using real-person authentication services.
    shared_ptr<string> bizType_ {};
    // The photo to be detected, see the instructions for uploading image addresses for format description. A maximum of 5 faces can be detected in a single image.
    // 
    // This parameter is required.
    shared_ptr<string> materialValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
