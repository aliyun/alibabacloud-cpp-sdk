// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTTABLEINFOLISTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTTABLEINFOLISTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnPosition, columnPosition_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Fictive, fictive_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnPosition, columnPosition_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Fictive, fictive_);
    };
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns() = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns(const SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns &) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns(SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns &&) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns() = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& operator=(const SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns &) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& operator=(SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnPosition_ != nullptr && this->columnType_ != nullptr && this->fictive_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnPosition Field Functions 
    bool hasColumnPosition() const { return this->columnPosition_ != nullptr;};
    void deleteColumnPosition() { this->columnPosition_ = nullptr;};
    inline int32_t columnPosition() const { DARABONBA_PTR_GET_DEFAULT(columnPosition_, 0) };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& setColumnPosition(int32_t columnPosition) { DARABONBA_PTR_SET_VALUE(columnPosition_, columnPosition) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // fictive Field Functions 
    bool hasFictive() const { return this->fictive_ != nullptr;};
    void deleteFictive() { this->fictive_ = nullptr;};
    inline bool fictive() const { DARABONBA_PTR_GET_DEFAULT(fictive_, false) };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns& setFictive(bool fictive) { DARABONBA_PTR_SET_VALUE(fictive_, fictive) };


  protected:
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The position of the column.
    std::shared_ptr<int32_t> columnPosition_ = nullptr;
    // The data type of the column. Examples: BIGINT, INT, and VARCHAR.
    std::shared_ptr<string> columnType_ = nullptr;
    // Indicates whether the column is a virtual column. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fictive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
