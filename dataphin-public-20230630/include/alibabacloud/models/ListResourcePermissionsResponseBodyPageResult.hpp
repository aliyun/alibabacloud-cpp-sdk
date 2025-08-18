// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourcePermissionsResponseBodyPageResult() = default ;
    ListResourcePermissionsResponseBodyPageResult(const ListResourcePermissionsResponseBodyPageResult &) = default ;
    ListResourcePermissionsResponseBodyPageResult(ListResourcePermissionsResponseBodyPageResult &&) = default ;
    ListResourcePermissionsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionsResponseBodyPageResult() = default ;
    ListResourcePermissionsResponseBodyPageResult& operator=(const ListResourcePermissionsResponseBodyPageResult &) = default ;
    ListResourcePermissionsResponseBodyPageResult& operator=(ListResourcePermissionsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListResourcePermissionsResponseBodyPageResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListResourcePermissionsResponseBodyPageResultData>) };
    inline vector<Models::ListResourcePermissionsResponseBodyPageResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListResourcePermissionsResponseBodyPageResultData>) };
    inline ListResourcePermissionsResponseBodyPageResult& setData(const vector<Models::ListResourcePermissionsResponseBodyPageResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListResourcePermissionsResponseBodyPageResult& setData(vector<Models::ListResourcePermissionsResponseBodyPageResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListResourcePermissionsResponseBodyPageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListResourcePermissionsResponseBodyPageResultData>> data_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
