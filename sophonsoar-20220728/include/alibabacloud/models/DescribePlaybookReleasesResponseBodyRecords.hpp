// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookReleasesResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookReleasesResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookReleasesResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
    };
    DescribePlaybookReleasesResponseBodyRecords() = default ;
    DescribePlaybookReleasesResponseBodyRecords(const DescribePlaybookReleasesResponseBodyRecords &) = default ;
    DescribePlaybookReleasesResponseBodyRecords(DescribePlaybookReleasesResponseBodyRecords &&) = default ;
    DescribePlaybookReleasesResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookReleasesResponseBodyRecords() = default ;
    DescribePlaybookReleasesResponseBodyRecords& operator=(const DescribePlaybookReleasesResponseBodyRecords &) = default ;
    DescribePlaybookReleasesResponseBodyRecords& operator=(DescribePlaybookReleasesResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->taskflowMd5_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribePlaybookReleasesResponseBodyRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePlaybookReleasesResponseBodyRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribePlaybookReleasesResponseBodyRecords& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribePlaybookReleasesResponseBodyRecords& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribePlaybookReleasesResponseBodyRecords& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribePlaybookReleasesResponseBodyRecords& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


  protected:
    // The ID of the Alibaba Cloud account that is used to publish the version.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the layer version.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the version was created. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the version was modified. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The record ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The MD5 value configured for the published version of the playbook.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
