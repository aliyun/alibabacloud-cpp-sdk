// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVULSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVULSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceVulStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceVulStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceVulStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeInstanceVulStatisticsRequest() = default ;
    DescribeInstanceVulStatisticsRequest(const DescribeInstanceVulStatisticsRequest &) = default ;
    DescribeInstanceVulStatisticsRequest(DescribeInstanceVulStatisticsRequest &&) = default ;
    DescribeInstanceVulStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceVulStatisticsRequest() = default ;
    DescribeInstanceVulStatisticsRequest& operator=(const DescribeInstanceVulStatisticsRequest &) = default ;
    DescribeInstanceVulStatisticsRequest& operator=(DescribeInstanceVulStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->types_ == nullptr
        && this->uuid_ == nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline DescribeInstanceVulStatisticsRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeInstanceVulStatisticsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The vulnerability type of the Serverless asset. Valid values:
    // 
    // - **sca**: middleware vulnerability
    // 
    // - **app**: scanner vulnerability
    // 
    // >Serverless assets currently support only application vulnerability scanning.
    shared_ptr<string> types_ {};
    // The UUID of the asset instance to query.
    // >You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
