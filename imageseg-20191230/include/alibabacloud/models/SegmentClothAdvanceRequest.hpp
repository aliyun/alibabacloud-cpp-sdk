// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCLOTHADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCLOTHADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentClothAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentClothAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClothClass, clothClass_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(OutMode, outMode_);
      DARABONBA_PTR_TO_JSON(ReturnForm, returnForm_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentClothAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClothClass, clothClass_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(OutMode, outMode_);
      DARABONBA_PTR_FROM_JSON(ReturnForm, returnForm_);
    };
    SegmentClothAdvanceRequest() = default ;
    SegmentClothAdvanceRequest(const SegmentClothAdvanceRequest &) = default ;
    SegmentClothAdvanceRequest(SegmentClothAdvanceRequest &&) = default ;
    SegmentClothAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentClothAdvanceRequest() = default ;
    SegmentClothAdvanceRequest& operator=(const SegmentClothAdvanceRequest &) = default ;
    SegmentClothAdvanceRequest& operator=(SegmentClothAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clothClass_ == nullptr
        && return this->imageURLObject_ == nullptr && return this->outMode_ == nullptr && return this->returnForm_ == nullptr; };
    // clothClass Field Functions 
    bool hasClothClass() const { return this->clothClass_ != nullptr;};
    void deleteClothClass() { this->clothClass_ = nullptr;};
    inline const vector<string> & clothClass() const { DARABONBA_PTR_GET_CONST(clothClass_, vector<string>) };
    inline vector<string> clothClass() { DARABONBA_PTR_GET(clothClass_, vector<string>) };
    inline SegmentClothAdvanceRequest& setClothClass(const vector<string> & clothClass) { DARABONBA_PTR_SET_VALUE(clothClass_, clothClass) };
    inline SegmentClothAdvanceRequest& setClothClass(vector<string> && clothClass) { DARABONBA_PTR_SET_RVALUE(clothClass_, clothClass) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline SegmentClothAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // outMode Field Functions 
    bool hasOutMode() const { return this->outMode_ != nullptr;};
    void deleteOutMode() { this->outMode_ = nullptr;};
    inline int64_t outMode() const { DARABONBA_PTR_GET_DEFAULT(outMode_, 0L) };
    inline SegmentClothAdvanceRequest& setOutMode(int64_t outMode) { DARABONBA_PTR_SET_VALUE(outMode_, outMode) };


    // returnForm Field Functions 
    bool hasReturnForm() const { return this->returnForm_ != nullptr;};
    void deleteReturnForm() { this->returnForm_ = nullptr;};
    inline string returnForm() const { DARABONBA_PTR_GET_DEFAULT(returnForm_, "") };
    inline SegmentClothAdvanceRequest& setReturnForm(string returnForm) { DARABONBA_PTR_SET_VALUE(returnForm_, returnForm) };


  protected:
    std::shared_ptr<vector<string>> clothClass_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<int64_t> outMode_ = nullptr;
    std::shared_ptr<string> returnForm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
