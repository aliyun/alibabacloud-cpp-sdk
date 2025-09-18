// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDMMAPPRESPONSEBODYPUBLISHEDVERSIONINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDMMAPPRESPONSEBODYPUBLISHEDVERSIONINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListPublishedMmAppResponseBodyPublishedVersionInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedMmAppResponseBodyPublishedVersionInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedMmAppResponseBodyPublishedVersionInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPublishedMmAppResponseBodyPublishedVersionInfoList() = default ;
    ListPublishedMmAppResponseBodyPublishedVersionInfoList(const ListPublishedMmAppResponseBodyPublishedVersionInfoList &) = default ;
    ListPublishedMmAppResponseBodyPublishedVersionInfoList(ListPublishedMmAppResponseBodyPublishedVersionInfoList &&) = default ;
    ListPublishedMmAppResponseBodyPublishedVersionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedMmAppResponseBodyPublishedVersionInfoList() = default ;
    ListPublishedMmAppResponseBodyPublishedVersionInfoList& operator=(const ListPublishedMmAppResponseBodyPublishedVersionInfoList &) = default ;
    ListPublishedMmAppResponseBodyPublishedVersionInfoList& operator=(ListPublishedMmAppResponseBodyPublishedVersionInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->createUserId_ != nullptr && this->createUserName_ != nullptr && this->description_ != nullptr && this->gmtCreate_ != nullptr
        && this->publishTime_ != nullptr && this->version_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListPublishedMmAppResponseBodyPublishedVersionInfoList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> publishTime_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
