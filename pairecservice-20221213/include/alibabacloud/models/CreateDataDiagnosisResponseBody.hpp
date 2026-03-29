// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateDataDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiagnosisId, dataDiagnosisId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiagnosisId, dataDiagnosisId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataDiagnosisResponseBody() = default ;
    CreateDataDiagnosisResponseBody(const CreateDataDiagnosisResponseBody &) = default ;
    CreateDataDiagnosisResponseBody(CreateDataDiagnosisResponseBody &&) = default ;
    CreateDataDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataDiagnosisResponseBody() = default ;
    CreateDataDiagnosisResponseBody& operator=(const CreateDataDiagnosisResponseBody &) = default ;
    CreateDataDiagnosisResponseBody& operator=(CreateDataDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiagnosisId_ == nullptr
        && this->requestId_ == nullptr; };
    // dataDiagnosisId Field Functions 
    bool hasDataDiagnosisId() const { return this->dataDiagnosisId_ != nullptr;};
    void deleteDataDiagnosisId() { this->dataDiagnosisId_ = nullptr;};
    inline string getDataDiagnosisId() const { DARABONBA_PTR_GET_DEFAULT(dataDiagnosisId_, "") };
    inline CreateDataDiagnosisResponseBody& setDataDiagnosisId(string dataDiagnosisId) { DARABONBA_PTR_SET_VALUE(dataDiagnosisId_, dataDiagnosisId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> dataDiagnosisId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
