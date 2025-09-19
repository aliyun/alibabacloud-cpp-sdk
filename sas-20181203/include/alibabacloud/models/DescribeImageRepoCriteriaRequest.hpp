// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeImageRepoCriteriaRequest() = default ;
    DescribeImageRepoCriteriaRequest(const DescribeImageRepoCriteriaRequest &) = default ;
    DescribeImageRepoCriteriaRequest(DescribeImageRepoCriteriaRequest &&) = default ;
    DescribeImageRepoCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoCriteriaRequest() = default ;
    DescribeImageRepoCriteriaRequest& operator=(const DescribeImageRepoCriteriaRequest &) = default ;
    DescribeImageRepoCriteriaRequest& operator=(DescribeImageRepoCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeImageRepoCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The value of the filter condition.
    // 
    // > You can perform fuzzy search based on the image ID, image tag, image instance ID, image repository name, image repository namespace, image repository ID, image repository region, image digest, and image repository type.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
