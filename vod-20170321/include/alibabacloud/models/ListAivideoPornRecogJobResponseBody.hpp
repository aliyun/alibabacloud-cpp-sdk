// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOPORNRECOGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOPORNRECOGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList.hpp>
#include <alibabacloud/models/ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoPornRecogJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoPornRecogJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoPornRecogJobList, AIVideoPornRecogJobList_);
      DARABONBA_PTR_TO_JSON(NonExistPornRecogJobIds, nonExistPornRecogJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoPornRecogJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoPornRecogJobList, AIVideoPornRecogJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistPornRecogJobIds, nonExistPornRecogJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoPornRecogJobResponseBody() = default ;
    ListAIVideoPornRecogJobResponseBody(const ListAIVideoPornRecogJobResponseBody &) = default ;
    ListAIVideoPornRecogJobResponseBody(ListAIVideoPornRecogJobResponseBody &&) = default ;
    ListAIVideoPornRecogJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoPornRecogJobResponseBody() = default ;
    ListAIVideoPornRecogJobResponseBody& operator=(const ListAIVideoPornRecogJobResponseBody &) = default ;
    ListAIVideoPornRecogJobResponseBody& operator=(ListAIVideoPornRecogJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoPornRecogJobList_ != nullptr
        && this->nonExistPornRecogJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoPornRecogJobList Field Functions 
    bool hasAIVideoPornRecogJobList() const { return this->AIVideoPornRecogJobList_ != nullptr;};
    void deleteAIVideoPornRecogJobList() { this->AIVideoPornRecogJobList_ = nullptr;};
    inline const ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList & AIVideoPornRecogJobList() const { DARABONBA_PTR_GET_CONST(AIVideoPornRecogJobList_, ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList) };
    inline ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList AIVideoPornRecogJobList() { DARABONBA_PTR_GET(AIVideoPornRecogJobList_, ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList) };
    inline ListAIVideoPornRecogJobResponseBody& setAIVideoPornRecogJobList(const ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList & AIVideoPornRecogJobList) { DARABONBA_PTR_SET_VALUE(AIVideoPornRecogJobList_, AIVideoPornRecogJobList) };
    inline ListAIVideoPornRecogJobResponseBody& setAIVideoPornRecogJobList(ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList && AIVideoPornRecogJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoPornRecogJobList_, AIVideoPornRecogJobList) };


    // nonExistPornRecogJobIds Field Functions 
    bool hasNonExistPornRecogJobIds() const { return this->nonExistPornRecogJobIds_ != nullptr;};
    void deleteNonExistPornRecogJobIds() { this->nonExistPornRecogJobIds_ = nullptr;};
    inline const ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds & nonExistPornRecogJobIds() const { DARABONBA_PTR_GET_CONST(nonExistPornRecogJobIds_, ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds) };
    inline ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds nonExistPornRecogJobIds() { DARABONBA_PTR_GET(nonExistPornRecogJobIds_, ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds) };
    inline ListAIVideoPornRecogJobResponseBody& setNonExistPornRecogJobIds(const ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds & nonExistPornRecogJobIds) { DARABONBA_PTR_SET_VALUE(nonExistPornRecogJobIds_, nonExistPornRecogJobIds) };
    inline ListAIVideoPornRecogJobResponseBody& setNonExistPornRecogJobIds(ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds && nonExistPornRecogJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistPornRecogJobIds_, nonExistPornRecogJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoPornRecogJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList> AIVideoPornRecogJobList_ = nullptr;
    std::shared_ptr<ListAIVideoPornRecogJobResponseBodyNonExistPornRecogJobIds> nonExistPornRecogJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
