// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTPLAYBOOKRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTPLAYBOOKRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RevertPlaybookReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertPlaybookReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsPublish, isPublish_);
      DARABONBA_PTR_TO_JSON(PlayReleaseId, playReleaseId_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, RevertPlaybookReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPublish, isPublish_);
      DARABONBA_PTR_FROM_JSON(PlayReleaseId, playReleaseId_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    RevertPlaybookReleaseRequest() = default ;
    RevertPlaybookReleaseRequest(const RevertPlaybookReleaseRequest &) = default ;
    RevertPlaybookReleaseRequest(RevertPlaybookReleaseRequest &&) = default ;
    RevertPlaybookReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertPlaybookReleaseRequest() = default ;
    RevertPlaybookReleaseRequest& operator=(const RevertPlaybookReleaseRequest &) = default ;
    RevertPlaybookReleaseRequest& operator=(RevertPlaybookReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isPublish_ == nullptr
        && return this->playReleaseId_ == nullptr && return this->playbookUuid_ == nullptr; };
    // isPublish Field Functions 
    bool hasIsPublish() const { return this->isPublish_ != nullptr;};
    void deleteIsPublish() { this->isPublish_ = nullptr;};
    inline bool isPublish() const { DARABONBA_PTR_GET_DEFAULT(isPublish_, false) };
    inline RevertPlaybookReleaseRequest& setIsPublish(bool isPublish) { DARABONBA_PTR_SET_VALUE(isPublish_, isPublish) };


    // playReleaseId Field Functions 
    bool hasPlayReleaseId() const { return this->playReleaseId_ != nullptr;};
    void deletePlayReleaseId() { this->playReleaseId_ = nullptr;};
    inline int32_t playReleaseId() const { DARABONBA_PTR_GET_DEFAULT(playReleaseId_, 0) };
    inline RevertPlaybookReleaseRequest& setPlayReleaseId(int32_t playReleaseId) { DARABONBA_PTR_SET_VALUE(playReleaseId_, playReleaseId) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RevertPlaybookReleaseRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // Specifies whether to directly publish the new playbook after the rollback.
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> isPublish_ = nullptr;
    // The version of the playbook that you want to publish.
    // 
    // >  You can call the [DescribePlaybookReleases](~~DescribePlaybookReleases~~) operation to query the playbook version.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> playReleaseId_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
