// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosisSQLInfoResponseBodyStageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisSQLInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosisSQLInfo, diagnosisSQLInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageInfos, stageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosisSQLInfo, diagnosisSQLInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageInfos, stageInfos_);
    };
    DescribeDiagnosisSQLInfoResponseBody() = default ;
    DescribeDiagnosisSQLInfoResponseBody(const DescribeDiagnosisSQLInfoResponseBody &) = default ;
    DescribeDiagnosisSQLInfoResponseBody(DescribeDiagnosisSQLInfoResponseBody &&) = default ;
    DescribeDiagnosisSQLInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSQLInfoResponseBody() = default ;
    DescribeDiagnosisSQLInfoResponseBody& operator=(const DescribeDiagnosisSQLInfoResponseBody &) = default ;
    DescribeDiagnosisSQLInfoResponseBody& operator=(DescribeDiagnosisSQLInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosisSQLInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->stageInfos_ == nullptr; };
    // diagnosisSQLInfo Field Functions 
    bool hasDiagnosisSQLInfo() const { return this->diagnosisSQLInfo_ != nullptr;};
    void deleteDiagnosisSQLInfo() { this->diagnosisSQLInfo_ = nullptr;};
    inline string diagnosisSQLInfo() const { DARABONBA_PTR_GET_DEFAULT(diagnosisSQLInfo_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setDiagnosisSQLInfo(string diagnosisSQLInfo) { DARABONBA_PTR_SET_VALUE(diagnosisSQLInfo_, diagnosisSQLInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageInfos Field Functions 
    bool hasStageInfos() const { return this->stageInfos_ != nullptr;};
    void deleteStageInfos() { this->stageInfos_ = nullptr;};
    inline const vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos> & stageInfos() const { DARABONBA_PTR_GET_CONST(stageInfos_, vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos>) };
    inline vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos> stageInfos() { DARABONBA_PTR_GET(stageInfos_, vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos>) };
    inline DescribeDiagnosisSQLInfoResponseBody& setStageInfos(const vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos> & stageInfos) { DARABONBA_PTR_SET_VALUE(stageInfos_, stageInfos) };
    inline DescribeDiagnosisSQLInfoResponseBody& setStageInfos(vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos> && stageInfos) { DARABONBA_PTR_SET_RVALUE(stageInfos_, stageInfos) };


  protected:
    // The queried execution information, including the SQL statement, statistics, execution plan, and operator information.
    std::shared_ptr<string> diagnosisSQLInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried execution information by stage.
    std::shared_ptr<vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos>> stageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
