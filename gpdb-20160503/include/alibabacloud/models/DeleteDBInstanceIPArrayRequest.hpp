// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBINSTANCEIPARRAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBINSTANCEIPARRAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteDBInstanceIPArrayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBInstanceIPArrayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IPArrayName, IPArrayName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBInstanceIPArrayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IPArrayName, IPArrayName_);
    };
    DeleteDBInstanceIPArrayRequest() = default ;
    DeleteDBInstanceIPArrayRequest(const DeleteDBInstanceIPArrayRequest &) = default ;
    DeleteDBInstanceIPArrayRequest(DeleteDBInstanceIPArrayRequest &&) = default ;
    DeleteDBInstanceIPArrayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBInstanceIPArrayRequest() = default ;
    DeleteDBInstanceIPArrayRequest& operator=(const DeleteDBInstanceIPArrayRequest &) = default ;
    DeleteDBInstanceIPArrayRequest& operator=(DeleteDBInstanceIPArrayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->IPArrayName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBInstanceIPArrayRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // IPArrayName Field Functions 
    bool hasIPArrayName() const { return this->IPArrayName_ != nullptr;};
    void deleteIPArrayName() { this->IPArrayName_ = nullptr;};
    inline string getIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(IPArrayName_, "") };
    inline DeleteDBInstanceIPArrayRequest& setIPArrayName(string IPArrayName) { DARABONBA_PTR_SET_VALUE(IPArrayName_, IPArrayName) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the IP whitelist group.
    // 
    // This parameter is required.
    shared_ptr<string> IPArrayName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
