// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeLatestRecordSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestRecordSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestRecordSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    DescribeLatestRecordSchemaRequest() = default ;
    DescribeLatestRecordSchemaRequest(const DescribeLatestRecordSchemaRequest &) = default ;
    DescribeLatestRecordSchemaRequest(DescribeLatestRecordSchemaRequest &&) = default ;
    DescribeLatestRecordSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestRecordSchemaRequest() = default ;
    DescribeLatestRecordSchemaRequest& operator=(const DescribeLatestRecordSchemaRequest &) = default ;
    DescribeLatestRecordSchemaRequest& operator=(DescribeLatestRecordSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->playbookUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeLatestRecordSchemaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribeLatestRecordSchemaRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
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
