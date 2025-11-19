// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAttachedMediaInfoResponseBodyAttachedMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAttachedMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachedMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedMediaList, attachedMediaList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachedMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedMediaList, attachedMediaList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttachedMediaInfoResponseBody() = default ;
    GetAttachedMediaInfoResponseBody(const GetAttachedMediaInfoResponseBody &) = default ;
    GetAttachedMediaInfoResponseBody(GetAttachedMediaInfoResponseBody &&) = default ;
    GetAttachedMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachedMediaInfoResponseBody() = default ;
    GetAttachedMediaInfoResponseBody& operator=(const GetAttachedMediaInfoResponseBody &) = default ;
    GetAttachedMediaInfoResponseBody& operator=(GetAttachedMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachedMediaList_ == nullptr
        && return this->nonExistMediaIds_ == nullptr && return this->requestId_ == nullptr; };
    // attachedMediaList Field Functions 
    bool hasAttachedMediaList() const { return this->attachedMediaList_ != nullptr;};
    void deleteAttachedMediaList() { this->attachedMediaList_ = nullptr;};
    inline const vector<GetAttachedMediaInfoResponseBodyAttachedMediaList> & attachedMediaList() const { DARABONBA_PTR_GET_CONST(attachedMediaList_, vector<GetAttachedMediaInfoResponseBodyAttachedMediaList>) };
    inline vector<GetAttachedMediaInfoResponseBodyAttachedMediaList> attachedMediaList() { DARABONBA_PTR_GET(attachedMediaList_, vector<GetAttachedMediaInfoResponseBodyAttachedMediaList>) };
    inline GetAttachedMediaInfoResponseBody& setAttachedMediaList(const vector<GetAttachedMediaInfoResponseBodyAttachedMediaList> & attachedMediaList) { DARABONBA_PTR_SET_VALUE(attachedMediaList_, attachedMediaList) };
    inline GetAttachedMediaInfoResponseBody& setAttachedMediaList(vector<GetAttachedMediaInfoResponseBodyAttachedMediaList> && attachedMediaList) { DARABONBA_PTR_SET_RVALUE(attachedMediaList_, attachedMediaList) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & nonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> nonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline GetAttachedMediaInfoResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline GetAttachedMediaInfoResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttachedMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media assets.
    std::shared_ptr<vector<GetAttachedMediaInfoResponseBodyAttachedMediaList>> attachedMediaList_ = nullptr;
    // The IDs of the auxiliary media assets that do not exist.
    std::shared_ptr<vector<string>> nonExistMediaIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
