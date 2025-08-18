// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRowPermissionByUserIdResponseBodyPageResult() = default ;
    ListRowPermissionByUserIdResponseBodyPageResult(const ListRowPermissionByUserIdResponseBodyPageResult &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResult(ListRowPermissionByUserIdResponseBodyPageResult &&) = default ;
    ListRowPermissionByUserIdResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdResponseBodyPageResult() = default ;
    ListRowPermissionByUserIdResponseBodyPageResult& operator=(const ListRowPermissionByUserIdResponseBodyPageResult &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResult& operator=(ListRowPermissionByUserIdResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData>) };
    inline ListRowPermissionByUserIdResponseBodyPageResult& setData(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRowPermissionByUserIdResponseBodyPageResult& setData(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRowPermissionByUserIdResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultData>> data_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
