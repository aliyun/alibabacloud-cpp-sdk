// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApiCallsResponseBodyPageResultCallLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(CallLogList, callLogList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CallLogList, callLogList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceApiCallsResponseBodyPageResult() = default ;
    ListDataServiceApiCallsResponseBodyPageResult(const ListDataServiceApiCallsResponseBodyPageResult &) = default ;
    ListDataServiceApiCallsResponseBodyPageResult(ListDataServiceApiCallsResponseBodyPageResult &&) = default ;
    ListDataServiceApiCallsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallsResponseBodyPageResult() = default ;
    ListDataServiceApiCallsResponseBodyPageResult& operator=(const ListDataServiceApiCallsResponseBodyPageResult &) = default ;
    ListDataServiceApiCallsResponseBodyPageResult& operator=(ListDataServiceApiCallsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callLogList_ != nullptr
        && this->totalCount_ != nullptr; };
    // callLogList Field Functions 
    bool hasCallLogList() const { return this->callLogList_ != nullptr;};
    void deleteCallLogList() { this->callLogList_ = nullptr;};
    inline const vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList> & callLogList() const { DARABONBA_PTR_GET_CONST(callLogList_, vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList>) };
    inline vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList> callLogList() { DARABONBA_PTR_GET(callLogList_, vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList>) };
    inline ListDataServiceApiCallsResponseBodyPageResult& setCallLogList(const vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList> & callLogList) { DARABONBA_PTR_SET_VALUE(callLogList_, callLogList) };
    inline ListDataServiceApiCallsResponseBodyPageResult& setCallLogList(vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList> && callLogList) { DARABONBA_PTR_SET_RVALUE(callLogList_, callLogList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataServiceApiCallsResponseBodyPageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceApiCallsResponseBodyPageResultCallLogList>> callLogList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
