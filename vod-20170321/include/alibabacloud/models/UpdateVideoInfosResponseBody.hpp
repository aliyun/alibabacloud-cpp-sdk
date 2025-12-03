// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateVideoInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenVideoIds, forbiddenVideoIds_);
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenVideoIds, forbiddenVideoIds_);
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateVideoInfosResponseBody() = default ;
    UpdateVideoInfosResponseBody(const UpdateVideoInfosResponseBody &) = default ;
    UpdateVideoInfosResponseBody(UpdateVideoInfosResponseBody &&) = default ;
    UpdateVideoInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoInfosResponseBody() = default ;
    UpdateVideoInfosResponseBody& operator=(const UpdateVideoInfosResponseBody &) = default ;
    UpdateVideoInfosResponseBody& operator=(UpdateVideoInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenVideoIds_ == nullptr
        && return this->nonExistReferenceIds_ == nullptr && return this->nonExistVideoIds_ == nullptr && return this->requestId_ == nullptr; };
    // forbiddenVideoIds Field Functions 
    bool hasForbiddenVideoIds() const { return this->forbiddenVideoIds_ != nullptr;};
    void deleteForbiddenVideoIds() { this->forbiddenVideoIds_ = nullptr;};
    inline const vector<string> & forbiddenVideoIds() const { DARABONBA_PTR_GET_CONST(forbiddenVideoIds_, vector<string>) };
    inline vector<string> forbiddenVideoIds() { DARABONBA_PTR_GET(forbiddenVideoIds_, vector<string>) };
    inline UpdateVideoInfosResponseBody& setForbiddenVideoIds(const vector<string> & forbiddenVideoIds) { DARABONBA_PTR_SET_VALUE(forbiddenVideoIds_, forbiddenVideoIds) };
    inline UpdateVideoInfosResponseBody& setForbiddenVideoIds(vector<string> && forbiddenVideoIds) { DARABONBA_PTR_SET_RVALUE(forbiddenVideoIds_, forbiddenVideoIds) };


    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & nonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> nonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline UpdateVideoInfosResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline UpdateVideoInfosResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & nonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> nonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline UpdateVideoInfosResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline UpdateVideoInfosResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateVideoInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the videos that cannot be modified. Generally, videos cannot be modified if you do not have required [permissions](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<vector<string>> forbiddenVideoIds_ = nullptr;
    std::shared_ptr<vector<string>> nonExistReferenceIds_ = nullptr;
    // The IDs of the videos that do not exist.
    std::shared_ptr<vector<string>> nonExistVideoIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
