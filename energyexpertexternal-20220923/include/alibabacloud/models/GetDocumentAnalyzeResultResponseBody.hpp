// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDocumentAnalyzeResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocumentAnalyzeResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDocumentAnalyzeResultResponseBody() = default ;
    GetDocumentAnalyzeResultResponseBody(const GetDocumentAnalyzeResultResponseBody &) = default ;
    GetDocumentAnalyzeResultResponseBody(GetDocumentAnalyzeResultResponseBody &&) = default ;
    GetDocumentAnalyzeResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultResponseBody() = default ;
    GetDocumentAnalyzeResultResponseBody& operator=(const GetDocumentAnalyzeResultResponseBody &) = default ;
    GetDocumentAnalyzeResultResponseBody& operator=(GetDocumentAnalyzeResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocumentAnalyzeResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDocumentAnalyzeResultResponseBodyData) };
    inline GetDocumentAnalyzeResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDocumentAnalyzeResultResponseBodyData) };
    inline GetDocumentAnalyzeResultResponseBody& setData(const GetDocumentAnalyzeResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocumentAnalyzeResultResponseBody& setData(GetDocumentAnalyzeResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocumentAnalyzeResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned Data
    std::shared_ptr<GetDocumentAnalyzeResultResponseBodyData> data_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
