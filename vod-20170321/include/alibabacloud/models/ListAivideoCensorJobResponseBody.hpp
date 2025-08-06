// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCENSORJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCENSORJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoCensorJobResponseBodyAIVideoCensorJobList.hpp>
#include <alibabacloud/models/ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCensorJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCensorJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCensorJobList, AIVideoCensorJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIVideoCensorJobIds, nonExistAIVideoCensorJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCensorJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCensorJobList, AIVideoCensorJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIVideoCensorJobIds, nonExistAIVideoCensorJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoCensorJobResponseBody() = default ;
    ListAIVideoCensorJobResponseBody(const ListAIVideoCensorJobResponseBody &) = default ;
    ListAIVideoCensorJobResponseBody(ListAIVideoCensorJobResponseBody &&) = default ;
    ListAIVideoCensorJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCensorJobResponseBody() = default ;
    ListAIVideoCensorJobResponseBody& operator=(const ListAIVideoCensorJobResponseBody &) = default ;
    ListAIVideoCensorJobResponseBody& operator=(ListAIVideoCensorJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCensorJobList_ != nullptr
        && this->nonExistAIVideoCensorJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoCensorJobList Field Functions 
    bool hasAIVideoCensorJobList() const { return this->AIVideoCensorJobList_ != nullptr;};
    void deleteAIVideoCensorJobList() { this->AIVideoCensorJobList_ = nullptr;};
    inline const ListAIVideoCensorJobResponseBodyAIVideoCensorJobList & AIVideoCensorJobList() const { DARABONBA_PTR_GET_CONST(AIVideoCensorJobList_, ListAIVideoCensorJobResponseBodyAIVideoCensorJobList) };
    inline ListAIVideoCensorJobResponseBodyAIVideoCensorJobList AIVideoCensorJobList() { DARABONBA_PTR_GET(AIVideoCensorJobList_, ListAIVideoCensorJobResponseBodyAIVideoCensorJobList) };
    inline ListAIVideoCensorJobResponseBody& setAIVideoCensorJobList(const ListAIVideoCensorJobResponseBodyAIVideoCensorJobList & AIVideoCensorJobList) { DARABONBA_PTR_SET_VALUE(AIVideoCensorJobList_, AIVideoCensorJobList) };
    inline ListAIVideoCensorJobResponseBody& setAIVideoCensorJobList(ListAIVideoCensorJobResponseBodyAIVideoCensorJobList && AIVideoCensorJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoCensorJobList_, AIVideoCensorJobList) };


    // nonExistAIVideoCensorJobIds Field Functions 
    bool hasNonExistAIVideoCensorJobIds() const { return this->nonExistAIVideoCensorJobIds_ != nullptr;};
    void deleteNonExistAIVideoCensorJobIds() { this->nonExistAIVideoCensorJobIds_ = nullptr;};
    inline const ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds & nonExistAIVideoCensorJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIVideoCensorJobIds_, ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds) };
    inline ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds nonExistAIVideoCensorJobIds() { DARABONBA_PTR_GET(nonExistAIVideoCensorJobIds_, ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds) };
    inline ListAIVideoCensorJobResponseBody& setNonExistAIVideoCensorJobIds(const ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds & nonExistAIVideoCensorJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIVideoCensorJobIds_, nonExistAIVideoCensorJobIds) };
    inline ListAIVideoCensorJobResponseBody& setNonExistAIVideoCensorJobIds(ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds && nonExistAIVideoCensorJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIVideoCensorJobIds_, nonExistAIVideoCensorJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoCensorJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoCensorJobResponseBodyAIVideoCensorJobList> AIVideoCensorJobList_ = nullptr;
    std::shared_ptr<ListAIVideoCensorJobResponseBodyNonExistAIVideoCensorJobIds> nonExistAIVideoCensorJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
