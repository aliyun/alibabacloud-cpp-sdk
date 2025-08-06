// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUCKETREDUNDANCYTRANSITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUCKETREDUNDANCYTRANSITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListBucketRedundancyTransitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBucketRedundancyTransitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RedundancyTransitionInfo, redundancyTransitionInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageRedundancyType, storageRedundancyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListBucketRedundancyTransitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RedundancyTransitionInfo, redundancyTransitionInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageRedundancyType, storageRedundancyType_);
    };
    ListBucketRedundancyTransitionResponseBody() = default ;
    ListBucketRedundancyTransitionResponseBody(const ListBucketRedundancyTransitionResponseBody &) = default ;
    ListBucketRedundancyTransitionResponseBody(ListBucketRedundancyTransitionResponseBody &&) = default ;
    ListBucketRedundancyTransitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBucketRedundancyTransitionResponseBody() = default ;
    ListBucketRedundancyTransitionResponseBody& operator=(const ListBucketRedundancyTransitionResponseBody &) = default ;
    ListBucketRedundancyTransitionResponseBody& operator=(ListBucketRedundancyTransitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->redundancyTransitionInfo_ != nullptr
        && this->requestId_ != nullptr && this->storageRedundancyType_ != nullptr; };
    // redundancyTransitionInfo Field Functions 
    bool hasRedundancyTransitionInfo() const { return this->redundancyTransitionInfo_ != nullptr;};
    void deleteRedundancyTransitionInfo() { this->redundancyTransitionInfo_ = nullptr;};
    inline const ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo & redundancyTransitionInfo() const { DARABONBA_PTR_GET_CONST(redundancyTransitionInfo_, ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo) };
    inline ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo redundancyTransitionInfo() { DARABONBA_PTR_GET(redundancyTransitionInfo_, ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo) };
    inline ListBucketRedundancyTransitionResponseBody& setRedundancyTransitionInfo(const ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo & redundancyTransitionInfo) { DARABONBA_PTR_SET_VALUE(redundancyTransitionInfo_, redundancyTransitionInfo) };
    inline ListBucketRedundancyTransitionResponseBody& setRedundancyTransitionInfo(ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo && redundancyTransitionInfo) { DARABONBA_PTR_SET_RVALUE(redundancyTransitionInfo_, redundancyTransitionInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBucketRedundancyTransitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageRedundancyType Field Functions 
    bool hasStorageRedundancyType() const { return this->storageRedundancyType_ != nullptr;};
    void deleteStorageRedundancyType() { this->storageRedundancyType_ = nullptr;};
    inline string storageRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(storageRedundancyType_, "") };
    inline ListBucketRedundancyTransitionResponseBody& setStorageRedundancyType(string storageRedundancyType) { DARABONBA_PTR_SET_VALUE(storageRedundancyType_, storageRedundancyType) };


  protected:
    std::shared_ptr<ListBucketRedundancyTransitionResponseBodyRedundancyTransitionInfo> redundancyTransitionInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> storageRedundancyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
