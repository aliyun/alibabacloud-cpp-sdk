// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeImageCriteriaRequest() = default ;
    DescribeImageCriteriaRequest(const DescribeImageCriteriaRequest &) = default ;
    DescribeImageCriteriaRequest(DescribeImageCriteriaRequest &&) = default ;
    DescribeImageCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageCriteriaRequest() = default ;
    DescribeImageCriteriaRequest& operator=(const DescribeImageCriteriaRequest &) = default ;
    DescribeImageCriteriaRequest& operator=(DescribeImageCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeImageCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The keyword that you specify for fuzzy search when you query the image.
    // 
    // > The value of this parameter can be an image ID, image tag, image instance ID, image repository name, image repository ID, image repository namespace, image region, image digest, or image repository type.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
