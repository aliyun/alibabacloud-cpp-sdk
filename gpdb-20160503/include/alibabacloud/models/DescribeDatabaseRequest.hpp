// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
    };
    DescribeDatabaseRequest() = default ;
    DescribeDatabaseRequest(const DescribeDatabaseRequest &) = default ;
    DescribeDatabaseRequest(DescribeDatabaseRequest &&) = default ;
    DescribeDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseRequest() = default ;
    DescribeDatabaseRequest& operator=(const DescribeDatabaseRequest &) = default ;
    DescribeDatabaseRequest& operator=(DescribeDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->databaseName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDatabaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
