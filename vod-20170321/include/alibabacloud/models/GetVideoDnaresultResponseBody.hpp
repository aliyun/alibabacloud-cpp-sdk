// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoDNAResultResponseBodyAIVideoDNAResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoDNAResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDNAResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoDNAResult, AIVideoDNAResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDNAResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoDNAResult, AIVideoDNAResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVideoDNAResultResponseBody() = default ;
    GetVideoDNAResultResponseBody(const GetVideoDNAResultResponseBody &) = default ;
    GetVideoDNAResultResponseBody(GetVideoDNAResultResponseBody &&) = default ;
    GetVideoDNAResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDNAResultResponseBody() = default ;
    GetVideoDNAResultResponseBody& operator=(const GetVideoDNAResultResponseBody &) = default ;
    GetVideoDNAResultResponseBody& operator=(GetVideoDNAResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoDNAResult_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoDNAResult Field Functions 
    bool hasAIVideoDNAResult() const { return this->AIVideoDNAResult_ != nullptr;};
    void deleteAIVideoDNAResult() { this->AIVideoDNAResult_ = nullptr;};
    inline const GetVideoDNAResultResponseBodyAIVideoDNAResult & AIVideoDNAResult() const { DARABONBA_PTR_GET_CONST(AIVideoDNAResult_, GetVideoDNAResultResponseBodyAIVideoDNAResult) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResult AIVideoDNAResult() { DARABONBA_PTR_GET(AIVideoDNAResult_, GetVideoDNAResultResponseBodyAIVideoDNAResult) };
    inline GetVideoDNAResultResponseBody& setAIVideoDNAResult(const GetVideoDNAResultResponseBodyAIVideoDNAResult & AIVideoDNAResult) { DARABONBA_PTR_SET_VALUE(AIVideoDNAResult_, AIVideoDNAResult) };
    inline GetVideoDNAResultResponseBody& setAIVideoDNAResult(GetVideoDNAResultResponseBodyAIVideoDNAResult && AIVideoDNAResult) { DARABONBA_PTR_SET_RVALUE(AIVideoDNAResult_, AIVideoDNAResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoDNAResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetVideoDNAResultResponseBodyAIVideoDNAResult> AIVideoDNAResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
