// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIDEORESPONSEBODY_HPP_
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
  class DeleteVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenVideoIds, forbiddenVideoIds_);
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenVideoIds, forbiddenVideoIds_);
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteVideoResponseBody() = default ;
    DeleteVideoResponseBody(const DeleteVideoResponseBody &) = default ;
    DeleteVideoResponseBody(DeleteVideoResponseBody &&) = default ;
    DeleteVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVideoResponseBody() = default ;
    DeleteVideoResponseBody& operator=(const DeleteVideoResponseBody &) = default ;
    DeleteVideoResponseBody& operator=(DeleteVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenVideoIds_ == nullptr
        && this->nonExistReferenceIds_ == nullptr && this->nonExistVideoIds_ == nullptr && this->requestId_ == nullptr; };
    // forbiddenVideoIds Field Functions 
    bool hasForbiddenVideoIds() const { return this->forbiddenVideoIds_ != nullptr;};
    void deleteForbiddenVideoIds() { this->forbiddenVideoIds_ = nullptr;};
    inline const vector<string> & getForbiddenVideoIds() const { DARABONBA_PTR_GET_CONST(forbiddenVideoIds_, vector<string>) };
    inline vector<string> getForbiddenVideoIds() { DARABONBA_PTR_GET(forbiddenVideoIds_, vector<string>) };
    inline DeleteVideoResponseBody& setForbiddenVideoIds(const vector<string> & forbiddenVideoIds) { DARABONBA_PTR_SET_VALUE(forbiddenVideoIds_, forbiddenVideoIds) };
    inline DeleteVideoResponseBody& setForbiddenVideoIds(vector<string> && forbiddenVideoIds) { DARABONBA_PTR_SET_RVALUE(forbiddenVideoIds_, forbiddenVideoIds) };


    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & getNonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> getNonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline DeleteVideoResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline DeleteVideoResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & getNonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> getNonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline DeleteVideoResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline DeleteVideoResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the videos that cannot be deleted.
    // > Generally, videos cannot be deleted if you do not have the required [permissions](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<vector<string>> forbiddenVideoIds_ {};
    shared_ptr<vector<string>> nonExistReferenceIds_ {};
    // The IDs of the videos that do not exist.
    // > If the list of videos to be deleted contains one or more videos that do not exist, the IDs of these non-existing videos are returned. If none of the videos in the list exists, a 404 error is returned.
    shared_ptr<vector<string>> nonExistVideoIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
