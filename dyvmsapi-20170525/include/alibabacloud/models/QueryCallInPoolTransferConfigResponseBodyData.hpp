// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCallInPoolTransferConfigResponseBodyDataDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInPoolTransferConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInPoolTransferConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CalledRouteMode, calledRouteMode_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(TransferTimeout, transferTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInPoolTransferConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledRouteMode, calledRouteMode_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(TransferTimeout, transferTimeout_);
    };
    QueryCallInPoolTransferConfigResponseBodyData() = default ;
    QueryCallInPoolTransferConfigResponseBodyData(const QueryCallInPoolTransferConfigResponseBodyData &) = default ;
    QueryCallInPoolTransferConfigResponseBodyData(QueryCallInPoolTransferConfigResponseBodyData &&) = default ;
    QueryCallInPoolTransferConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInPoolTransferConfigResponseBodyData() = default ;
    QueryCallInPoolTransferConfigResponseBodyData& operator=(const QueryCallInPoolTransferConfigResponseBodyData &) = default ;
    QueryCallInPoolTransferConfigResponseBodyData& operator=(QueryCallInPoolTransferConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calledRouteMode_ != nullptr
        && this->details_ != nullptr && this->gmtCreate_ != nullptr && this->transferTimeout_ != nullptr; };
    // calledRouteMode Field Functions 
    bool hasCalledRouteMode() const { return this->calledRouteMode_ != nullptr;};
    void deleteCalledRouteMode() { this->calledRouteMode_ = nullptr;};
    inline string calledRouteMode() const { DARABONBA_PTR_GET_DEFAULT(calledRouteMode_, "") };
    inline QueryCallInPoolTransferConfigResponseBodyData& setCalledRouteMode(string calledRouteMode) { DARABONBA_PTR_SET_VALUE(calledRouteMode_, calledRouteMode) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails>) };
    inline vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails>) };
    inline QueryCallInPoolTransferConfigResponseBodyData& setDetails(const vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline QueryCallInPoolTransferConfigResponseBodyData& setDetails(vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryCallInPoolTransferConfigResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // transferTimeout Field Functions 
    bool hasTransferTimeout() const { return this->transferTimeout_ != nullptr;};
    void deleteTransferTimeout() { this->transferTimeout_ = nullptr;};
    inline string transferTimeout() const { DARABONBA_PTR_GET_DEFAULT(transferTimeout_, "") };
    inline QueryCallInPoolTransferConfigResponseBodyData& setTransferTimeout(string transferTimeout) { DARABONBA_PTR_SET_VALUE(transferTimeout_, transferTimeout) };


  protected:
    // The call mode. Valid values:
    // 
    // *   **roundRobin**
    // *   **random**
    std::shared_ptr<string> calledRouteMode_ = nullptr;
    // The details of the response parameters.
    std::shared_ptr<vector<Models::QueryCallInPoolTransferConfigResponseBodyDataDetails>> details_ = nullptr;
    // The time when the call transfer task was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timeout period for transferring the call.
    std::shared_ptr<string> transferTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
