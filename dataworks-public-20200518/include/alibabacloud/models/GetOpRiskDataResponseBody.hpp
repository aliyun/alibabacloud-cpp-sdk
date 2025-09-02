// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPRISKDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPRISKDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOpRiskDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpRiskDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskData, riskData_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpRiskDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskData, riskData_);
    };
    GetOpRiskDataResponseBody() = default ;
    GetOpRiskDataResponseBody(const GetOpRiskDataResponseBody &) = default ;
    GetOpRiskDataResponseBody(GetOpRiskDataResponseBody &&) = default ;
    GetOpRiskDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpRiskDataResponseBody() = default ;
    GetOpRiskDataResponseBody& operator=(const GetOpRiskDataResponseBody &) = default ;
    GetOpRiskDataResponseBody& operator=(GetOpRiskDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->riskData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpRiskDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskData Field Functions 
    bool hasRiskData() const { return this->riskData_ != nullptr;};
    void deleteRiskData() { this->riskData_ = nullptr;};
    inline string riskData() const { DARABONBA_PTR_GET_DEFAULT(riskData_, "") };
    inline GetOpRiskDataResponseBody& setRiskData(string riskData) { DARABONBA_PTR_SET_VALUE(riskData_, riskData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the high-risk sensitive data. The information includes totalCount and opRiskDatas. opRiskDatas includes the following parameters:
    // 
    // *   sensType: the type of the sensitive data
    // *   sensLevel: the sensitivity level of the sensitive data
    // *   opType: the type of the operation
    // *   sql: the SQL statement that is executed
    // *   opAccount: the account that is used to perform the operation
    // *   opTime: the time when the operation was performed
    std::shared_ptr<string> riskData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
