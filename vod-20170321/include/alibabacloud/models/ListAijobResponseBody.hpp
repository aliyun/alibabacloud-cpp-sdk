// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIJobResponseBodyAIJobList.hpp>
#include <alibabacloud/models/ListAIJobResponseBodyNonExistAIJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIJobResponseBody() = default ;
    ListAIJobResponseBody(const ListAIJobResponseBody &) = default ;
    ListAIJobResponseBody(ListAIJobResponseBody &&) = default ;
    ListAIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIJobResponseBody() = default ;
    ListAIJobResponseBody& operator=(const ListAIJobResponseBody &) = default ;
    ListAIJobResponseBody& operator=(ListAIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJobList_ != nullptr
        && this->nonExistAIJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIJobList Field Functions 
    bool hasAIJobList() const { return this->AIJobList_ != nullptr;};
    void deleteAIJobList() { this->AIJobList_ = nullptr;};
    inline const ListAIJobResponseBodyAIJobList & AIJobList() const { DARABONBA_PTR_GET_CONST(AIJobList_, ListAIJobResponseBodyAIJobList) };
    inline ListAIJobResponseBodyAIJobList AIJobList() { DARABONBA_PTR_GET(AIJobList_, ListAIJobResponseBodyAIJobList) };
    inline ListAIJobResponseBody& setAIJobList(const ListAIJobResponseBodyAIJobList & AIJobList) { DARABONBA_PTR_SET_VALUE(AIJobList_, AIJobList) };
    inline ListAIJobResponseBody& setAIJobList(ListAIJobResponseBodyAIJobList && AIJobList) { DARABONBA_PTR_SET_RVALUE(AIJobList_, AIJobList) };


    // nonExistAIJobIds Field Functions 
    bool hasNonExistAIJobIds() const { return this->nonExistAIJobIds_ != nullptr;};
    void deleteNonExistAIJobIds() { this->nonExistAIJobIds_ = nullptr;};
    inline const ListAIJobResponseBodyNonExistAIJobIds & nonExistAIJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIJobIds_, ListAIJobResponseBodyNonExistAIJobIds) };
    inline ListAIJobResponseBodyNonExistAIJobIds nonExistAIJobIds() { DARABONBA_PTR_GET(nonExistAIJobIds_, ListAIJobResponseBodyNonExistAIJobIds) };
    inline ListAIJobResponseBody& setNonExistAIJobIds(const ListAIJobResponseBodyNonExistAIJobIds & nonExistAIJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIJobIds_, nonExistAIJobIds) };
    inline ListAIJobResponseBody& setNonExistAIJobIds(ListAIJobResponseBodyNonExistAIJobIds && nonExistAIJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIJobIds_, nonExistAIJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of jobs.
    std::shared_ptr<ListAIJobResponseBodyAIJobList> AIJobList_ = nullptr;
    // The IDs of the jobs that do not exist.
    std::shared_ptr<ListAIJobResponseBodyNonExistAIJobIds> nonExistAIJobIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
