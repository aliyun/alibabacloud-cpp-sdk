// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONTABLEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONTABLEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyDataTranslationTableInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyDataTranslationTableInfos& obj) { 
      DARABONBA_PTR_TO_JSON(cellInfos, cellInfos_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(xCellSize, xCellSize_);
      DARABONBA_PTR_TO_JSON(yCellSize, yCellSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyDataTranslationTableInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(cellInfos, cellInfos_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(xCellSize, xCellSize_);
      DARABONBA_PTR_FROM_JSON(yCellSize, yCellSize_);
    };
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos(const GetImageTranslateTaskResponseBodyDataTranslationTableInfos &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos(GetImageTranslateTaskResponseBodyDataTranslationTableInfos &&) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyDataTranslationTableInfos() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos& operator=(const GetImageTranslateTaskResponseBodyDataTranslationTableInfos &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfos& operator=(GetImageTranslateTaskResponseBodyDataTranslationTableInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cellInfos_ != nullptr
        && this->tableId_ != nullptr && this->xCellSize_ != nullptr && this->yCellSize_ != nullptr; };
    // cellInfos Field Functions 
    bool hasCellInfos() const { return this->cellInfos_ != nullptr;};
    void deleteCellInfos() { this->cellInfos_ = nullptr;};
    inline const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos> & cellInfos() const { DARABONBA_PTR_GET_CONST(cellInfos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos>) };
    inline vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos> cellInfos() { DARABONBA_PTR_GET(cellInfos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos>) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfos& setCellInfos(const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos> & cellInfos) { DARABONBA_PTR_SET_VALUE(cellInfos_, cellInfos) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfos& setCellInfos(vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos> && cellInfos) { DARABONBA_PTR_SET_RVALUE(cellInfos_, cellInfos) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfos& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // xCellSize Field Functions 
    bool hasXCellSize() const { return this->xCellSize_ != nullptr;};
    void deleteXCellSize() { this->xCellSize_ = nullptr;};
    inline int64_t xCellSize() const { DARABONBA_PTR_GET_DEFAULT(xCellSize_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfos& setXCellSize(int64_t xCellSize) { DARABONBA_PTR_SET_VALUE(xCellSize_, xCellSize) };


    // yCellSize Field Functions 
    bool hasYCellSize() const { return this->yCellSize_ != nullptr;};
    void deleteYCellSize() { this->yCellSize_ = nullptr;};
    inline int64_t yCellSize() const { DARABONBA_PTR_GET_DEFAULT(yCellSize_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfos& setYCellSize(int64_t yCellSize) { DARABONBA_PTR_SET_VALUE(yCellSize_, yCellSize) };


  protected:
    std::shared_ptr<vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos>> cellInfos_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<int64_t> xCellSize_ = nullptr;
    std::shared_ptr<int64_t> yCellSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
