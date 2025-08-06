// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoTagJobResponseBodyAIVideoTagJobList.hpp>
#include <alibabacloud/models/ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTagJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTagJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTagJobList, AIVideoTagJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoTagJobIds, nonExistAIVideoTagJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTagJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTagJobList, AIVideoTagJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoTagJobIds, nonExistAIVideoTagJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoTagJobResponseBody() = default ;
    ListAIVideoTagJobResponseBody(const ListAIVideoTagJobResponseBody &) = default ;
    ListAIVideoTagJobResponseBody(ListAIVideoTagJobResponseBody &&) = default ;
    ListAIVideoTagJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTagJobResponseBody() = default ;
    ListAIVideoTagJobResponseBody& operator=(const ListAIVideoTagJobResponseBody &) = default ;
    ListAIVideoTagJobResponseBody& operator=(ListAIVideoTagJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTagJobList_ != nullptr
        && this->nonExistAIVideoTagJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoTagJobList Field Functions 
    bool hasAIVideoTagJobList() const { return this->AIVideoTagJobList_ != nullptr;};
    void deleteAIVideoTagJobList() { this->AIVideoTagJobList_ = nullptr;};
    inline const ListAIVideoTagJobResponseBodyAIVideoTagJobList & AIVideoTagJobList() const { DARABONBA_PTR_GET_CONST(AIVideoTagJobList_, ListAIVideoTagJobResponseBodyAIVideoTagJobList) };
    inline ListAIVideoTagJobResponseBodyAIVideoTagJobList AIVideoTagJobList() { DARABONBA_PTR_GET(AIVideoTagJobList_, ListAIVideoTagJobResponseBodyAIVideoTagJobList) };
    inline ListAIVideoTagJobResponseBody& setAIVideoTagJobList(const ListAIVideoTagJobResponseBodyAIVideoTagJobList & AIVideoTagJobList) { DARABONBA_PTR_SET_VALUE(AIVideoTagJobList_, AIVideoTagJobList) };
    inline ListAIVideoTagJobResponseBody& setAIVideoTagJobList(ListAIVideoTagJobResponseBodyAIVideoTagJobList && AIVideoTagJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoTagJobList_, AIVideoTagJobList) };


    // nonExistAIVideoTagJobIds Field Functions 
    bool hasNonExistAIVideoTagJobIds() const { return this->nonExistAIVideoTagJobIds_ != nullptr;};
    void deleteNonExistAIVideoTagJobIds() { this->nonExistAIVideoTagJobIds_ = nullptr;};
    inline const ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds & nonExistAIVideoTagJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoTagJobIds_, ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds) };
    inline ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds nonExistAIVideoTagJobIds() { DARABONBA_PTR_GET(nonExistAIVideoTagJobIds_, ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds) };
    inline ListAIVideoTagJobResponseBody& setNonExistAIVideoTagJobIds(const ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds & nonExistAIVideoTagJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoTagJobIds_, nonExistAIVideoTagJobIds) };
    inline ListAIVideoTagJobResponseBody& setNonExistAIVideoTagJobIds(ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds && nonExistAIVideoTagJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoTagJobIds_, nonExistAIVideoTagJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoTagJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoTagJobResponseBodyAIVideoTagJobList> AIVideoTagJobList_ = nullptr;
    std::shared_ptr<ListAIVideoTagJobResponseBodyNonExistAIVideoTagJobIds> nonExistAIVideoTagJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
