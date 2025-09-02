// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPSENSITIVEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPSENSITIVEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOpSensitiveDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpSensitiveDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpSensitiveData, opSensitiveData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpSensitiveDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpSensitiveData, opSensitiveData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOpSensitiveDataResponseBody() = default ;
    GetOpSensitiveDataResponseBody(const GetOpSensitiveDataResponseBody &) = default ;
    GetOpSensitiveDataResponseBody(GetOpSensitiveDataResponseBody &&) = default ;
    GetOpSensitiveDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpSensitiveDataResponseBody() = default ;
    GetOpSensitiveDataResponseBody& operator=(const GetOpSensitiveDataResponseBody &) = default ;
    GetOpSensitiveDataResponseBody& operator=(GetOpSensitiveDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opSensitiveData_ != nullptr
        && this->requestId_ != nullptr; };
    // opSensitiveData Field Functions 
    bool hasOpSensitiveData() const { return this->opSensitiveData_ != nullptr;};
    void deleteOpSensitiveData() { this->opSensitiveData_ = nullptr;};
    inline string opSensitiveData() const { DARABONBA_PTR_GET_DEFAULT(opSensitiveData_, "") };
    inline GetOpSensitiveDataResponseBody& setOpSensitiveData(string opSensitiveData) { DARABONBA_PTR_SET_VALUE(opSensitiveData_, opSensitiveData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpSensitiveDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the access records of the sensitive data. The information includes totalCount and opRiskDatas. opRiskDatas includes the following parameters:
    // 
    // *   sensType: the type of the sensitive data.
    // *   sensLevel: the sensitivity level of the sensitive data. A larger value indicates a higher sensitivity level.
    // *   opType: the type of the operation.
    // *   sql: the SQL statement that is executed.
    // *   opAccount: the account that is used to perform the operation.
    // *   opTime: the time when the operation was performed.
    std::shared_ptr<string> opSensitiveData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
