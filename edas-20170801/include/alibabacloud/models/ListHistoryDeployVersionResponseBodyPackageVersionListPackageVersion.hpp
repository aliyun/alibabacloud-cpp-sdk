// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODYPACKAGEVERSIONLISTPACKAGEVERSION_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODYPACKAGEVERSIONLISTPACKAGEVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
    };
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion() = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion(const ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion &) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion(ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion &&) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion() = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& operator=(const ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion &) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& operator=(ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->packageVersion_ == nullptr && return this->publicUrl_ == nullptr
        && return this->type_ == nullptr && return this->updateTime_ == nullptr && return this->warUrl_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string publicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // warUrl Field Functions 
    bool hasWarUrl() const { return this->warUrl_ != nullptr;};
    void deleteWarUrl() { this->warUrl_ = nullptr;};
    inline string warUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
    inline ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the deployment package was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> description_ = nullptr;
    // The unique ID of the deployment package.
    std::shared_ptr<string> id_ = nullptr;
    // The version of the application that was released by using the deployment package. This version can be used to call the RollbackApplication operation.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The URL of the deployment package.
    std::shared_ptr<string> publicUrl_ = nullptr;
    // The deployment mode of the application. Valid values:
    // 
    // *   url: The application is deployed by using a JAR or WAR package.
    // *   image: The application is deployed by using an image.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the deployment package was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The URL of the deployment package.
    std::shared_ptr<string> warUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
