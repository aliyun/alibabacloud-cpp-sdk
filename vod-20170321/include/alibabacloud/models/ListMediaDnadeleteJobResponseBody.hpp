// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIADNADELETEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIADNADELETEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaDNADeleteJobResponseBodyAIJobList.hpp>
#include <alibabacloud/models/ListMediaDNADeleteJobResponseBodyNonExistAIJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListMediaDNADeleteJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaDNADeleteJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaDNADeleteJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaDNADeleteJobResponseBody() = default ;
    ListMediaDNADeleteJobResponseBody(const ListMediaDNADeleteJobResponseBody &) = default ;
    ListMediaDNADeleteJobResponseBody(ListMediaDNADeleteJobResponseBody &&) = default ;
    ListMediaDNADeleteJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaDNADeleteJobResponseBody() = default ;
    ListMediaDNADeleteJobResponseBody& operator=(const ListMediaDNADeleteJobResponseBody &) = default ;
    ListMediaDNADeleteJobResponseBody& operator=(ListMediaDNADeleteJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJobList_ != nullptr
        && this->nonExistAIJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIJobList Field Functions 
    bool hasAIJobList() const { return this->AIJobList_ != nullptr;};
    void deleteAIJobList() { this->AIJobList_ = nullptr;};
    inline const ListMediaDNADeleteJobResponseBodyAIJobList & AIJobList() const { DARABONBA_PTR_GET_CONST(AIJobList_, ListMediaDNADeleteJobResponseBodyAIJobList) };
    inline ListMediaDNADeleteJobResponseBodyAIJobList AIJobList() { DARABONBA_PTR_GET(AIJobList_, ListMediaDNADeleteJobResponseBodyAIJobList) };
    inline ListMediaDNADeleteJobResponseBody& setAIJobList(const ListMediaDNADeleteJobResponseBodyAIJobList & AIJobList) { DARABONBA_PTR_SET_VALUE(AIJobList_, AIJobList) };
    inline ListMediaDNADeleteJobResponseBody& setAIJobList(ListMediaDNADeleteJobResponseBodyAIJobList && AIJobList) { DARABONBA_PTR_SET_RVALUE(AIJobList_, AIJobList) };


    // nonExistAIJobIds Field Functions 
    bool hasNonExistAIJobIds() const { return this->nonExistAIJobIds_ != nullptr;};
    void deleteNonExistAIJobIds() { this->nonExistAIJobIds_ = nullptr;};
    inline const ListMediaDNADeleteJobResponseBodyNonExistAIJobIds & nonExistAIJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIJobIds_, ListMediaDNADeleteJobResponseBodyNonExistAIJobIds) };
    inline ListMediaDNADeleteJobResponseBodyNonExistAIJobIds nonExistAIJobIds() { DARABONBA_PTR_GET(nonExistAIJobIds_, ListMediaDNADeleteJobResponseBodyNonExistAIJobIds) };
    inline ListMediaDNADeleteJobResponseBody& setNonExistAIJobIds(const ListMediaDNADeleteJobResponseBodyNonExistAIJobIds & nonExistAIJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIJobIds_, nonExistAIJobIds) };
    inline ListMediaDNADeleteJobResponseBody& setNonExistAIJobIds(ListMediaDNADeleteJobResponseBodyNonExistAIJobIds && nonExistAIJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIJobIds_, nonExistAIJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaDNADeleteJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListMediaDNADeleteJobResponseBodyAIJobList> AIJobList_ = nullptr;
    std::shared_ptr<ListMediaDNADeleteJobResponseBodyNonExistAIJobIds> nonExistAIJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
