// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCECRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCECRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeExposedInstanceCriteriaRequest() = default ;
    DescribeExposedInstanceCriteriaRequest(const DescribeExposedInstanceCriteriaRequest &) = default ;
    DescribeExposedInstanceCriteriaRequest(DescribeExposedInstanceCriteriaRequest &&) = default ;
    DescribeExposedInstanceCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceCriteriaRequest() = default ;
    DescribeExposedInstanceCriteriaRequest& operator=(const DescribeExposedInstanceCriteriaRequest &) = default ;
    DescribeExposedInstanceCriteriaRequest& operator=(DescribeExposedInstanceCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceDirectoryAccountId_ != nullptr
        && this->value_ != nullptr; };
    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline string resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, "") };
    inline DescribeExposedInstanceCriteriaRequest& setResourceDirectoryAccountId(string resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeExposedInstanceCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the account ID.
    std::shared_ptr<string> resourceDirectoryAccountId_ = nullptr;
    // The value of the search condition. Fuzzy match is supported.
    // 
    // >  You can specify the name, ID, public IP address, private IP address, component, port, or IP address of an exposed asset.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
