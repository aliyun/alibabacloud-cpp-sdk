// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIRTUALCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIRTUALCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifyVirtualClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVirtualClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVirtualClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
    };
    ModifyVirtualClusterResponseBodyData() = default ;
    ModifyVirtualClusterResponseBodyData(const ModifyVirtualClusterResponseBodyData &) = default ;
    ModifyVirtualClusterResponseBodyData(ModifyVirtualClusterResponseBodyData &&) = default ;
    ModifyVirtualClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVirtualClusterResponseBodyData() = default ;
    ModifyVirtualClusterResponseBodyData& operator=(const ModifyVirtualClusterResponseBodyData &) = default ;
    ModifyVirtualClusterResponseBodyData& operator=(ModifyVirtualClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && return this->dbInstanceId_ == nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline ModifyVirtualClusterResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyVirtualClusterResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


  protected:
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> dbInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
