// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageResultExtResponseBodyDataCustomImage.hpp>
#include <alibabacloud/models/DescribeImageResultExtResponseBodyDataPublicFigure.hpp>
#include <alibabacloud/models/DescribeImageResultExtResponseBodyDataTextInImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageResultExtResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
      DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
      DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
    };
    DescribeImageResultExtResponseBodyData() = default ;
    DescribeImageResultExtResponseBodyData(const DescribeImageResultExtResponseBodyData &) = default ;
    DescribeImageResultExtResponseBodyData(DescribeImageResultExtResponseBodyData &&) = default ;
    DescribeImageResultExtResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtResponseBodyData() = default ;
    DescribeImageResultExtResponseBodyData& operator=(const DescribeImageResultExtResponseBodyData &) = default ;
    DescribeImageResultExtResponseBodyData& operator=(DescribeImageResultExtResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customImage_ != nullptr
        && this->publicFigure_ != nullptr && this->textInImage_ != nullptr; };
    // customImage Field Functions 
    bool hasCustomImage() const { return this->customImage_ != nullptr;};
    void deleteCustomImage() { this->customImage_ = nullptr;};
    inline const vector<Models::DescribeImageResultExtResponseBodyDataCustomImage> & customImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Models::DescribeImageResultExtResponseBodyDataCustomImage>) };
    inline vector<Models::DescribeImageResultExtResponseBodyDataCustomImage> customImage() { DARABONBA_PTR_GET(customImage_, vector<Models::DescribeImageResultExtResponseBodyDataCustomImage>) };
    inline DescribeImageResultExtResponseBodyData& setCustomImage(const vector<Models::DescribeImageResultExtResponseBodyDataCustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
    inline DescribeImageResultExtResponseBodyData& setCustomImage(vector<Models::DescribeImageResultExtResponseBodyDataCustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


    // publicFigure Field Functions 
    bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
    void deletePublicFigure() { this->publicFigure_ = nullptr;};
    inline const vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure> & publicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure>) };
    inline vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure> publicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure>) };
    inline DescribeImageResultExtResponseBodyData& setPublicFigure(const vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
    inline DescribeImageResultExtResponseBodyData& setPublicFigure(vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


    // textInImage Field Functions 
    bool hasTextInImage() const { return this->textInImage_ != nullptr;};
    void deleteTextInImage() { this->textInImage_ = nullptr;};
    inline const Models::DescribeImageResultExtResponseBodyDataTextInImage & textInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Models::DescribeImageResultExtResponseBodyDataTextInImage) };
    inline Models::DescribeImageResultExtResponseBodyDataTextInImage textInImage() { DARABONBA_PTR_GET(textInImage_, Models::DescribeImageResultExtResponseBodyDataTextInImage) };
    inline DescribeImageResultExtResponseBodyData& setTextInImage(const Models::DescribeImageResultExtResponseBodyDataTextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
    inline DescribeImageResultExtResponseBodyData& setTextInImage(Models::DescribeImageResultExtResponseBodyDataTextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


  protected:
    // If a custom image library is hit, information about the hit custom image library is returned.
    std::shared_ptr<vector<Models::DescribeImageResultExtResponseBodyDataCustomImage>> customImage_ = nullptr;
    // Person information list.
    std::shared_ptr<vector<Models::DescribeImageResultExtResponseBodyDataPublicFigure>> publicFigure_ = nullptr;
    // Returns the text information in the hit image.
    std::shared_ptr<Models::DescribeImageResultExtResponseBodyDataTextInImage> textInImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
