// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeIMVInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMVInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(MVName, MVName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMVInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(MVName, MVName_);
    };
    DescribeIMVInfosRequest() = default ;
    DescribeIMVInfosRequest(const DescribeIMVInfosRequest &) = default ;
    DescribeIMVInfosRequest(DescribeIMVInfosRequest &&) = default ;
    DescribeIMVInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMVInfosRequest() = default ;
    DescribeIMVInfosRequest& operator=(const DescribeIMVInfosRequest &) = default ;
    DescribeIMVInfosRequest& operator=(DescribeIMVInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->MVName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeIMVInfosRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeIMVInfosRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // MVName Field Functions 
    bool hasMVName() const { return this->MVName_ != nullptr;};
    void deleteMVName() { this->MVName_ = nullptr;};
    inline string getMVName() const { DARABONBA_PTR_GET_DEFAULT(MVName_, "") };
    inline DescribeIMVInfosRequest& setMVName(string MVName) { DARABONBA_PTR_SET_VALUE(MVName_, MVName) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> database_ {};
    // The name of MV
    shared_ptr<string> MVName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
