// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsRdsInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsRdsInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsRdsInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    DescribeDrdsRdsInstancesRequest() = default ;
    DescribeDrdsRdsInstancesRequest(const DescribeDrdsRdsInstancesRequest &) = default ;
    DescribeDrdsRdsInstancesRequest(DescribeDrdsRdsInstancesRequest &&) = default ;
    DescribeDrdsRdsInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsRdsInstancesRequest() = default ;
    DescribeDrdsRdsInstancesRequest& operator=(const DescribeDrdsRdsInstancesRequest &) = default ;
    DescribeDrdsRdsInstancesRequest& operator=(DescribeDrdsRdsInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsRdsInstancesRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The ID of the PolarDB-X instance.
    // 
    // > You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to query the information about instances in the specified account, such as the IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
