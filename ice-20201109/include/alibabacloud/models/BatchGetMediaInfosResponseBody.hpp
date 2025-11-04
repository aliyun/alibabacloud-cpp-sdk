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
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
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
    virtual bool empty() const override { return this->mediaInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<BatchGetMediaInfosResponseBodyMediaInfos> & mediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<BatchGetMediaInfosResponseBodyMediaInfos>) };
    inline vector<BatchGetMediaInfosResponseBodyMediaInfos> mediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<BatchGetMediaInfosResponseBodyMediaInfos>) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(const vector<BatchGetMediaInfosResponseBodyMediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(vector<BatchGetMediaInfosResponseBodyMediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetMediaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried media assets.
    std::shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfos>> mediaInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
