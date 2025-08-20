// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCLOTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCLOTHREQUEST_HPP_
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
  class SegmentClothRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentClothRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClothClass, clothClass_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(OutMode, outMode_);
      DARABONBA_PTR_TO_JSON(ReturnForm, returnForm_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentClothRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClothClass, clothClass_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(OutMode, outMode_);
      DARABONBA_PTR_FROM_JSON(ReturnForm, returnForm_);
    };
    SegmentClothRequest() = default ;
    SegmentClothRequest(const SegmentClothRequest &) = default ;
    SegmentClothRequest(SegmentClothRequest &&) = default ;
    SegmentClothRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentClothRequest() = default ;
    SegmentClothRequest& operator=(const SegmentClothRequest &) = default ;
    SegmentClothRequest& operator=(SegmentClothRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clothClass_ != nullptr
        && this->imageURL_ != nullptr && this->outMode_ != nullptr && this->returnForm_ != nullptr; };
    // clothClass Field Functions 
    bool hasClothClass() const { return this->clothClass_ != nullptr;};
    void deleteClothClass() { this->clothClass_ = nullptr;};
    inline const vector<string> & clothClass() const { DARABONBA_PTR_GET_CONST(clothClass_, vector<string>) };
    inline vector<string> clothClass() { DARABONBA_PTR_GET(clothClass_, vector<string>) };
    inline SegmentClothRequest& setClothClass(const vector<string> & clothClass) { DARABONBA_PTR_SET_VALUE(clothClass_, clothClass) };
    inline SegmentClothRequest& setClothClass(vector<string> && clothClass) { DARABONBA_PTR_SET_RVALUE(clothClass_, clothClass) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline SegmentClothRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // outMode Field Functions 
    bool hasOutMode() const { return this->outMode_ != nullptr;};
    void deleteOutMode() { this->outMode_ = nullptr;};
    inline int64_t outMode() const { DARABONBA_PTR_GET_DEFAULT(outMode_, 0L) };
    inline SegmentClothRequest& setOutMode(int64_t outMode) { DARABONBA_PTR_SET_VALUE(outMode_, outMode) };


    // returnForm Field Functions 
    bool hasReturnForm() const { return this->returnForm_ != nullptr;};
    void deleteReturnForm() { this->returnForm_ = nullptr;};
    inline string returnForm() const { DARABONBA_PTR_GET_DEFAULT(returnForm_, "") };
    inline SegmentClothRequest& setReturnForm(string returnForm) { DARABONBA_PTR_SET_VALUE(returnForm_, returnForm) };


  protected:
    std::shared_ptr<vector<string>> clothClass_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<int64_t> outMode_ = nullptr;
    std::shared_ptr<string> returnForm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
