// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERRORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(ClientTime, clientTime_);
      DARABONBA_PTR_TO_JSON(Did, did_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(ClientTime, clientTime_);
      DARABONBA_PTR_FROM_JSON(Did, did_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetErrorRequest() = default ;
    GetErrorRequest(const GetErrorRequest &) = default ;
    GetErrorRequest(GetErrorRequest &&) = default ;
    GetErrorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorRequest() = default ;
    GetErrorRequest& operator=(const GetErrorRequest &) = default ;
    GetErrorRequest& operator=(GetErrorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bizModule_ != nullptr && this->clientTime_ != nullptr && this->did_ != nullptr && this->digestHash_ != nullptr && this->force_ != nullptr
        && this->os_ != nullptr && this->uuid_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetErrorRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string bizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetErrorRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // clientTime Field Functions 
    bool hasClientTime() const { return this->clientTime_ != nullptr;};
    void deleteClientTime() { this->clientTime_ = nullptr;};
    inline int64_t clientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
    inline GetErrorRequest& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


    // did Field Functions 
    bool hasDid() const { return this->did_ != nullptr;};
    void deleteDid() { this->did_ = nullptr;};
    inline string did() const { DARABONBA_PTR_GET_DEFAULT(did_, "") };
    inline GetErrorRequest& setDid(string did) { DARABONBA_PTR_SET_VALUE(did_, did) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetErrorRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline GetErrorRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetErrorRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetErrorRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // appKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> bizModule_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> clientTime_ = nullptr;
    std::shared_ptr<string> did_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
