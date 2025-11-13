// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERBINDINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERBINDINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateDBClusterBindingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterBindingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterBindingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
    };
    CreateDBClusterBindingResponseBodyData() = default ;
    CreateDBClusterBindingResponseBodyData(const CreateDBClusterBindingResponseBodyData &) = default ;
    CreateDBClusterBindingResponseBodyData(CreateDBClusterBindingResponseBodyData &&) = default ;
    CreateDBClusterBindingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterBindingResponseBodyData() = default ;
    CreateDBClusterBindingResponseBodyData& operator=(const CreateDBClusterBindingResponseBodyData &) = default ;
    CreateDBClusterBindingResponseBodyData& operator=(CreateDBClusterBindingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && return this->dbInstanceId_ == nullptr && return this->dbInstanceName_ == nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline CreateDBClusterBindingResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateDBClusterBindingResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline CreateDBClusterBindingResponseBodyData& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    // The numeric ID.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
