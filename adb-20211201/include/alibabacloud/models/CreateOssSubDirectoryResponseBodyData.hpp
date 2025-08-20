// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSSUBDIRECTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSSUBDIRECTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateOssSubDirectoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssSubDirectoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClientCRC, clientCRC_);
      DARABONBA_PTR_TO_JSON(ETag, ETag_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerCRC, serverCRC_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssSubDirectoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientCRC, clientCRC_);
      DARABONBA_PTR_FROM_JSON(ETag, ETag_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerCRC, serverCRC_);
    };
    CreateOssSubDirectoryResponseBodyData() = default ;
    CreateOssSubDirectoryResponseBodyData(const CreateOssSubDirectoryResponseBodyData &) = default ;
    CreateOssSubDirectoryResponseBodyData(CreateOssSubDirectoryResponseBodyData &&) = default ;
    CreateOssSubDirectoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssSubDirectoryResponseBodyData() = default ;
    CreateOssSubDirectoryResponseBodyData& operator=(const CreateOssSubDirectoryResponseBodyData &) = default ;
    CreateOssSubDirectoryResponseBodyData& operator=(CreateOssSubDirectoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientCRC_ != nullptr
        && this->ETag_ != nullptr && this->requestId_ != nullptr && this->serverCRC_ != nullptr; };
    // clientCRC Field Functions 
    bool hasClientCRC() const { return this->clientCRC_ != nullptr;};
    void deleteClientCRC() { this->clientCRC_ = nullptr;};
    inline int64_t clientCRC() const { DARABONBA_PTR_GET_DEFAULT(clientCRC_, 0L) };
    inline CreateOssSubDirectoryResponseBodyData& setClientCRC(int64_t clientCRC) { DARABONBA_PTR_SET_VALUE(clientCRC_, clientCRC) };


    // ETag Field Functions 
    bool hasETag() const { return this->ETag_ != nullptr;};
    void deleteETag() { this->ETag_ = nullptr;};
    inline string ETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
    inline CreateOssSubDirectoryResponseBodyData& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOssSubDirectoryResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverCRC Field Functions 
    bool hasServerCRC() const { return this->serverCRC_ != nullptr;};
    void deleteServerCRC() { this->serverCRC_ = nullptr;};
    inline int64_t serverCRC() const { DARABONBA_PTR_GET_DEFAULT(serverCRC_, 0L) };
    inline CreateOssSubDirectoryResponseBodyData& setServerCRC(int64_t serverCRC) { DARABONBA_PTR_SET_VALUE(serverCRC_, serverCRC) };


  protected:
    // The cyclic redundancy check (CRC) value on the client.
    std::shared_ptr<int64_t> clientCRC_ = nullptr;
    // The tag of the OSS path.
    std::shared_ptr<string> ETag_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CRC-64 value on the OSS bucket.
    std::shared_ptr<int64_t> serverCRC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
