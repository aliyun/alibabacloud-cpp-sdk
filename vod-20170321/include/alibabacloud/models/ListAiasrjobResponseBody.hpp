// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIASRJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIASRJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIASRJobResponseBodyAIASRJobList.hpp>
#include <alibabacloud/models/ListAIASRJobResponseBodyNonExistAIASRJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIASRJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIASRJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIASRJobList, AIASRJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIASRJobIds, nonExistAIASRJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIASRJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIASRJobList, AIASRJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIASRJobIds, nonExistAIASRJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIASRJobResponseBody() = default ;
    ListAIASRJobResponseBody(const ListAIASRJobResponseBody &) = default ;
    ListAIASRJobResponseBody(ListAIASRJobResponseBody &&) = default ;
    ListAIASRJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIASRJobResponseBody() = default ;
    ListAIASRJobResponseBody& operator=(const ListAIASRJobResponseBody &) = default ;
    ListAIASRJobResponseBody& operator=(ListAIASRJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIASRJobList_ != nullptr
        && this->nonExistAIASRJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIASRJobList Field Functions 
    bool hasAIASRJobList() const { return this->AIASRJobList_ != nullptr;};
    void deleteAIASRJobList() { this->AIASRJobList_ = nullptr;};
    inline const ListAIASRJobResponseBodyAIASRJobList & AIASRJobList() const { DARABONBA_PTR_GET_CONST(AIASRJobList_, ListAIASRJobResponseBodyAIASRJobList) };
    inline ListAIASRJobResponseBodyAIASRJobList AIASRJobList() { DARABONBA_PTR_GET(AIASRJobList_, ListAIASRJobResponseBodyAIASRJobList) };
    inline ListAIASRJobResponseBody& setAIASRJobList(const ListAIASRJobResponseBodyAIASRJobList & AIASRJobList) { DARABONBA_PTR_SET_VALUE(AIASRJobList_, AIASRJobList) };
    inline ListAIASRJobResponseBody& setAIASRJobList(ListAIASRJobResponseBodyAIASRJobList && AIASRJobList) { DARABONBA_PTR_SET_RVALUE(AIASRJobList_, AIASRJobList) };


    // nonExistAIASRJobIds Field Functions 
    bool hasNonExistAIASRJobIds() const { return this->nonExistAIASRJobIds_ != nullptr;};
    void deleteNonExistAIASRJobIds() { this->nonExistAIASRJobIds_ = nullptr;};
    inline const ListAIASRJobResponseBodyNonExistAIASRJobIds & nonExistAIASRJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIASRJobIds_, ListAIASRJobResponseBodyNonExistAIASRJobIds) };
    inline ListAIASRJobResponseBodyNonExistAIASRJobIds nonExistAIASRJobIds() { DARABONBA_PTR_GET(nonExistAIASRJobIds_, ListAIASRJobResponseBodyNonExistAIASRJobIds) };
    inline ListAIASRJobResponseBody& setNonExistAIASRJobIds(const ListAIASRJobResponseBodyNonExistAIASRJobIds & nonExistAIASRJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIASRJobIds_, nonExistAIASRJobIds) };
    inline ListAIASRJobResponseBody& setNonExistAIASRJobIds(ListAIASRJobResponseBodyNonExistAIASRJobIds && nonExistAIASRJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIASRJobIds_, nonExistAIASRJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIASRJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIASRJobResponseBodyAIASRJobList> AIASRJobList_ = nullptr;
    std::shared_ptr<ListAIASRJobResponseBodyNonExistAIASRJobIds> nonExistAIASRJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
