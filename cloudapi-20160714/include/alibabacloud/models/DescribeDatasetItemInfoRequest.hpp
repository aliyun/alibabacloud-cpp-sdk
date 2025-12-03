// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetItemInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetItemInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetItemInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDatasetItemInfoRequest() = default ;
    DescribeDatasetItemInfoRequest(const DescribeDatasetItemInfoRequest &) = default ;
    DescribeDatasetItemInfoRequest(DescribeDatasetItemInfoRequest &&) = default ;
    DescribeDatasetItemInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetItemInfoRequest() = default ;
    DescribeDatasetItemInfoRequest& operator=(const DescribeDatasetItemInfoRequest &) = default ;
    DescribeDatasetItemInfoRequest& operator=(DescribeDatasetItemInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && return this->datasetItemId_ == nullptr && return this->securityToken_ == nullptr && return this->value_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DescribeDatasetItemInfoRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetItemId Field Functions 
    bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
    void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
    inline string datasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
    inline DescribeDatasetItemInfoRequest& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeDatasetItemInfoRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDatasetItemInfoRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The ID of the data entry.
    std::shared_ptr<string> datasetItemId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The value of the data entry.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
