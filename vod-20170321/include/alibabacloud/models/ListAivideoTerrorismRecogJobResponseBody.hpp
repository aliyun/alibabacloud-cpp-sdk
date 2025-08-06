// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList.hpp>
#include <alibabacloud/models/ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTerrorismRecogJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTerrorismRecogJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTerrorismRecogJobList, AIVideoTerrorismRecogJobList_);
      DARABONBA_PTR_TO_JSON(NonExistTerrorismRecogJobIds, nonExistTerrorismRecogJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTerrorismRecogJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTerrorismRecogJobList, AIVideoTerrorismRecogJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistTerrorismRecogJobIds, nonExistTerrorismRecogJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIVideoTerrorismRecogJobResponseBody() = default ;
    ListAIVideoTerrorismRecogJobResponseBody(const ListAIVideoTerrorismRecogJobResponseBody &) = default ;
    ListAIVideoTerrorismRecogJobResponseBody(ListAIVideoTerrorismRecogJobResponseBody &&) = default ;
    ListAIVideoTerrorismRecogJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTerrorismRecogJobResponseBody() = default ;
    ListAIVideoTerrorismRecogJobResponseBody& operator=(const ListAIVideoTerrorismRecogJobResponseBody &) = default ;
    ListAIVideoTerrorismRecogJobResponseBody& operator=(ListAIVideoTerrorismRecogJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTerrorismRecogJobList_ != nullptr
        && this->nonExistTerrorismRecogJobIds_ != nullptr && this->requestId_ != nullptr; };
    // AIVideoTerrorismRecogJobList Field Functions 
    bool hasAIVideoTerrorismRecogJobList() const { return this->AIVideoTerrorismRecogJobList_ != nullptr;};
    void deleteAIVideoTerrorismRecogJobList() { this->AIVideoTerrorismRecogJobList_ = nullptr;};
    inline const ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList & AIVideoTerrorismRecogJobList() const { DARABONBA_PTR_GET_CONST(AIVideoTerrorismRecogJobList_, ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList) };
    inline ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList AIVideoTerrorismRecogJobList() { DARABONBA_PTR_GET(AIVideoTerrorismRecogJobList_, ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList) };
    inline ListAIVideoTerrorismRecogJobResponseBody& setAIVideoTerrorismRecogJobList(const ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList & AIVideoTerrorismRecogJobList) { DARABONBA_PTR_SET_VALUE(AIVideoTerrorismRecogJobList_, AIVideoTerrorismRecogJobList) };
    inline ListAIVideoTerrorismRecogJobResponseBody& setAIVideoTerrorismRecogJobList(ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList && AIVideoTerrorismRecogJobList) { DARABONBA_PTR_SET_RVALUE(AIVideoTerrorismRecogJobList_, AIVideoTerrorismRecogJobList) };


    // nonExistTerrorismRecogJobIds Field Functions 
    bool hasNonExistTerrorismRecogJobIds() const { return this->nonExistTerrorismRecogJobIds_ != nullptr;};
    void deleteNonExistTerrorismRecogJobIds() { this->nonExistTerrorismRecogJobIds_ = nullptr;};
    inline const ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds & nonExistTerrorismRecogJobIds() const { DARABONBA_PTR_GET_CONST(nonExistTerrorismRecogJobIds_, ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds) };
    inline ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds nonExistTerrorismRecogJobIds() { DARABONBA_PTR_GET(nonExistTerrorismRecogJobIds_, ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds) };
    inline ListAIVideoTerrorismRecogJobResponseBody& setNonExistTerrorismRecogJobIds(const ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds & nonExistTerrorismRecogJobIds) { DARABONBA_PTR_SET_VALUE(nonExistTerrorismRecogJobIds_, nonExistTerrorismRecogJobIds) };
    inline ListAIVideoTerrorismRecogJobResponseBody& setNonExistTerrorismRecogJobIds(ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds && nonExistTerrorismRecogJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistTerrorismRecogJobIds_, nonExistTerrorismRecogJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIVideoTerrorismRecogJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList> AIVideoTerrorismRecogJobList_ = nullptr;
    std::shared_ptr<ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds> nonExistTerrorismRecogJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
