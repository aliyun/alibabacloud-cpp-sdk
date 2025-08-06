// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList.hpp>
#include <alibabacloud/models/ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCategoryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCategoryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCategoryJobList, AIVideoCategoryJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoCategoryJobIds, nonExistAIVideoCategoryJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCategoryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCategoryJobList, AIVideoCategoryJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoCategoryJobIds, nonExistAIVideoCategoryJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoCategoryJobResponseBody() = default ;
    ListAIVideoCategoryJobResponseBody(const ListAIVideoCategoryJobResponseBody &) = default ;
    ListAIVideoCategoryJobResponseBody(ListAIVideoCategoryJobResponseBody &&) = default ;
    ListAIVideoCategoryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCategoryJobResponseBody() = default ;
    ListAIVideoCategoryJobResponseBody& operator=(const ListAIVideoCategoryJobResponseBody &) = default ;
    ListAIVideoCategoryJobResponseBody& operator=(ListAIVideoCategoryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCategoryJobList_ != nullptr
        && this->nonExistAIVideoCategoryJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoCategoryJobList Field Functions 
    bool hasAIVideoCategoryJobList() const { return this->AIVideoCategoryJobList_ != nullptr;};
    void deleteAIVideoCategoryJobList() { this->AIVideoCategoryJobList_ = nullptr;};
    inline const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList & AIVideoCategoryJobList() const { DARABONBA_PTR_GET_CONST(AIVideoCategoryJobList_, ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList) };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList AIVideoCategoryJobList() { DARABONBA_PTR_GET(AIVideoCategoryJobList_, ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList) };
    inline ListAIVideoCategoryJobResponseBody& setAIVideoCategoryJobList(const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList & AIVideoCategoryJobList) { DARABONBA_PTR_SET_VALUE(AIVideoCategoryJobList_, AIVideoCategoryJobList) };
    inline ListAIVideoCategoryJobResponseBody& setAIVideoCategoryJobList(ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList && AIVideoCategoryJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoCategoryJobList_, AIVideoCategoryJobList) };


    // nonExistAIVideoCategoryJobIds Field Functions 
    bool hasNonExistAIVideoCategoryJobIds() const { return this->nonExistAIVideoCategoryJobIds_ != nullptr;};
    void deleteNonExistAIVideoCategoryJobIds() { this->nonExistAIVideoCategoryJobIds_ = nullptr;};
    inline const ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds & nonExistAIVideoCategoryJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoCategoryJobIds_, ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds) };
    inline ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds nonExistAIVideoCategoryJobIds() { DARABONBA_PTR_GET(nonExistAIVideoCategoryJobIds_, ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds) };
    inline ListAIVideoCategoryJobResponseBody& setNonExistAIVideoCategoryJobIds(const ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds & nonExistAIVideoCategoryJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoCategoryJobIds_, nonExistAIVideoCategoryJobIds) };
    inline ListAIVideoCategoryJobResponseBody& setNonExistAIVideoCategoryJobIds(ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds && nonExistAIVideoCategoryJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoCategoryJobIds_, nonExistAIVideoCategoryJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoCategoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList> AIVideoCategoryJobList_ = nullptr;
    std::shared_ptr<ListAIVideoCategoryJobResponseBodyNonExistAIVideoCategoryJobIds> nonExistAIVideoCategoryJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
