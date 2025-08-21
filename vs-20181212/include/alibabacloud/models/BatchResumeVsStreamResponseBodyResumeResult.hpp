// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODYRESUMERESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODYRESUMERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchResumeVsStreamResponseBodyResumeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamResponseBodyResumeResult& obj) { 
      DARABONBA_PTR_TO_JSON(ResumeResultInfo, resumeResultInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamResponseBodyResumeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ResumeResultInfo, resumeResultInfo_);
    };
    BatchResumeVsStreamResponseBodyResumeResult() = default ;
    BatchResumeVsStreamResponseBodyResumeResult(const BatchResumeVsStreamResponseBodyResumeResult &) = default ;
    BatchResumeVsStreamResponseBodyResumeResult(BatchResumeVsStreamResponseBodyResumeResult &&) = default ;
    BatchResumeVsStreamResponseBodyResumeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamResponseBodyResumeResult() = default ;
    BatchResumeVsStreamResponseBodyResumeResult& operator=(const BatchResumeVsStreamResponseBodyResumeResult &) = default ;
    BatchResumeVsStreamResponseBodyResumeResult& operator=(BatchResumeVsStreamResponseBodyResumeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resumeResultInfo_ != nullptr; };
    // resumeResultInfo Field Functions 
    bool hasResumeResultInfo() const { return this->resumeResultInfo_ != nullptr;};
    void deleteResumeResultInfo() { this->resumeResultInfo_ = nullptr;};
    inline const vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo> & resumeResultInfo() const { DARABONBA_PTR_GET_CONST(resumeResultInfo_, vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo>) };
    inline vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo> resumeResultInfo() { DARABONBA_PTR_GET(resumeResultInfo_, vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo>) };
    inline BatchResumeVsStreamResponseBodyResumeResult& setResumeResultInfo(const vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo> & resumeResultInfo) { DARABONBA_PTR_SET_VALUE(resumeResultInfo_, resumeResultInfo) };
    inline BatchResumeVsStreamResponseBodyResumeResult& setResumeResultInfo(vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo> && resumeResultInfo) { DARABONBA_PTR_SET_RVALUE(resumeResultInfo_, resumeResultInfo) };


  protected:
    std::shared_ptr<vector<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo>> resumeResultInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
