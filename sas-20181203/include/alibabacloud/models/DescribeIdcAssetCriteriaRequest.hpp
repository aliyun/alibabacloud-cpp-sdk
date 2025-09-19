// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCASSETCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCASSETCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcAssetCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeIdcAssetCriteriaRequest() = default ;
    DescribeIdcAssetCriteriaRequest(const DescribeIdcAssetCriteriaRequest &) = default ;
    DescribeIdcAssetCriteriaRequest(DescribeIdcAssetCriteriaRequest &&) = default ;
    DescribeIdcAssetCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcAssetCriteriaRequest() = default ;
    DescribeIdcAssetCriteriaRequest& operator=(const DescribeIdcAssetCriteriaRequest &) = default ;
    DescribeIdcAssetCriteriaRequest& operator=(DescribeIdcAssetCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->value_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIdcAssetCriteriaRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeIdcAssetCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The status of the IP address. Valid values:
    // 
    // *   **0**: The IP address is valid.
    // *   **1**: The IP address is ignored.
    // *   *2*: The IP address is invalid.
    // *   *3*: The IP address is expired.
    // *   *4*: The probe that is used to scan the IP address does not exist.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The keyword that is used to match assets in fuzzy mode.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
