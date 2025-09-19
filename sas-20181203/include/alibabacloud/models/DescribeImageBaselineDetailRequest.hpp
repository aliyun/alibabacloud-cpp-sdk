// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeImageBaselineDetailRequest() = default ;
    DescribeImageBaselineDetailRequest(const DescribeImageBaselineDetailRequest &) = default ;
    DescribeImageBaselineDetailRequest(DescribeImageBaselineDetailRequest &&) = default ;
    DescribeImageBaselineDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineDetailRequest() = default ;
    DescribeImageBaselineDetailRequest& operator=(const DescribeImageBaselineDetailRequest &) = default ;
    DescribeImageBaselineDetailRequest& operator=(DescribeImageBaselineDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineItemKey_ != nullptr
        && this->imageUuid_ != nullptr && this->lang_ != nullptr; };
    // baselineItemKey Field Functions 
    bool hasBaselineItemKey() const { return this->baselineItemKey_ != nullptr;};
    void deleteBaselineItemKey() { this->baselineItemKey_ = nullptr;};
    inline string baselineItemKey() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKey_, "") };
    inline DescribeImageBaselineDetailRequest& setBaselineItemKey(string baselineItemKey) { DARABONBA_PTR_SET_VALUE(baselineItemKey_, baselineItemKey) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageBaselineDetailRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageBaselineDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The information about the baseline.
    std::shared_ptr<string> baselineItemKey_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
