// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOTALSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOTALSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTotalStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTotalStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_TO_JSON(TranscodeDuration, transcodeDuration_);
    };
    friend void from_json(const Darabonba::Json& j, GetTotalStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_FROM_JSON(TranscodeDuration, transcodeDuration_);
    };
    GetTotalStatisResponseBody() = default ;
    GetTotalStatisResponseBody(const GetTotalStatisResponseBody &) = default ;
    GetTotalStatisResponseBody(GetTotalStatisResponseBody &&) = default ;
    GetTotalStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTotalStatisResponseBody() = default ;
    GetTotalStatisResponseBody& operator=(const GetTotalStatisResponseBody &) = default ;
    GetTotalStatisResponseBody& operator=(GetTotalStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkOut_ != nullptr
        && this->requestId_ != nullptr && this->storageUtilization_ != nullptr && this->transcodeDuration_ != nullptr; };
    // networkOut Field Functions 
    bool hasNetworkOut() const { return this->networkOut_ != nullptr;};
    void deleteNetworkOut() { this->networkOut_ = nullptr;};
    inline int64_t networkOut() const { DARABONBA_PTR_GET_DEFAULT(networkOut_, 0L) };
    inline GetTotalStatisResponseBody& setNetworkOut(int64_t networkOut) { DARABONBA_PTR_SET_VALUE(networkOut_, networkOut) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTotalStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageUtilization Field Functions 
    bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
    void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
    inline int64_t storageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, 0L) };
    inline GetTotalStatisResponseBody& setStorageUtilization(int64_t storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


    // transcodeDuration Field Functions 
    bool hasTranscodeDuration() const { return this->transcodeDuration_ != nullptr;};
    void deleteTranscodeDuration() { this->transcodeDuration_ = nullptr;};
    inline int64_t transcodeDuration() const { DARABONBA_PTR_GET_DEFAULT(transcodeDuration_, 0L) };
    inline GetTotalStatisResponseBody& setTranscodeDuration(int64_t transcodeDuration) { DARABONBA_PTR_SET_VALUE(transcodeDuration_, transcodeDuration) };


  protected:
    std::shared_ptr<int64_t> networkOut_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> storageUtilization_ = nullptr;
    std::shared_ptr<int64_t> transcodeDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
