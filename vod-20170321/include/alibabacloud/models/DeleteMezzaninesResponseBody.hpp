// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEZZANINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEZZANINESRESPONSEBODY_HPP_
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
  class DeleteMezzaninesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMezzaninesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnRemoveableVideoIds, unRemoveableVideoIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMezzaninesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnRemoveableVideoIds, unRemoveableVideoIds_);
    };
    DeleteMezzaninesResponseBody() = default ;
    DeleteMezzaninesResponseBody(const DeleteMezzaninesResponseBody &) = default ;
    DeleteMezzaninesResponseBody(DeleteMezzaninesResponseBody &&) = default ;
    DeleteMezzaninesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMezzaninesResponseBody() = default ;
    DeleteMezzaninesResponseBody& operator=(const DeleteMezzaninesResponseBody &) = default ;
    DeleteMezzaninesResponseBody& operator=(DeleteMezzaninesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistReferenceIds_ == nullptr
        && return this->nonExistVideoIds_ == nullptr && return this->requestId_ == nullptr && return this->unRemoveableVideoIds_ == nullptr; };
    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & nonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> nonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline DeleteMezzaninesResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline DeleteMezzaninesResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & nonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> nonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline DeleteMezzaninesResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline DeleteMezzaninesResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMezzaninesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unRemoveableVideoIds Field Functions 
    bool hasUnRemoveableVideoIds() const { return this->unRemoveableVideoIds_ != nullptr;};
    void deleteUnRemoveableVideoIds() { this->unRemoveableVideoIds_ = nullptr;};
    inline const vector<string> & unRemoveableVideoIds() const { DARABONBA_PTR_GET_CONST(unRemoveableVideoIds_, vector<string>) };
    inline vector<string> unRemoveableVideoIds() { DARABONBA_PTR_GET(unRemoveableVideoIds_, vector<string>) };
    inline DeleteMezzaninesResponseBody& setUnRemoveableVideoIds(const vector<string> & unRemoveableVideoIds) { DARABONBA_PTR_SET_VALUE(unRemoveableVideoIds_, unRemoveableVideoIds) };
    inline DeleteMezzaninesResponseBody& setUnRemoveableVideoIds(vector<string> && unRemoveableVideoIds) { DARABONBA_PTR_SET_RVALUE(unRemoveableVideoIds_, unRemoveableVideoIds) };


  protected:
    std::shared_ptr<vector<string>> nonExistReferenceIds_ = nullptr;
    // The IDs of the audio or video files that do not exist.
    std::shared_ptr<vector<string>> nonExistVideoIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the audio or video files whose source files cannot be deleted.
    // 
    // >  In most cases, source files cannot be deleted if they are used for original-quality playback or you do not have required permissions to delete them. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<vector<string>> unRemoveableVideoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
