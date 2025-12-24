// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeDistinctReleasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistinctReleasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistinctReleasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
    };
    DescribeDistinctReleasesRequest() = default ;
    DescribeDistinctReleasesRequest(const DescribeDistinctReleasesRequest &) = default ;
    DescribeDistinctReleasesRequest(DescribeDistinctReleasesRequest &&) = default ;
    DescribeDistinctReleasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistinctReleasesRequest() = default ;
    DescribeDistinctReleasesRequest& operator=(const DescribeDistinctReleasesRequest &) = default ;
    DescribeDistinctReleasesRequest& operator=(DescribeDistinctReleasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->playbookUuid_ == nullptr && return this->taskflowMd5_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDistinctReleasesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribeDistinctReleasesRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribeDistinctReleasesRequest& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The MD5 value of the playbook XML configuration.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
