// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAICaptionExtractionJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICaptionExtractionJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AICaptionExtractionJobList, AICaptionExtractionJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICaptionExtractionJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AICaptionExtractionJobList, AICaptionExtractionJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAICaptionExtractionJobsResponseBody() = default ;
    GetAICaptionExtractionJobsResponseBody(const GetAICaptionExtractionJobsResponseBody &) = default ;
    GetAICaptionExtractionJobsResponseBody(GetAICaptionExtractionJobsResponseBody &&) = default ;
    GetAICaptionExtractionJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICaptionExtractionJobsResponseBody() = default ;
    GetAICaptionExtractionJobsResponseBody& operator=(const GetAICaptionExtractionJobsResponseBody &) = default ;
    GetAICaptionExtractionJobsResponseBody& operator=(GetAICaptionExtractionJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AICaptionExtractionJobList_ != nullptr
        && this->requestId_ != nullptr; };
    // AICaptionExtractionJobList Field Functions 
    bool hasAICaptionExtractionJobList() const { return this->AICaptionExtractionJobList_ != nullptr;};
    void deleteAICaptionExtractionJobList() { this->AICaptionExtractionJobList_ = nullptr;};
    inline const vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList> & AICaptionExtractionJobList() const { DARABONBA_PTR_GET_CONST(AICaptionExtractionJobList_, vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList>) };
    inline vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList> AICaptionExtractionJobList() { DARABONBA_PTR_GET(AICaptionExtractionJobList_, vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList>) };
    inline GetAICaptionExtractionJobsResponseBody& setAICaptionExtractionJobList(const vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList> & AICaptionExtractionJobList) { DARABONBA_PTR_SET_VALUE(AICaptionExtractionJobList_, AICaptionExtractionJobList) };
    inline GetAICaptionExtractionJobsResponseBody& setAICaptionExtractionJobList(vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList> && AICaptionExtractionJobList) { DARABONBA_PTR_SET_RVALUE(AICaptionExtractionJobList_, AICaptionExtractionJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICaptionExtractionJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList>> AICaptionExtractionJobList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
