// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSDBREQUESTINSTDBNAME_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSDBREQUESTINSTDBNAME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsDBRequestInstDbName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsDBRequestInstDbName& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(ShardDbName, shardDbName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsDBRequestInstDbName& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(ShardDbName, shardDbName_);
    };
    CreateDrdsDBRequestInstDbName() = default ;
    CreateDrdsDBRequestInstDbName(const CreateDrdsDBRequestInstDbName &) = default ;
    CreateDrdsDBRequestInstDbName(CreateDrdsDBRequestInstDbName &&) = default ;
    CreateDrdsDBRequestInstDbName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsDBRequestInstDbName() = default ;
    CreateDrdsDBRequestInstDbName& operator=(const CreateDrdsDBRequestInstDbName &) = default ;
    CreateDrdsDBRequestInstDbName& operator=(CreateDrdsDBRequestInstDbName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstanceId_ != nullptr
        && this->shardDbName_ != nullptr; };
    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateDrdsDBRequestInstDbName& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // shardDbName Field Functions 
    bool hasShardDbName() const { return this->shardDbName_ != nullptr;};
    void deleteShardDbName() { this->shardDbName_ = nullptr;};
    inline const vector<string> & shardDbName() const { DARABONBA_PTR_GET_CONST(shardDbName_, vector<string>) };
    inline vector<string> shardDbName() { DARABONBA_PTR_GET(shardDbName_, vector<string>) };
    inline CreateDrdsDBRequestInstDbName& setShardDbName(const vector<string> & shardDbName) { DARABONBA_PTR_SET_VALUE(shardDbName_, shardDbName) };
    inline CreateDrdsDBRequestInstDbName& setShardDbName(vector<string> && shardDbName) { DARABONBA_PTR_SET_RVALUE(shardDbName_, shardDbName) };


  protected:
    // The ID of the ApsaraDB RDS for MySQL instance on which the databases need to be vertically partitioned. This parameter is required only when the Type parameter is set to VERTICAL.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    std::shared_ptr<vector<string>> shardDbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
