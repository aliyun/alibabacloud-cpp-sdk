// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchGetMediaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetMediaInfosResponseBody() = default ;
    BatchGetMediaInfosResponseBody(const BatchGetMediaInfosResponseBody &) = default ;
    BatchGetMediaInfosResponseBody(BatchGetMediaInfosResponseBody &&) = default ;
    BatchGetMediaInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBody() = default ;
    BatchGetMediaInfosResponseBody& operator=(const BatchGetMediaInfosResponseBody &) = default ;
    BatchGetMediaInfosResponseBody& operator=(BatchGetMediaInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenMediaIds_ == nullptr
        && return this->mediaInfos_ == nullptr && return this->nonExistMediaIds_ == nullptr && return this->nonExistReferenceIds_ == nullptr && return this->requestId_ == nullptr; };
    // forbiddenMediaIds Field Functions 
    bool hasForbiddenMediaIds() const { return this->forbiddenMediaIds_ != nullptr;};
    void deleteForbiddenMediaIds() { this->forbiddenMediaIds_ = nullptr;};
    inline const vector<string> & forbiddenMediaIds() const { DARABONBA_PTR_GET_CONST(forbiddenMediaIds_, vector<string>) };
    inline vector<string> forbiddenMediaIds() { DARABONBA_PTR_GET(forbiddenMediaIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setForbiddenMediaIds(const vector<string> & forbiddenMediaIds) { DARABONBA_PTR_SET_VALUE(forbiddenMediaIds_, forbiddenMediaIds) };
    inline BatchGetMediaInfosResponseBody& setForbiddenMediaIds(vector<string> && forbiddenMediaIds) { DARABONBA_PTR_SET_RVALUE(forbiddenMediaIds_, forbiddenMediaIds) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<BatchGetMediaInfosResponseBodyMediaInfos> & mediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<BatchGetMediaInfosResponseBodyMediaInfos>) };
    inline vector<BatchGetMediaInfosResponseBodyMediaInfos> mediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<BatchGetMediaInfosResponseBodyMediaInfos>) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(const vector<BatchGetMediaInfosResponseBodyMediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(vector<BatchGetMediaInfosResponseBodyMediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & nonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> nonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline BatchGetMediaInfosResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & nonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> nonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline BatchGetMediaInfosResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetMediaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the media assets that do not support the operation typically because you are not authorized to perform the operation. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<vector<string>> forbiddenMediaIds_ = nullptr;
    // Details about media assets.
    std::shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfos>> mediaInfos_ = nullptr;
    // The IDs of the media assets that do not exist.
    std::shared_ptr<vector<string>> nonExistMediaIds_ = nullptr;
    std::shared_ptr<vector<string>> nonExistReferenceIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
