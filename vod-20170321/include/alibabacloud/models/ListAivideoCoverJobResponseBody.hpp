// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoCoverJobResponseBodyAIVideoCoverJobList.hpp>
#include <alibabacloud/models/ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCoverJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCoverJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCoverJobList, AIVideoCoverJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoCoverJobIds, nonExistAIVideoCoverJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCoverJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCoverJobList, AIVideoCoverJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoCoverJobIds, nonExistAIVideoCoverJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoCoverJobResponseBody() = default ;
    ListAIVideoCoverJobResponseBody(const ListAIVideoCoverJobResponseBody &) = default ;
    ListAIVideoCoverJobResponseBody(ListAIVideoCoverJobResponseBody &&) = default ;
    ListAIVideoCoverJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCoverJobResponseBody() = default ;
    ListAIVideoCoverJobResponseBody& operator=(const ListAIVideoCoverJobResponseBody &) = default ;
    ListAIVideoCoverJobResponseBody& operator=(ListAIVideoCoverJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCoverJobList_ != nullptr
        && this->nonExistAIVideoCoverJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoCoverJobList Field Functions 
    bool hasAIVideoCoverJobList() const { return this->AIVideoCoverJobList_ != nullptr;};
    void deleteAIVideoCoverJobList() { this->AIVideoCoverJobList_ = nullptr;};
    inline const ListAIVideoCoverJobResponseBodyAIVideoCoverJobList & AIVideoCoverJobList() const { DARABONBA_PTR_GET_CONST(AIVideoCoverJobList_, ListAIVideoCoverJobResponseBodyAIVideoCoverJobList) };
    inline ListAIVideoCoverJobResponseBodyAIVideoCoverJobList AIVideoCoverJobList() { DARABONBA_PTR_GET(AIVideoCoverJobList_, ListAIVideoCoverJobResponseBodyAIVideoCoverJobList) };
    inline ListAIVideoCoverJobResponseBody& setAIVideoCoverJobList(const ListAIVideoCoverJobResponseBodyAIVideoCoverJobList & AIVideoCoverJobList) { DARABONBA_PTR_SET_VALUE(AIVideoCoverJobList_, AIVideoCoverJobList) };
    inline ListAIVideoCoverJobResponseBody& setAIVideoCoverJobList(ListAIVideoCoverJobResponseBodyAIVideoCoverJobList && AIVideoCoverJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoCoverJobList_, AIVideoCoverJobList) };


    // nonExistAIVideoCoverJobIds Field Functions 
    bool hasNonExistAIVideoCoverJobIds() const { return this->nonExistAIVideoCoverJobIds_ != nullptr;};
    void deleteNonExistAIVideoCoverJobIds() { this->nonExistAIVideoCoverJobIds_ = nullptr;};
    inline const ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds & nonExistAIVideoCoverJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoCoverJobIds_, ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds) };
    inline ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds nonExistAIVideoCoverJobIds() { DARABONBA_PTR_GET(nonExistAIVideoCoverJobIds_, ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds) };
    inline ListAIVideoCoverJobResponseBody& setNonExistAIVideoCoverJobIds(const ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds & nonExistAIVideoCoverJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoCoverJobIds_, nonExistAIVideoCoverJobIds) };
    inline ListAIVideoCoverJobResponseBody& setNonExistAIVideoCoverJobIds(ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds && nonExistAIVideoCoverJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoCoverJobIds_, nonExistAIVideoCoverJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoCoverJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoCoverJobResponseBodyAIVideoCoverJobList> AIVideoCoverJobList_ = nullptr;
    std::shared_ptr<ListAIVideoCoverJobResponseBodyNonExistAIVideoCoverJobIds> nonExistAIVideoCoverJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
