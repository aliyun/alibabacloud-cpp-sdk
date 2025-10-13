// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BuildPackageUrl, buildPackageUrl_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildPackageUrl, buildPackageUrl_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
    };
    ListAppVersionsResponseBodyData() = default ;
    ListAppVersionsResponseBodyData(const ListAppVersionsResponseBodyData &) = default ;
    ListAppVersionsResponseBodyData(ListAppVersionsResponseBodyData &&) = default ;
    ListAppVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppVersionsResponseBodyData() = default ;
    ListAppVersionsResponseBodyData& operator=(const ListAppVersionsResponseBodyData &) = default ;
    ListAppVersionsResponseBodyData& operator=(ListAppVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildPackageUrl_ == nullptr
        && return this->createTime_ == nullptr && return this->id_ == nullptr && return this->type_ == nullptr && return this->warUrl_ == nullptr; };
    // buildPackageUrl Field Functions 
    bool hasBuildPackageUrl() const { return this->buildPackageUrl_ != nullptr;};
    void deleteBuildPackageUrl() { this->buildPackageUrl_ = nullptr;};
    inline string buildPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(buildPackageUrl_, "") };
    inline ListAppVersionsResponseBodyData& setBuildPackageUrl(string buildPackageUrl) { DARABONBA_PTR_SET_VALUE(buildPackageUrl_, buildPackageUrl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAppVersionsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAppVersionsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAppVersionsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // warUrl Field Functions 
    bool hasWarUrl() const { return this->warUrl_ != nullptr;};
    void deleteWarUrl() { this->warUrl_ = nullptr;};
    inline string warUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
    inline ListAppVersionsResponseBodyData& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


  protected:
    // The URL of the code package. If you use the SAE console to upload the code package, take note of the following items:
    // 
    // *   You cannot download the URL. You must call the GetPackageVersionAccessableUrl operation to obtain the URL. The obtained URL is valid for 10 minutes.
    // *   SAE can retain the package up to 90 days. After 90 days, the URL cannot be returned or downloaded.
    std::shared_ptr<string> buildPackageUrl_ = nullptr;
    // The download link of the WAR or JAR package. This parameter is returned when the **Type** parameter is set to **url**.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    std::shared_ptr<string> id_ = nullptr;
    // The deployment method of the application. Valid values:
    // 
    // *   **image**: indicates that the application is deployed by using an image.
    // *   **url**: indicates that the application is deployed by using a code package.
    std::shared_ptr<string> type_ = nullptr;
    // The URL of the image.
    std::shared_ptr<string> warUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
