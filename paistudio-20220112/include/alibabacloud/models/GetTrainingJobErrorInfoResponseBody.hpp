// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrainingJobErrorInfoResponseBodyErrorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobErrorInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobErrorInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobErrorInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTrainingJobErrorInfoResponseBody() = default ;
    GetTrainingJobErrorInfoResponseBody(const GetTrainingJobErrorInfoResponseBody &) = default ;
    GetTrainingJobErrorInfoResponseBody(GetTrainingJobErrorInfoResponseBody &&) = default ;
    GetTrainingJobErrorInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobErrorInfoResponseBody() = default ;
    GetTrainingJobErrorInfoResponseBody& operator=(const GetTrainingJobErrorInfoResponseBody &) = default ;
    GetTrainingJobErrorInfoResponseBody& operator=(GetTrainingJobErrorInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline const GetTrainingJobErrorInfoResponseBodyErrorInfo & errorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, GetTrainingJobErrorInfoResponseBodyErrorInfo) };
    inline GetTrainingJobErrorInfoResponseBodyErrorInfo errorInfo() { DARABONBA_PTR_GET(errorInfo_, GetTrainingJobErrorInfoResponseBodyErrorInfo) };
    inline GetTrainingJobErrorInfoResponseBody& setErrorInfo(const GetTrainingJobErrorInfoResponseBodyErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
    inline GetTrainingJobErrorInfoResponseBody& setErrorInfo(GetTrainingJobErrorInfoResponseBodyErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrainingJobErrorInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetTrainingJobErrorInfoResponseBodyErrorInfo> errorInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
