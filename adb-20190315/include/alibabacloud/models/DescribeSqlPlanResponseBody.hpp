// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSQLPlanResponseBodyDetail.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLPlanResponseBodyStageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSQLPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(OriginInfo, originInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageList, stageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(OriginInfo, originInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageList, stageList_);
    };
    DescribeSQLPlanResponseBody() = default ;
    DescribeSQLPlanResponseBody(const DescribeSQLPlanResponseBody &) = default ;
    DescribeSQLPlanResponseBody(DescribeSQLPlanResponseBody &&) = default ;
    DescribeSQLPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanResponseBody() = default ;
    DescribeSQLPlanResponseBody& operator=(const DescribeSQLPlanResponseBody &) = default ;
    DescribeSQLPlanResponseBody& operator=(DescribeSQLPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->originInfo_ == nullptr && return this->requestId_ == nullptr && return this->stageList_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const DescribeSQLPlanResponseBodyDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, DescribeSQLPlanResponseBodyDetail) };
    inline DescribeSQLPlanResponseBodyDetail detail() { DARABONBA_PTR_GET(detail_, DescribeSQLPlanResponseBodyDetail) };
    inline DescribeSQLPlanResponseBody& setDetail(const DescribeSQLPlanResponseBodyDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeSQLPlanResponseBody& setDetail(DescribeSQLPlanResponseBodyDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // originInfo Field Functions 
    bool hasOriginInfo() const { return this->originInfo_ != nullptr;};
    void deleteOriginInfo() { this->originInfo_ = nullptr;};
    inline string originInfo() const { DARABONBA_PTR_GET_DEFAULT(originInfo_, "") };
    inline DescribeSQLPlanResponseBody& setOriginInfo(string originInfo) { DARABONBA_PTR_SET_VALUE(originInfo_, originInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageList Field Functions 
    bool hasStageList() const { return this->stageList_ != nullptr;};
    void deleteStageList() { this->stageList_ = nullptr;};
    inline const vector<DescribeSQLPlanResponseBodyStageList> & stageList() const { DARABONBA_PTR_GET_CONST(stageList_, vector<DescribeSQLPlanResponseBodyStageList>) };
    inline vector<DescribeSQLPlanResponseBodyStageList> stageList() { DARABONBA_PTR_GET(stageList_, vector<DescribeSQLPlanResponseBodyStageList>) };
    inline DescribeSQLPlanResponseBody& setStageList(const vector<DescribeSQLPlanResponseBodyStageList> & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
    inline DescribeSQLPlanResponseBody& setStageList(vector<DescribeSQLPlanResponseBodyStageList> && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


  protected:
    // The execution information about the SQL statement.
    std::shared_ptr<DescribeSQLPlanResponseBodyDetail> detail_ = nullptr;
    // The original information about the SQL statement.
    std::shared_ptr<string> originInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried plan in different stages.
    std::shared_ptr<vector<DescribeSQLPlanResponseBodyStageList>> stageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
