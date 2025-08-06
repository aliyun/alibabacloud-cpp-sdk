// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOSUMMARYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOSUMMARYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList.hpp>
#include <alibabacloud/models/ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoSummaryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoSummaryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoSummaryJobList, AIVideoSummaryJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoSummaryJobIds, nonExistAIVideoSummaryJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoSummaryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoSummaryJobList, AIVideoSummaryJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoSummaryJobIds, nonExistAIVideoSummaryJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoSummaryJobResponseBody() = default ;
    ListAIVideoSummaryJobResponseBody(const ListAIVideoSummaryJobResponseBody &) = default ;
    ListAIVideoSummaryJobResponseBody(ListAIVideoSummaryJobResponseBody &&) = default ;
    ListAIVideoSummaryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoSummaryJobResponseBody() = default ;
    ListAIVideoSummaryJobResponseBody& operator=(const ListAIVideoSummaryJobResponseBody &) = default ;
    ListAIVideoSummaryJobResponseBody& operator=(ListAIVideoSummaryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoSummaryJobList_ != nullptr
        && this->nonExistAIVideoSummaryJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoSummaryJobList Field Functions 
    bool hasAIVideoSummaryJobList() const { return this->AIVideoSummaryJobList_ != nullptr;};
    void deleteAIVideoSummaryJobList() { this->AIVideoSummaryJobList_ = nullptr;};
    inline const ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList & AIVideoSummaryJobList() const { DARABONBA_PTR_GET_CONST(AIVideoSummaryJobList_, ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList) };
    inline ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList AIVideoSummaryJobList() { DARABONBA_PTR_GET(AIVideoSummaryJobList_, ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList) };
    inline ListAIVideoSummaryJobResponseBody& setAIVideoSummaryJobList(const ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList & AIVideoSummaryJobList) { DARABONBA_PTR_SET_VALUE(AIVideoSummaryJobList_, AIVideoSummaryJobList) };
    inline ListAIVideoSummaryJobResponseBody& setAIVideoSummaryJobList(ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList && AIVideoSummaryJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoSummaryJobList_, AIVideoSummaryJobList) };


    // nonExistAIVideoSummaryJobIds Field Functions 
    bool hasNonExistAIVideoSummaryJobIds() const { return this->nonExistAIVideoSummaryJobIds_ != nullptr;};
    void deleteNonExistAIVideoSummaryJobIds() { this->nonExistAIVideoSummaryJobIds_ = nullptr;};
    inline const ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds & nonExistAIVideoSummaryJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoSummaryJobIds_, ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds) };
    inline ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds nonExistAIVideoSummaryJobIds() { DARABONBA_PTR_GET(nonExistAIVideoSummaryJobIds_, ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds) };
    inline ListAIVideoSummaryJobResponseBody& setNonExistAIVideoSummaryJobIds(const ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds & nonExistAIVideoSummaryJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoSummaryJobIds_, nonExistAIVideoSummaryJobIds) };
    inline ListAIVideoSummaryJobResponseBody& setNonExistAIVideoSummaryJobIds(ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds && nonExistAIVideoSummaryJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoSummaryJobIds_, nonExistAIVideoSummaryJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoSummaryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList> AIVideoSummaryJobList_ = nullptr;
    std::shared_ptr<ListAIVideoSummaryJobResponseBodyNonExistAIVideoSummaryJobIds> nonExistAIVideoSummaryJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
