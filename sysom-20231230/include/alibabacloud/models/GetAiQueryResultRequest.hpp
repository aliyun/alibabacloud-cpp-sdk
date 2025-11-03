// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIQUERYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIQUERYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAIQueryResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIQueryResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIQueryResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
    };
    GetAIQueryResultRequest() = default ;
    GetAIQueryResultRequest(const GetAIQueryResultRequest &) = default ;
    GetAIQueryResultRequest(GetAIQueryResultRequest &&) = default ;
    GetAIQueryResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIQueryResultRequest() = default ;
    GetAIQueryResultRequest& operator=(const GetAIQueryResultRequest &) = default ;
    GetAIQueryResultRequest& operator=(GetAIQueryResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisId_ == nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline string analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
    inline GetAIQueryResultRequest& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


  protected:
    std::shared_ptr<string> analysisId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
