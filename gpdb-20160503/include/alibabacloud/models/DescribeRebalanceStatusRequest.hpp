// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREBALANCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREBALANCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeRebalanceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRebalanceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRebalanceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeRebalanceStatusRequest() = default ;
    DescribeRebalanceStatusRequest(const DescribeRebalanceStatusRequest &) = default ;
    DescribeRebalanceStatusRequest(DescribeRebalanceStatusRequest &&) = default ;
    DescribeRebalanceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRebalanceStatusRequest() = default ;
    DescribeRebalanceStatusRequest& operator=(const DescribeRebalanceStatusRequest &) = default ;
    DescribeRebalanceStatusRequest& operator=(DescribeRebalanceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeRebalanceStatusRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
