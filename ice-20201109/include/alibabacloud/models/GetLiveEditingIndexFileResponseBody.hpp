// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGINDEXFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGINDEXFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingIndexFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingIndexFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IndexFile, indexFile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingIndexFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexFile, indexFile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveEditingIndexFileResponseBody() = default ;
    GetLiveEditingIndexFileResponseBody(const GetLiveEditingIndexFileResponseBody &) = default ;
    GetLiveEditingIndexFileResponseBody(GetLiveEditingIndexFileResponseBody &&) = default ;
    GetLiveEditingIndexFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingIndexFileResponseBody() = default ;
    GetLiveEditingIndexFileResponseBody& operator=(const GetLiveEditingIndexFileResponseBody &) = default ;
    GetLiveEditingIndexFileResponseBody& operator=(GetLiveEditingIndexFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexFile_ != nullptr
        && this->requestId_ != nullptr; };
    // indexFile Field Functions 
    bool hasIndexFile() const { return this->indexFile_ != nullptr;};
    void deleteIndexFile() { this->indexFile_ = nullptr;};
    inline string indexFile() const { DARABONBA_PTR_GET_DEFAULT(indexFile_, "") };
    inline GetLiveEditingIndexFileResponseBody& setIndexFile(string indexFile) { DARABONBA_PTR_SET_VALUE(indexFile_, indexFile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveEditingIndexFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URL of the index file.
    std::shared_ptr<string> indexFile_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
