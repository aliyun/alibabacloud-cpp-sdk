// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDBCLUSTERDYNAMODBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDBCLUSTERDYNAMODBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class EnableDBClusterDynamoDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDBClusterDynamoDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDBClusterDynamoDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    EnableDBClusterDynamoDBRequest() = default ;
    EnableDBClusterDynamoDBRequest(const EnableDBClusterDynamoDBRequest &) = default ;
    EnableDBClusterDynamoDBRequest(EnableDBClusterDynamoDBRequest &&) = default ;
    EnableDBClusterDynamoDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDBClusterDynamoDBRequest() = default ;
    EnableDBClusterDynamoDBRequest& operator=(const EnableDBClusterDynamoDBRequest &) = default ;
    EnableDBClusterDynamoDBRequest& operator=(EnableDBClusterDynamoDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline EnableDBClusterDynamoDBRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
