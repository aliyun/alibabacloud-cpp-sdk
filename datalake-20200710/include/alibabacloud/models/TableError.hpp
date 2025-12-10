// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEERROR_HPP_
#define ALIBABACLOUD_MODELS_TABLEERROR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ErrorDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableError& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableError& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    TableError() = default ;
    TableError(const TableError &) = default ;
    TableError(TableError &&) = default ;
    TableError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableError() = default ;
    TableError& operator=(const TableError &) = default ;
    TableError& operator=(TableError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetail_ == nullptr
        && return this->tableName_ == nullptr; };
    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline const ErrorDetail & errorDetail() const { DARABONBA_PTR_GET_CONST(errorDetail_, ErrorDetail) };
    inline ErrorDetail errorDetail() { DARABONBA_PTR_GET(errorDetail_, ErrorDetail) };
    inline TableError& setErrorDetail(const ErrorDetail & errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };
    inline TableError& setErrorDetail(ErrorDetail && errorDetail) { DARABONBA_PTR_SET_RVALUE(errorDetail_, errorDetail) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableError& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<ErrorDetail> errorDetail_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
