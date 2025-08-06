// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIImageInfoResponseBodyAIImageInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIImageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIImageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageInfoList, AIImageInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIImageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageInfoList, AIImageInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIImageInfoResponseBody() = default ;
    ListAIImageInfoResponseBody(const ListAIImageInfoResponseBody &) = default ;
    ListAIImageInfoResponseBody(ListAIImageInfoResponseBody &&) = default ;
    ListAIImageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIImageInfoResponseBody() = default ;
    ListAIImageInfoResponseBody& operator=(const ListAIImageInfoResponseBody &) = default ;
    ListAIImageInfoResponseBody& operator=(ListAIImageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIImageInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // AIImageInfoList Field Functions 
    bool hasAIImageInfoList() const { return this->AIImageInfoList_ != nullptr;};
    void deleteAIImageInfoList() { this->AIImageInfoList_ = nullptr;};
    inline const vector<ListAIImageInfoResponseBodyAIImageInfoList> & AIImageInfoList() const { DARABONBA_PTR_GET_CONST(AIImageInfoList_, vector<ListAIImageInfoResponseBodyAIImageInfoList>) };
    inline vector<ListAIImageInfoResponseBodyAIImageInfoList> AIImageInfoList() { DARABONBA_PTR_GET(AIImageInfoList_, vector<ListAIImageInfoResponseBodyAIImageInfoList>) };
    inline ListAIImageInfoResponseBody& setAIImageInfoList(const vector<ListAIImageInfoResponseBodyAIImageInfoList> & AIImageInfoList) { DARABONBA_PTR_SET_VALUE(AIImageInfoList_, AIImageInfoList) };
    inline ListAIImageInfoResponseBody& setAIImageInfoList(vector<ListAIImageInfoResponseBodyAIImageInfoList> && AIImageInfoList) { DARABONBA_PTR_SET_RVALUE(AIImageInfoList_, AIImageInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIImageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image files that are uploaded for AI processing.
    std::shared_ptr<vector<ListAIImageInfoResponseBodyAIImageInfoList>> AIImageInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
