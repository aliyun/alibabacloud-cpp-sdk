// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppResponseBodyListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBodyListResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBodyListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApiByAppResponseBodyListResult() = default ;
    ListApiByAppResponseBodyListResult(const ListApiByAppResponseBodyListResult &) = default ;
    ListApiByAppResponseBodyListResult(ListApiByAppResponseBodyListResult &&) = default ;
    ListApiByAppResponseBodyListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBodyListResult() = default ;
    ListApiByAppResponseBodyListResult& operator=(const ListApiByAppResponseBodyListResult &) = default ;
    ListApiByAppResponseBodyListResult& operator=(ListApiByAppResponseBodyListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListApiByAppResponseBodyListResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListApiByAppResponseBodyListResultData>) };
    inline vector<Models::ListApiByAppResponseBodyListResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListApiByAppResponseBodyListResultData>) };
    inline ListApiByAppResponseBodyListResult& setData(const vector<Models::ListApiByAppResponseBodyListResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApiByAppResponseBodyListResult& setData(vector<Models::ListApiByAppResponseBodyListResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiByAppResponseBodyListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListApiByAppResponseBodyListResultData>> data_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
