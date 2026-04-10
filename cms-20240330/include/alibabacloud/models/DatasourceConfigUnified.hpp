// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DatasourceConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DatasourceConfigUnified() = default ;
    DatasourceConfigUnified(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified(DatasourceConfigUnified &&) = default ;
    DatasourceConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasourceConfigUnified() = default ;
    DatasourceConfigUnified& operator=(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified& operator=(DatasourceConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DatasourceConfigUnified& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DatasourceConfigUnified& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DatasourceConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Prometheus 实例 ID（type=PROMETHEUS 时使用）
    shared_ptr<string> instanceId_ {};
    // 地域 ID（各类型可选，缺省与规则/网关一致）
    shared_ptr<string> regionId_ {};
    // 数据源类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
