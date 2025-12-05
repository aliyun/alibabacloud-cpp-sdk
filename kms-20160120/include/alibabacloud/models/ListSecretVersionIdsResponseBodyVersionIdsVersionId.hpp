// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODYVERSIONIDSVERSIONID_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODYVERSIONIDSVERSIONID_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretVersionIdsResponseBodyVersionIdsVersionId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretVersionIdsResponseBodyVersionIdsVersionId& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretVersionIdsResponseBodyVersionIdsVersionId& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
    };
    ListSecretVersionIdsResponseBodyVersionIdsVersionId() = default ;
    ListSecretVersionIdsResponseBodyVersionIdsVersionId(const ListSecretVersionIdsResponseBodyVersionIdsVersionId &) = default ;
    ListSecretVersionIdsResponseBodyVersionIdsVersionId(ListSecretVersionIdsResponseBodyVersionIdsVersionId &&) = default ;
    ListSecretVersionIdsResponseBodyVersionIdsVersionId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretVersionIdsResponseBodyVersionIdsVersionId() = default ;
    ListSecretVersionIdsResponseBodyVersionIdsVersionId& operator=(const ListSecretVersionIdsResponseBodyVersionIdsVersionId &) = default ;
    ListSecretVersionIdsResponseBodyVersionIdsVersionId& operator=(ListSecretVersionIdsResponseBodyVersionIdsVersionId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->versionId_ == nullptr && return this->versionStages_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSecretVersionIdsResponseBodyVersionIdsVersionId& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListSecretVersionIdsResponseBodyVersionIdsVersionId& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline const Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages & versionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages) };
    inline Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages versionStages() { DARABONBA_PTR_GET(versionStages_, Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages) };
    inline ListSecretVersionIdsResponseBodyVersionIdsVersionId& setVersionStages(const Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
    inline ListSecretVersionIdsResponseBodyVersionIdsVersionId& setVersionStages(Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


  protected:
    // The time when the secret version was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The version number.
    std::shared_ptr<string> versionId_ = nullptr;
    // The stage labels that mark the secret version.
    std::shared_ptr<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages> versionStages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
