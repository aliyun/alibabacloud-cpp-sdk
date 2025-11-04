// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPlayInfoResponseBodyMediaBase.hpp>
#include <vector>
#include <alibabacloud/models/GetPlayInfoResponseBodyPlayInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaBase, mediaBase_);
      DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaBase, mediaBase_);
      DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody(GetPlayInfoResponseBody &&) = default ;
    GetPlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody& operator=(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody& operator=(GetPlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaBase_ == nullptr
        && return this->playInfoList_ == nullptr && return this->requestId_ == nullptr; };
    // mediaBase Field Functions 
    bool hasMediaBase() const { return this->mediaBase_ != nullptr;};
    void deleteMediaBase() { this->mediaBase_ = nullptr;};
    inline const GetPlayInfoResponseBodyMediaBase & mediaBase() const { DARABONBA_PTR_GET_CONST(mediaBase_, GetPlayInfoResponseBodyMediaBase) };
    inline GetPlayInfoResponseBodyMediaBase mediaBase() { DARABONBA_PTR_GET(mediaBase_, GetPlayInfoResponseBodyMediaBase) };
    inline GetPlayInfoResponseBody& setMediaBase(const GetPlayInfoResponseBodyMediaBase & mediaBase) { DARABONBA_PTR_SET_VALUE(mediaBase_, mediaBase) };
    inline GetPlayInfoResponseBody& setMediaBase(GetPlayInfoResponseBodyMediaBase && mediaBase) { DARABONBA_PTR_SET_RVALUE(mediaBase_, mediaBase) };


    // playInfoList Field Functions 
    bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
    void deletePlayInfoList() { this->playInfoList_ = nullptr;};
    inline const vector<GetPlayInfoResponseBodyPlayInfoList> & playInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, vector<GetPlayInfoResponseBodyPlayInfoList>) };
    inline vector<GetPlayInfoResponseBodyPlayInfoList> playInfoList() { DARABONBA_PTR_GET(playInfoList_, vector<GetPlayInfoResponseBodyPlayInfoList>) };
    inline GetPlayInfoResponseBody& setPlayInfoList(const vector<GetPlayInfoResponseBodyPlayInfoList> & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(vector<GetPlayInfoResponseBodyPlayInfoList> && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media asset.
    std::shared_ptr<GetPlayInfoResponseBodyMediaBase> mediaBase_ = nullptr;
    // The information about the audio or video stream.
    std::shared_ptr<vector<GetPlayInfoResponseBodyPlayInfoList>> playInfoList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
