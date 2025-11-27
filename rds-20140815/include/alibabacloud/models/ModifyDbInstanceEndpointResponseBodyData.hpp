// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceEndpointResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceEndpointResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceEndpointResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    ModifyDBInstanceEndpointResponseBodyData() = default ;
    ModifyDBInstanceEndpointResponseBodyData(const ModifyDBInstanceEndpointResponseBodyData &) = default ;
    ModifyDBInstanceEndpointResponseBodyData(ModifyDBInstanceEndpointResponseBodyData &&) = default ;
    ModifyDBInstanceEndpointResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceEndpointResponseBodyData() = default ;
    ModifyDBInstanceEndpointResponseBodyData& operator=(const ModifyDBInstanceEndpointResponseBodyData &) = default ;
    ModifyDBInstanceEndpointResponseBodyData& operator=(ModifyDBInstanceEndpointResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceEndpointId_ == nullptr
        && return this->DBInstanceName_ == nullptr; };
    // DBInstanceEndpointId Field Functions 
    bool hasDBInstanceEndpointId() const { return this->DBInstanceEndpointId_ != nullptr;};
    void deleteDBInstanceEndpointId() { this->DBInstanceEndpointId_ = nullptr;};
    inline string DBInstanceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointId_, "") };
    inline ModifyDBInstanceEndpointResponseBodyData& setDBInstanceEndpointId(string DBInstanceEndpointId) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointId_, DBInstanceEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDBInstanceEndpointResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    // The endpoint ID of the instance.
    std::shared_ptr<string> DBInstanceEndpointId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
