// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertNotificationsResponseBodyListResult() = default ;
    ListAlertNotificationsResponseBodyListResult(const ListAlertNotificationsResponseBodyListResult &) = default ;
    ListAlertNotificationsResponseBodyListResult(ListAlertNotificationsResponseBodyListResult &&) = default ;
    ListAlertNotificationsResponseBodyListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResult() = default ;
    ListAlertNotificationsResponseBodyListResult& operator=(const ListAlertNotificationsResponseBodyListResult &) = default ;
    ListAlertNotificationsResponseBodyListResult& operator=(ListAlertNotificationsResponseBodyListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListAlertNotificationsResponseBodyListResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListAlertNotificationsResponseBodyListResultData>) };
    inline vector<Models::ListAlertNotificationsResponseBodyListResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListAlertNotificationsResponseBodyListResultData>) };
    inline ListAlertNotificationsResponseBodyListResult& setData(const vector<Models::ListAlertNotificationsResponseBodyListResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAlertNotificationsResponseBodyListResult& setData(vector<Models::ListAlertNotificationsResponseBodyListResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertNotificationsResponseBodyListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListAlertNotificationsResponseBodyListResultData>> data_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
