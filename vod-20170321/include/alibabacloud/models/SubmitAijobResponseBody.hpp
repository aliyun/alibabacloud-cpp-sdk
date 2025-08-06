// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIJobResponseBodyAIJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIJobResponseBody() = default ;
    SubmitAIJobResponseBody(const SubmitAIJobResponseBody &) = default ;
    SubmitAIJobResponseBody(SubmitAIJobResponseBody &&) = default ;
    SubmitAIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIJobResponseBody() = default ;
    SubmitAIJobResponseBody& operator=(const SubmitAIJobResponseBody &) = default ;
    SubmitAIJobResponseBody& operator=(SubmitAIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJobList_ != nullptr
        && this->requestId_ != nullptr; };
    // AIJobList Field Functions 
    bool hasAIJobList() const { return this->AIJobList_ != nullptr;};
    void deleteAIJobList() { this->AIJobList_ = nullptr;};
    inline const SubmitAIJobResponseBodyAIJobList & AIJobList() const { DARABONBA_PTR_GET_CONST(AIJobList_, SubmitAIJobResponseBodyAIJobList) };
    inline SubmitAIJobResponseBodyAIJobList AIJobList() { DARABONBA_PTR_GET(AIJobList_, SubmitAIJobResponseBodyAIJobList) };
    inline SubmitAIJobResponseBody& setAIJobList(const SubmitAIJobResponseBodyAIJobList & AIJobList) { DARABONBA_PTR_SET_VALUE(AIJobList_, AIJobList) };
    inline SubmitAIJobResponseBody& setAIJobList(SubmitAIJobResponseBodyAIJobList && AIJobList) { DARABONBA_PTR_SET_RVALUE(AIJobList_, AIJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AI jobs.
    std::shared_ptr<SubmitAIJobResponseBodyAIJobList> AIJobList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
