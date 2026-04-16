// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTQUERYMODELSDTO_HPP_
#define ALIBABACLOUD_MODELS_COSTQUERYMODELSDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricDefRespDTO.hpp>
#include <alibabacloud/models/ModelRowDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CostQueryModelsDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostQueryModelsDTO& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(idField, idField_);
      DARABONBA_PTR_TO_JSON(nameField, nameField_);
      DARABONBA_PTR_TO_JSON(rows, rows_);
    };
    friend void from_json(const Darabonba::Json& j, CostQueryModelsDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(idField, idField_);
      DARABONBA_PTR_FROM_JSON(nameField, nameField_);
      DARABONBA_PTR_FROM_JSON(rows, rows_);
    };
    CostQueryModelsDTO() = default ;
    CostQueryModelsDTO(const CostQueryModelsDTO &) = default ;
    CostQueryModelsDTO(CostQueryModelsDTO &&) = default ;
    CostQueryModelsDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostQueryModelsDTO() = default ;
    CostQueryModelsDTO& operator=(const CostQueryModelsDTO &) = default ;
    CostQueryModelsDTO& operator=(CostQueryModelsDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->idField_ == nullptr && this->nameField_ == nullptr && this->rows_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<MetricDefRespDTO> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<MetricDefRespDTO>) };
    inline vector<MetricDefRespDTO> getColumns() { DARABONBA_PTR_GET(columns_, vector<MetricDefRespDTO>) };
    inline CostQueryModelsDTO& setColumns(const vector<MetricDefRespDTO> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CostQueryModelsDTO& setColumns(vector<MetricDefRespDTO> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // idField Field Functions 
    bool hasIdField() const { return this->idField_ != nullptr;};
    void deleteIdField() { this->idField_ = nullptr;};
    inline string getIdField() const { DARABONBA_PTR_GET_DEFAULT(idField_, "") };
    inline CostQueryModelsDTO& setIdField(string idField) { DARABONBA_PTR_SET_VALUE(idField_, idField) };


    // nameField Field Functions 
    bool hasNameField() const { return this->nameField_ != nullptr;};
    void deleteNameField() { this->nameField_ = nullptr;};
    inline string getNameField() const { DARABONBA_PTR_GET_DEFAULT(nameField_, "") };
    inline CostQueryModelsDTO& setNameField(string nameField) { DARABONBA_PTR_SET_VALUE(nameField_, nameField) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<ModelRowDTO> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<ModelRowDTO>) };
    inline vector<ModelRowDTO> getRows() { DARABONBA_PTR_GET(rows_, vector<ModelRowDTO>) };
    inline CostQueryModelsDTO& setRows(const vector<ModelRowDTO> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline CostQueryModelsDTO& setRows(vector<ModelRowDTO> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    shared_ptr<vector<MetricDefRespDTO>> columns_ {};
    shared_ptr<string> idField_ {};
    shared_ptr<string> nameField_ {};
    shared_ptr<vector<ModelRowDTO>> rows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
