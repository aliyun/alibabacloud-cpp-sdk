// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTranscodeTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupList, transcodeTemplateGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupList, transcodeTemplateGroupList_);
    };
    ListTranscodeTemplateGroupResponseBody() = default ;
    ListTranscodeTemplateGroupResponseBody(const ListTranscodeTemplateGroupResponseBody &) = default ;
    ListTranscodeTemplateGroupResponseBody(ListTranscodeTemplateGroupResponseBody &&) = default ;
    ListTranscodeTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeTemplateGroupResponseBody() = default ;
    ListTranscodeTemplateGroupResponseBody& operator=(const ListTranscodeTemplateGroupResponseBody &) = default ;
    ListTranscodeTemplateGroupResponseBody& operator=(ListTranscodeTemplateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transcodeTemplateGroupList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscodeTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTemplateGroupList Field Functions 
    bool hasTranscodeTemplateGroupList() const { return this->transcodeTemplateGroupList_ != nullptr;};
    void deleteTranscodeTemplateGroupList() { this->transcodeTemplateGroupList_ = nullptr;};
    inline const vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList> & transcodeTemplateGroupList() const { DARABONBA_PTR_GET_CONST(transcodeTemplateGroupList_, vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList>) };
    inline vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList> transcodeTemplateGroupList() { DARABONBA_PTR_GET(transcodeTemplateGroupList_, vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList>) };
    inline ListTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroupList(const vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList> & transcodeTemplateGroupList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupList_, transcodeTemplateGroupList) };
    inline ListTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroupList(vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList> && transcodeTemplateGroupList) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateGroupList_, transcodeTemplateGroupList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transcoding template groups.
    std::shared_ptr<vector<ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList>> transcodeTemplateGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
