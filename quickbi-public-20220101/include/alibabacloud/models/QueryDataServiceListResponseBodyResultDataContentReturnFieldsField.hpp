// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTRETURNFIELDSFIELD_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTRETURNFIELDSFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBodyResultDataContentReturnFieldsField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Fid, fid_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Fid, fid_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField() = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField(const QueryDataServiceListResponseBodyResultDataContentReturnFieldsField &) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField(QueryDataServiceListResponseBodyResultDataContentReturnFieldsField &&) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBodyResultDataContentReturnFieldsField() = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& operator=(const QueryDataServiceListResponseBodyResultDataContentReturnFieldsField &) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& operator=(QueryDataServiceListResponseBodyResultDataContentReturnFieldsField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && return this->column_ == nullptr && return this->dataType_ == nullptr && return this->fid_ == nullptr && return this->granularity_ == nullptr && return this->name_ == nullptr
        && return this->type_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // fid Field Functions 
    bool hasFid() const { return this->fid_ != nullptr;};
    void deleteFid() { this->fid_ = nullptr;};
    inline string fid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFieldsField& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Display name in the cube model (can be in Chinese or English).
    std::shared_ptr<string> caption_ = nullptr;
    // The corresponding physical field name.
    std::shared_ptr<string> column_ = nullptr;
    // Data type.
    // 
    // - number: numeric
    // - string: string
    // - date: date
    // - datetime: datetime
    // - time: time
    // - geographic: geographic
    // - boolean: boolean
    // - url: URL
    std::shared_ptr<string> dataType_ = nullptr;
    // Unique identifier for the original field.
    std::shared_ptr<string> fid_ = nullptr;
    // This attribute is included for date and geographic dimensions, indicating the supported granularity.
    std::shared_ptr<string> granularity_ = nullptr;
    // Unique name of the cube field, mainly used for unique positioning in the returned result.
    std::shared_ptr<string> name_ = nullptr;
    // Type.
    // 
    // - Dimension: Dimension
    // - Measure: Measure
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
