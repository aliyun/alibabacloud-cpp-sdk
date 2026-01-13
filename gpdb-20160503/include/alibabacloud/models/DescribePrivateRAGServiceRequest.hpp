// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATERAGSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATERAGSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribePrivateRAGServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateRAGServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateRAGServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribePrivateRAGServiceRequest() = default ;
    DescribePrivateRAGServiceRequest(const DescribePrivateRAGServiceRequest &) = default ;
    DescribePrivateRAGServiceRequest(DescribePrivateRAGServiceRequest &&) = default ;
    DescribePrivateRAGServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateRAGServiceRequest() = default ;
    DescribePrivateRAGServiceRequest& operator=(const DescribePrivateRAGServiceRequest &) = default ;
    DescribePrivateRAGServiceRequest& operator=(DescribePrivateRAGServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribePrivateRAGServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // Instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) Interface to query the details of all AnalyticDB PostgreSQL Instances in the target region, including Instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
