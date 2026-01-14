// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocumentAnalyzeResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
    };
    GetDocumentAnalyzeResultRequest() = default ;
    GetDocumentAnalyzeResultRequest(const GetDocumentAnalyzeResultRequest &) = default ;
    GetDocumentAnalyzeResultRequest(GetDocumentAnalyzeResultRequest &&) = default ;
    GetDocumentAnalyzeResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultRequest() = default ;
    GetDocumentAnalyzeResultRequest& operator=(const GetDocumentAnalyzeResultRequest &) = default ;
    GetDocumentAnalyzeResultRequest& operator=(GetDocumentAnalyzeResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetDocumentAnalyzeResultRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // Job ID, specifying which document\\"s parsing result to query. This is a return parameter from the \\"Submit Document Parsing Job\\" interface.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
