// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocumentAnalyzeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocumentAnalyzeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocumentAnalyzeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SubmitDocumentAnalyzeJobResponseBody() = default ;
    SubmitDocumentAnalyzeJobResponseBody(const SubmitDocumentAnalyzeJobResponseBody &) = default ;
    SubmitDocumentAnalyzeJobResponseBody(SubmitDocumentAnalyzeJobResponseBody &&) = default ;
    SubmitDocumentAnalyzeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocumentAnalyzeJobResponseBody() = default ;
    SubmitDocumentAnalyzeJobResponseBody& operator=(const SubmitDocumentAnalyzeJobResponseBody &) = default ;
    SubmitDocumentAnalyzeJobResponseBody& operator=(SubmitDocumentAnalyzeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    protected:
      // The job ID.
      shared_ptr<string> jobId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitDocumentAnalyzeJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SubmitDocumentAnalyzeJobResponseBody::Data) };
    inline SubmitDocumentAnalyzeJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SubmitDocumentAnalyzeJobResponseBody::Data) };
    inline SubmitDocumentAnalyzeJobResponseBody& setData(const SubmitDocumentAnalyzeJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitDocumentAnalyzeJobResponseBody& setData(SubmitDocumentAnalyzeJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitDocumentAnalyzeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<SubmitDocumentAnalyzeJobResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
