// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODYACCESSKEYLEAKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODYACCESSKEYLEAKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& obj) { 
      DARABONBA_PTR_TO_JSON(AccesskeyId, accesskeyId_);
      DARABONBA_PTR_TO_JSON(AliUserName, aliUserName_);
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(DealType, dealType_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccesskeyId, accesskeyId_);
      DARABONBA_PTR_FROM_JSON(AliUserName, aliUserName_);
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(DealType, dealType_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList() = default ;
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList(const DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList &) = default ;
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList(DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList &&) = default ;
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList() = default ;
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& operator=(const DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList &) = default ;
    DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& operator=(DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accesskeyId_ != nullptr
        && this->aliUserName_ != nullptr && this->asset_ != nullptr && this->dealTime_ != nullptr && this->dealType_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->url_ != nullptr && this->userType_ != nullptr; };
    // accesskeyId Field Functions 
    bool hasAccesskeyId() const { return this->accesskeyId_ != nullptr;};
    void deleteAccesskeyId() { this->accesskeyId_ = nullptr;};
    inline string accesskeyId() const { DARABONBA_PTR_GET_DEFAULT(accesskeyId_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setAccesskeyId(string accesskeyId) { DARABONBA_PTR_SET_VALUE(accesskeyId_, accesskeyId) };


    // aliUserName Field Functions 
    bool hasAliUserName() const { return this->aliUserName_ != nullptr;};
    void deleteAliUserName() { this->aliUserName_ = nullptr;};
    inline string aliUserName() const { DARABONBA_PTR_GET_DEFAULT(aliUserName_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setAliUserName(string aliUserName) { DARABONBA_PTR_SET_VALUE(aliUserName_, aliUserName) };


    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline string asset() const { DARABONBA_PTR_GET_DEFAULT(asset_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setAsset(string asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline string dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setDealTime(string dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // dealType Field Functions 
    bool hasDealType() const { return this->dealType_ != nullptr;};
    void deleteDealType() { this->dealType_ = nullptr;};
    inline string dealType() const { DARABONBA_PTR_GET_DEFAULT(dealType_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setDealType(string dealType) { DARABONBA_PTR_SET_VALUE(dealType_, dealType) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the AccessKey pair that is leaked.
    std::shared_ptr<string> accesskeyId_ = nullptr;
    // The name of the Alibaba Cloud account that is affected.
    std::shared_ptr<string> aliUserName_ = nullptr;
    // The platform to which the asset belongs. The value is fixed as **Cloud platform**.
    std::shared_ptr<string> asset_ = nullptr;
    // The time when the AccessKey pair leak is handled.
    std::shared_ptr<string> dealTime_ = nullptr;
    // The method to handle the AccessKey pair leak. Valid values:
    // 
    // *   **pending**: The AccessKey pair leak is unhandled.
    // *   **manual**: The AccessKey pair leak is manually handled.
    // *   **disable**: The AccessKey pair leak is disabled.
    // *   **add-whitelist**: The AccessKey pair leak is added to the whitelist.
    std::shared_ptr<string> dealType_ = nullptr;
    // The time when the AccessKey pair leak is first detected. The value of this parameter is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The primary key ID of the database.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the AccessKey pair leak is handled. Valid values:
    // 
    // *   **pending**: unhandled
    // *   **dealed**: handled
    std::shared_ptr<string> status_ = nullptr;
    // The type of the leak. The value is fixed as **AccessKey**.
    std::shared_ptr<string> type_ = nullptr;
    // The URL of the platform on which the AccessKey pair leak is detected.
    std::shared_ptr<string> url_ = nullptr;
    // The type of the account to which the leaked AccessKey pair belongs. Valid values:
    // 
    // *   **master**: Alibaba Cloud account
    // *   **ram**: RAM user
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
