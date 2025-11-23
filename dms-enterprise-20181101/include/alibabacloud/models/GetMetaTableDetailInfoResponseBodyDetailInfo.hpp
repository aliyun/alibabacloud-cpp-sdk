// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODYDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODYDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTableDetailInfoResponseBodyDetailInfoColumnList.hpp>
#include <alibabacloud/models/GetMetaTableDetailInfoResponseBodyDetailInfoIndexList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetMetaTableDetailInfoResponseBodyDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableDetailInfoResponseBodyDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(IndexList, indexList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableDetailInfoResponseBodyDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(IndexList, indexList_);
    };
    GetMetaTableDetailInfoResponseBodyDetailInfo() = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfo(const GetMetaTableDetailInfoResponseBodyDetailInfo &) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfo(GetMetaTableDetailInfoResponseBodyDetailInfo &&) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableDetailInfoResponseBodyDetailInfo() = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfo& operator=(const GetMetaTableDetailInfoResponseBodyDetailInfo &) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfo& operator=(GetMetaTableDetailInfoResponseBodyDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnList_ == nullptr
        && return this->indexList_ == nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList>) };
    inline vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList>) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfo& setColumnList(const vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfo& setColumnList(vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // indexList Field Functions 
    bool hasIndexList() const { return this->indexList_ != nullptr;};
    void deleteIndexList() { this->indexList_ = nullptr;};
    inline const vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList> & indexList() const { DARABONBA_PTR_GET_CONST(indexList_, vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList>) };
    inline vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList> indexList() { DARABONBA_PTR_GET(indexList_, vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList>) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfo& setIndexList(const vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList> & indexList) { DARABONBA_PTR_SET_VALUE(indexList_, indexList) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfo& setIndexList(vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList> && indexList) { DARABONBA_PTR_SET_RVALUE(indexList_, indexList) };


  protected:
    // The columns in the table.
    std::shared_ptr<vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoColumnList>> columnList_ = nullptr;
    // The list of indexes.
    std::shared_ptr<vector<Models::GetMetaTableDetailInfoResponseBodyDetailInfoIndexList>> indexList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
