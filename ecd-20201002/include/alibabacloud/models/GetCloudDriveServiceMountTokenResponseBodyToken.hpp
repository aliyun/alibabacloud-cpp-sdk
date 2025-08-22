// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODYTOKEN_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODYTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetCloudDriveServiceMountTokenResponseBodyToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudDriveServiceMountTokenResponseBodyToken& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(ExpiredAfter, expiredAfter_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudDriveServiceMountTokenResponseBodyToken& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(ExpiredAfter, expiredAfter_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
    };
    GetCloudDriveServiceMountTokenResponseBodyToken() = default ;
    GetCloudDriveServiceMountTokenResponseBodyToken(const GetCloudDriveServiceMountTokenResponseBodyToken &) = default ;
    GetCloudDriveServiceMountTokenResponseBodyToken(GetCloudDriveServiceMountTokenResponseBodyToken &&) = default ;
    GetCloudDriveServiceMountTokenResponseBodyToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudDriveServiceMountTokenResponseBodyToken() = default ;
    GetCloudDriveServiceMountTokenResponseBodyToken& operator=(const GetCloudDriveServiceMountTokenResponseBodyToken &) = default ;
    GetCloudDriveServiceMountTokenResponseBodyToken& operator=(GetCloudDriveServiceMountTokenResponseBodyToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainId_ != nullptr
        && this->expiredAfter_ != nullptr && this->status_ != nullptr && this->token_ != nullptr && this->totalSize_ != nullptr && this->usedSize_ != nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // expiredAfter Field Functions 
    bool hasExpiredAfter() const { return this->expiredAfter_ != nullptr;};
    void deleteExpiredAfter() { this->expiredAfter_ = nullptr;};
    inline string expiredAfter() const { DARABONBA_PTR_GET_DEFAULT(expiredAfter_, "") };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setExpiredAfter(string expiredAfter) { DARABONBA_PTR_SET_VALUE(expiredAfter_, expiredAfter) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // usedSize Field Functions 
    bool hasUsedSize() const { return this->usedSize_ != nullptr;};
    void deleteUsedSize() { this->usedSize_ = nullptr;};
    inline int64_t usedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
    inline GetCloudDriveServiceMountTokenResponseBodyToken& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


  protected:
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<string> expiredAfter_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    std::shared_ptr<int64_t> usedSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
