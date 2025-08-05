// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisDimensionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisDimensionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisDimensionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeDiagnosisDimensionsRequest() = default ;
    DescribeDiagnosisDimensionsRequest(const DescribeDiagnosisDimensionsRequest &) = default ;
    DescribeDiagnosisDimensionsRequest(DescribeDiagnosisDimensionsRequest &&) = default ;
    DescribeDiagnosisDimensionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisDimensionsRequest() = default ;
    DescribeDiagnosisDimensionsRequest& operator=(const DescribeDiagnosisDimensionsRequest &) = default ;
    DescribeDiagnosisDimensionsRequest& operator=(DescribeDiagnosisDimensionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDiagnosisDimensionsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
