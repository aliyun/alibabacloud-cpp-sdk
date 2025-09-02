// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCENGINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCENGINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCalcEnginesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalcEnginesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalcEngineType, calcEngineType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalcEnginesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalcEngineType, calcEngineType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListCalcEnginesRequest() = default ;
    ListCalcEnginesRequest(const ListCalcEnginesRequest &) = default ;
    ListCalcEnginesRequest(ListCalcEnginesRequest &&) = default ;
    ListCalcEnginesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalcEnginesRequest() = default ;
    ListCalcEnginesRequest& operator=(const ListCalcEnginesRequest &) = default ;
    ListCalcEnginesRequest& operator=(ListCalcEnginesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calcEngineType_ != nullptr
        && this->envType_ != nullptr && this->name_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr; };
    // calcEngineType Field Functions 
    bool hasCalcEngineType() const { return this->calcEngineType_ != nullptr;};
    void deleteCalcEngineType() { this->calcEngineType_ = nullptr;};
    inline string calcEngineType() const { DARABONBA_PTR_GET_DEFAULT(calcEngineType_, "") };
    inline ListCalcEnginesRequest& setCalcEngineType(string calcEngineType) { DARABONBA_PTR_SET_VALUE(calcEngineType_, calcEngineType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListCalcEnginesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCalcEnginesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCalcEnginesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCalcEnginesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCalcEnginesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The type of the compute engine. The value of this parameter is not case-sensitive. Valid values:
    // 
    // *   **ODPS**
    // *   **EMR**
    // *   **BLINK**
    // *   **HOLO**
    // *   **MaxGraph**
    // *   **HYBRIDDB_FOR_POSTGRESQL**
    // *   **ADB_MYSQL**
    // *   **HADOOP_CDH**
    // *   **CLICKHOUSE**
    // 
    // This parameter is required.
    std::shared_ptr<string> calcEngineType_ = nullptr;
    // The environment in which the compute engine is used. Valid values:
    // 
    // *   **DEV**
    // *   **PRD**
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the compute engine, which must be exactly matched.
    std::shared_ptr<string> name_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the DataWorks workspace with which the compute engine is associated.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
