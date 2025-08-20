// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CancelSparkWarehouseBatchSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Agency, agency_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Agency, agency_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    CancelSparkWarehouseBatchSQLRequest() = default ;
    CancelSparkWarehouseBatchSQLRequest(const CancelSparkWarehouseBatchSQLRequest &) = default ;
    CancelSparkWarehouseBatchSQLRequest(CancelSparkWarehouseBatchSQLRequest &&) = default ;
    CancelSparkWarehouseBatchSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSparkWarehouseBatchSQLRequest() = default ;
    CancelSparkWarehouseBatchSQLRequest& operator=(const CancelSparkWarehouseBatchSQLRequest &) = default ;
    CancelSparkWarehouseBatchSQLRequest& operator=(CancelSparkWarehouseBatchSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agency_ != nullptr
        && this->DBClusterId_ != nullptr && this->queryId_ != nullptr; };
    // agency Field Functions 
    bool hasAgency() const { return this->agency_ != nullptr;};
    void deleteAgency() { this->agency_ = nullptr;};
    inline string agency() const { DARABONBA_PTR_GET_DEFAULT(agency_, "") };
    inline CancelSparkWarehouseBatchSQLRequest& setAgency(string agency) { DARABONBA_PTR_SET_VALUE(agency_, agency) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CancelSparkWarehouseBatchSQLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline CancelSparkWarehouseBatchSQLRequest& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


  protected:
    // The name of the client, which can be up to 16 characters in length. Specify a descriptive name that makes it easy to identify.
    std::shared_ptr<string> agency_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The query ID of the Spark SQL statement.
    // 
    // This parameter is required.
    std::shared_ptr<string> queryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
