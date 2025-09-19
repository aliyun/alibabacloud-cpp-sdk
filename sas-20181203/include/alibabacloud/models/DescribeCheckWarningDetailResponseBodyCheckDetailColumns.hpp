// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILRESPONSEBODYCHECKDETAILCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILRESPONSEBODYCHECKDETAILCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningDetailResponseBodyCheckDetailColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningDetailResponseBodyCheckDetailColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Grids, grids_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningDetailResponseBodyCheckDetailColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Grids, grids_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns() = default ;
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns(const DescribeCheckWarningDetailResponseBodyCheckDetailColumns &) = default ;
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns(DescribeCheckWarningDetailResponseBodyCheckDetailColumns &&) = default ;
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningDetailResponseBodyCheckDetailColumns() = default ;
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns& operator=(const DescribeCheckWarningDetailResponseBodyCheckDetailColumns &) = default ;
    DescribeCheckWarningDetailResponseBodyCheckDetailColumns& operator=(DescribeCheckWarningDetailResponseBodyCheckDetailColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grids_ != nullptr
        && this->key_ != nullptr && this->showName_ != nullptr && this->type_ != nullptr; };
    // grids Field Functions 
    bool hasGrids() const { return this->grids_ != nullptr;};
    void deleteGrids() { this->grids_ = nullptr;};
    inline const vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids> & grids() const { DARABONBA_PTR_GET_CONST(grids_, vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids>) };
    inline vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids> grids() { DARABONBA_PTR_GET(grids_, vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids>) };
    inline DescribeCheckWarningDetailResponseBodyCheckDetailColumns& setGrids(const vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids> & grids) { DARABONBA_PTR_SET_VALUE(grids_, grids) };
    inline DescribeCheckWarningDetailResponseBodyCheckDetailColumns& setGrids(vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids> && grids) { DARABONBA_PTR_SET_RVALUE(grids_, grids) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeCheckWarningDetailResponseBodyCheckDetailColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline DescribeCheckWarningDetailResponseBodyCheckDetailColumns& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCheckWarningDetailResponseBodyCheckDetailColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Detection content list.
    std::shared_ptr<vector<Models::DescribeCheckWarningDetailResponseBodyCheckDetailColumnsGrids>> grids_ = nullptr;
    // Key to detect content.
    std::shared_ptr<string> key_ = nullptr;
    // The detection content key corresponds to the display name.
    std::shared_ptr<string> showName_ = nullptr;
    // Display type. Value:
    // - **grid**: Detection grid
    // - **text**: text
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
