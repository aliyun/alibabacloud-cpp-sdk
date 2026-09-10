// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECWORKFLOWCONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECWORKFLOWCONNECTIVITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecWorkflowConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecWorkflowConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dsConfig, dsConfig_);
      DARABONBA_PTR_TO_JSON(dsName, dsName_);
      DARABONBA_PTR_TO_JSON(dsType, dsType_);
      DARABONBA_PTR_TO_JSON(dsVersion, dsVersion_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isModified, isModified_);
    };
    friend void from_json(const Darabonba::Json& j, ExecWorkflowConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dsConfig, dsConfig_);
      DARABONBA_PTR_FROM_JSON(dsName, dsName_);
      DARABONBA_PTR_FROM_JSON(dsType, dsType_);
      DARABONBA_PTR_FROM_JSON(dsVersion, dsVersion_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isModified, isModified_);
    };
    ExecWorkflowConnectivityRequest() = default ;
    ExecWorkflowConnectivityRequest(const ExecWorkflowConnectivityRequest &) = default ;
    ExecWorkflowConnectivityRequest(ExecWorkflowConnectivityRequest &&) = default ;
    ExecWorkflowConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecWorkflowConnectivityRequest() = default ;
    ExecWorkflowConnectivityRequest& operator=(const ExecWorkflowConnectivityRequest &) = default ;
    ExecWorkflowConnectivityRequest& operator=(ExecWorkflowConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsConfig_ == nullptr
        && this->dsName_ == nullptr && this->dsType_ == nullptr && this->dsVersion_ == nullptr && this->id_ == nullptr && this->isModified_ == nullptr; };
    // dsConfig Field Functions 
    bool hasDsConfig() const { return this->dsConfig_ != nullptr;};
    void deleteDsConfig() { this->dsConfig_ = nullptr;};
    inline string getDsConfig() const { DARABONBA_PTR_GET_DEFAULT(dsConfig_, "") };
    inline ExecWorkflowConnectivityRequest& setDsConfig(string dsConfig) { DARABONBA_PTR_SET_VALUE(dsConfig_, dsConfig) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline ExecWorkflowConnectivityRequest& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ExecWorkflowConnectivityRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // dsVersion Field Functions 
    bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
    void deleteDsVersion() { this->dsVersion_ = nullptr;};
    inline string getDsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
    inline ExecWorkflowConnectivityRequest& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExecWorkflowConnectivityRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isModified Field Functions 
    bool hasIsModified() const { return this->isModified_ != nullptr;};
    void deleteIsModified() { this->isModified_ = nullptr;};
    inline bool getIsModified() const { DARABONBA_PTR_GET_DEFAULT(isModified_, false) };
    inline ExecWorkflowConnectivityRequest& setIsModified(bool isModified) { DARABONBA_PTR_SET_VALUE(isModified_, isModified) };


  protected:
    // The datasource config. The value is a JSON character string whose structure is defined by each dsType. Parse the JSON string before use. Sensitive fields such as tokens are masked in the response.
    shared_ptr<string> dsConfig_ {};
    // The data source name. Exact match and fuzzy match are supported.
    shared_ptr<string> dsName_ {};
    // The data source type, such as Hive or MaxCompute.
    shared_ptr<string> dsType_ {};
    // The data source version number.
    shared_ptr<string> dsVersion_ {};
    // The primary key ID that uniquely identifies a record.
    shared_ptr<int64_t> id_ {};
    // Specifies whether the configuration has been modified.
    shared_ptr<bool> isModified_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
