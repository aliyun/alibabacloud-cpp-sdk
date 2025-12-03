// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANALYSISTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETANALYSISTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class GetAnalysisTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnalysisTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultJson, resultJson_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnalysisTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultJson, resultJson_);
    };
    GetAnalysisTaskResultResponseBody() = default ;
    GetAnalysisTaskResultResponseBody(const GetAnalysisTaskResultResponseBody &) = default ;
    GetAnalysisTaskResultResponseBody(GetAnalysisTaskResultResponseBody &&) = default ;
    GetAnalysisTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnalysisTaskResultResponseBody() = default ;
    GetAnalysisTaskResultResponseBody& operator=(const GetAnalysisTaskResultResponseBody &) = default ;
    GetAnalysisTaskResultResponseBody& operator=(GetAnalysisTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisId_ == nullptr
        && return this->requestId_ == nullptr && return this->resultJson_ == nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline int64_t analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, 0L) };
    inline GetAnalysisTaskResultResponseBody& setAnalysisId(int64_t analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAnalysisTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultJson Field Functions 
    bool hasResultJson() const { return this->resultJson_ != nullptr;};
    void deleteResultJson() { this->resultJson_ = nullptr;};
    inline string resultJson() const { DARABONBA_PTR_GET_DEFAULT(resultJson_, "") };
    inline GetAnalysisTaskResultResponseBody& setResultJson(string resultJson) { DARABONBA_PTR_SET_VALUE(resultJson_, resultJson) };


  protected:
    std::shared_ptr<int64_t> analysisId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
