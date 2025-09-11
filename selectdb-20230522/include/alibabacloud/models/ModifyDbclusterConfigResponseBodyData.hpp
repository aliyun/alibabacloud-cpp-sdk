// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifyDBClusterConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyDBClusterConfigResponseBodyData() = default ;
    ModifyDBClusterConfigResponseBodyData(const ModifyDBClusterConfigResponseBodyData &) = default ;
    ModifyDBClusterConfigResponseBodyData(ModifyDBClusterConfigResponseBodyData &&) = default ;
    ModifyDBClusterConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterConfigResponseBodyData() = default ;
    ModifyDBClusterConfigResponseBodyData& operator=(const ModifyDBClusterConfigResponseBodyData &) = default ;
    ModifyDBClusterConfigResponseBodyData& operator=(ModifyDBClusterConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbClusterId_ != nullptr
        && this->dbInstanceId_ != nullptr && this->dbInstanceName_ != nullptr && this->taskId_ != nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline ModifyDBClusterConfigResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyDBClusterConfigResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline ModifyDBClusterConfigResponseBodyData& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyDBClusterConfigResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
