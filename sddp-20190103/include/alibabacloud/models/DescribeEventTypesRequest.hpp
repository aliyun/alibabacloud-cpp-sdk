// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ParentTypeId, parentTypeId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ParentTypeId, parentTypeId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventTypesRequest() = default ;
    DescribeEventTypesRequest(const DescribeEventTypesRequest &) = default ;
    DescribeEventTypesRequest(DescribeEventTypesRequest &&) = default ;
    DescribeEventTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTypesRequest() = default ;
    DescribeEventTypesRequest& operator=(const DescribeEventTypesRequest &) = default ;
    DescribeEventTypesRequest& operator=(DescribeEventTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && this->lang_ == nullptr && this->parentTypeId_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeEventTypesRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventTypesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // parentTypeId Field Functions 
    bool hasParentTypeId() const { return this->parentTypeId_ != nullptr;};
    void deleteParentTypeId() { this->parentTypeId_ = nullptr;};
    inline int64_t getParentTypeId() const { DARABONBA_PTR_GET_DEFAULT(parentTypeId_, 0L) };
    inline DescribeEventTypesRequest& setParentTypeId(int64_t parentTypeId) { DARABONBA_PTR_SET_VALUE(parentTypeId_, parentTypeId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int32_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0) };
    inline DescribeEventTypesRequest& setResourceId(int32_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventTypesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The type of anomalous event for which you want to query the anomalous events of subtypes. Valid values:
    // 
    // *   **01**: anomalous permission usage
    // *   **02**: anomalous data flow
    // *   **03**: anomalous data operation
    shared_ptr<int64_t> parentTypeId_ {};
    // The type of the resource. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates Object Storage Service (OSS). The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    shared_ptr<int32_t> resourceId_ {};
    // The status of the anomalous event. Valid values:
    // 
    // *   **1**: enabled
    // *   **2**: disabled
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
