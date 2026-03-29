// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateDataDiagnosisJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataDiagnosisJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiagnosisJobIds, dataDiagnosisJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataDiagnosisJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiagnosisJobIds, dataDiagnosisJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataDiagnosisJobsResponseBody() = default ;
    CreateDataDiagnosisJobsResponseBody(const CreateDataDiagnosisJobsResponseBody &) = default ;
    CreateDataDiagnosisJobsResponseBody(CreateDataDiagnosisJobsResponseBody &&) = default ;
    CreateDataDiagnosisJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataDiagnosisJobsResponseBody() = default ;
    CreateDataDiagnosisJobsResponseBody& operator=(const CreateDataDiagnosisJobsResponseBody &) = default ;
    CreateDataDiagnosisJobsResponseBody& operator=(CreateDataDiagnosisJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiagnosisJobIds_ == nullptr
        && this->requestId_ == nullptr; };
    // dataDiagnosisJobIds Field Functions 
    bool hasDataDiagnosisJobIds() const { return this->dataDiagnosisJobIds_ != nullptr;};
    void deleteDataDiagnosisJobIds() { this->dataDiagnosisJobIds_ = nullptr;};
    inline const vector<string> & getDataDiagnosisJobIds() const { DARABONBA_PTR_GET_CONST(dataDiagnosisJobIds_, vector<string>) };
    inline vector<string> getDataDiagnosisJobIds() { DARABONBA_PTR_GET(dataDiagnosisJobIds_, vector<string>) };
    inline CreateDataDiagnosisJobsResponseBody& setDataDiagnosisJobIds(const vector<string> & dataDiagnosisJobIds) { DARABONBA_PTR_SET_VALUE(dataDiagnosisJobIds_, dataDiagnosisJobIds) };
    inline CreateDataDiagnosisJobsResponseBody& setDataDiagnosisJobIds(vector<string> && dataDiagnosisJobIds) { DARABONBA_PTR_SET_RVALUE(dataDiagnosisJobIds_, dataDiagnosisJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataDiagnosisJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> dataDiagnosisJobIds_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
