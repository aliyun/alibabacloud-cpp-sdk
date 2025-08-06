// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOFACERECOGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOFACERECOGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList.hpp>
#include <alibabacloud/models/ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoFaceRecogJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoFaceRecogJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoFaceRecogJobList, AIVideoFaceRecogJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoFaceRecogJobIds, nonExistAIVideoFaceRecogJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoFaceRecogJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoFaceRecogJobList, AIVideoFaceRecogJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoFaceRecogJobIds, nonExistAIVideoFaceRecogJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoFaceRecogJobResponseBody() = default ;
    ListAIVideoFaceRecogJobResponseBody(const ListAIVideoFaceRecogJobResponseBody &) = default ;
    ListAIVideoFaceRecogJobResponseBody(ListAIVideoFaceRecogJobResponseBody &&) = default ;
    ListAIVideoFaceRecogJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoFaceRecogJobResponseBody() = default ;
    ListAIVideoFaceRecogJobResponseBody& operator=(const ListAIVideoFaceRecogJobResponseBody &) = default ;
    ListAIVideoFaceRecogJobResponseBody& operator=(ListAIVideoFaceRecogJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoFaceRecogJobList_ != nullptr
        && this->nonExistAIVideoFaceRecogJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoFaceRecogJobList Field Functions 
    bool hasAIVideoFaceRecogJobList() const { return this->AIVideoFaceRecogJobList_ != nullptr;};
    void deleteAIVideoFaceRecogJobList() { this->AIVideoFaceRecogJobList_ = nullptr;};
    inline const ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList & AIVideoFaceRecogJobList() const { DARABONBA_PTR_GET_CONST(AIVideoFaceRecogJobList_, ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList) };
    inline ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList AIVideoFaceRecogJobList() { DARABONBA_PTR_GET(AIVideoFaceRecogJobList_, ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList) };
    inline ListAIVideoFaceRecogJobResponseBody& setAIVideoFaceRecogJobList(const ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList & AIVideoFaceRecogJobList) { DARABONBA_PTR_SET_VALUE(AIVideoFaceRecogJobList_, AIVideoFaceRecogJobList) };
    inline ListAIVideoFaceRecogJobResponseBody& setAIVideoFaceRecogJobList(ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList && AIVideoFaceRecogJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoFaceRecogJobList_, AIVideoFaceRecogJobList) };


    // nonExistAIVideoFaceRecogJobIds Field Functions 
    bool hasNonExistAIVideoFaceRecogJobIds() const { return this->nonExistAIVideoFaceRecogJobIds_ != nullptr;};
    void deleteNonExistAIVideoFaceRecogJobIds() { this->nonExistAIVideoFaceRecogJobIds_ = nullptr;};
    inline const ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds & nonExistAIVideoFaceRecogJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoFaceRecogJobIds_, ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds) };
    inline ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds nonExistAIVideoFaceRecogJobIds() { DARABONBA_PTR_GET(nonExistAIVideoFaceRecogJobIds_, ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds) };
    inline ListAIVideoFaceRecogJobResponseBody& setNonExistAIVideoFaceRecogJobIds(const ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds & nonExistAIVideoFaceRecogJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoFaceRecogJobIds_, nonExistAIVideoFaceRecogJobIds) };
    inline ListAIVideoFaceRecogJobResponseBody& setNonExistAIVideoFaceRecogJobIds(ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds && nonExistAIVideoFaceRecogJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoFaceRecogJobIds_, nonExistAIVideoFaceRecogJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoFaceRecogJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList> AIVideoFaceRecogJobList_ = nullptr;
    std::shared_ptr<ListAIVideoFaceRecogJobResponseBodyNonExistAIVideoFaceRecogJobIds> nonExistAIVideoFaceRecogJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
