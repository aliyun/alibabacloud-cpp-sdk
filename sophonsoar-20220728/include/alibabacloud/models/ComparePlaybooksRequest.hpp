// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ComparePlaybooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComparePlaybooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewPlaybookReleaseId, newPlaybookReleaseId_);
      DARABONBA_PTR_TO_JSON(OldPlaybookReleaseId, oldPlaybookReleaseId_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, ComparePlaybooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewPlaybookReleaseId, newPlaybookReleaseId_);
      DARABONBA_PTR_FROM_JSON(OldPlaybookReleaseId, oldPlaybookReleaseId_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    ComparePlaybooksRequest() = default ;
    ComparePlaybooksRequest(const ComparePlaybooksRequest &) = default ;
    ComparePlaybooksRequest(ComparePlaybooksRequest &&) = default ;
    ComparePlaybooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComparePlaybooksRequest() = default ;
    ComparePlaybooksRequest& operator=(const ComparePlaybooksRequest &) = default ;
    ComparePlaybooksRequest& operator=(ComparePlaybooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->newPlaybookReleaseId_ == nullptr && return this->oldPlaybookReleaseId_ == nullptr && return this->playbookUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ComparePlaybooksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newPlaybookReleaseId Field Functions 
    bool hasNewPlaybookReleaseId() const { return this->newPlaybookReleaseId_ != nullptr;};
    void deleteNewPlaybookReleaseId() { this->newPlaybookReleaseId_ = nullptr;};
    inline int32_t newPlaybookReleaseId() const { DARABONBA_PTR_GET_DEFAULT(newPlaybookReleaseId_, 0) };
    inline ComparePlaybooksRequest& setNewPlaybookReleaseId(int32_t newPlaybookReleaseId) { DARABONBA_PTR_SET_VALUE(newPlaybookReleaseId_, newPlaybookReleaseId) };


    // oldPlaybookReleaseId Field Functions 
    bool hasOldPlaybookReleaseId() const { return this->oldPlaybookReleaseId_ != nullptr;};
    void deleteOldPlaybookReleaseId() { this->oldPlaybookReleaseId_ = nullptr;};
    inline int32_t oldPlaybookReleaseId() const { DARABONBA_PTR_GET_DEFAULT(oldPlaybookReleaseId_, 0) };
    inline ComparePlaybooksRequest& setOldPlaybookReleaseId(int32_t oldPlaybookReleaseId) { DARABONBA_PTR_SET_VALUE(oldPlaybookReleaseId_, oldPlaybookReleaseId) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ComparePlaybooksRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the second version.
    // 
    // >  You can call the [DescribePlaybookReleases](~~DescribePlaybookReleases~~) operation to query the IDs of versions. The system automatically generates IDs for new versions.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> newPlaybookReleaseId_ = nullptr;
    // The ID of the first version.
    // 
    // >  You can call the [DescribePlaybookReleases](~~DescribePlaybookReleases~~) operation to query the IDs of versions. The system automatically generates IDs for new versions.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> oldPlaybookReleaseId_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the UUIDs of playbooks.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
