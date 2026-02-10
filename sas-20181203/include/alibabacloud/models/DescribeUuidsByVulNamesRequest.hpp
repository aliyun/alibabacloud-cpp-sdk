// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUuidsByVulNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUuidsByVulNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcInstanceIds, vpcInstanceIds_);
      DARABONBA_PTR_TO_JSON(VulNames, vulNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUuidsByVulNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceIds, vpcInstanceIds_);
      DARABONBA_PTR_FROM_JSON(VulNames, vulNames_);
    };
    DescribeUuidsByVulNamesRequest() = default ;
    DescribeUuidsByVulNamesRequest(const DescribeUuidsByVulNamesRequest &) = default ;
    DescribeUuidsByVulNamesRequest(DescribeUuidsByVulNamesRequest &&) = default ;
    DescribeUuidsByVulNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUuidsByVulNamesRequest() = default ;
    DescribeUuidsByVulNamesRequest& operator=(const DescribeUuidsByVulNamesRequest &) = default ;
    DescribeUuidsByVulNamesRequest& operator=(DescribeUuidsByVulNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealed_ == nullptr
        && this->fieldName_ == nullptr && this->fieldValue_ == nullptr && this->groupId_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr
        && this->necessity_ == nullptr && this->remark_ == nullptr && this->searchTags_ == nullptr && this->statusList_ == nullptr && this->tag_ == nullptr
        && this->targetType_ == nullptr && this->type_ == nullptr && this->vpcInstanceIds_ == nullptr && this->vulNames_ == nullptr; };
    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeUuidsByVulNamesRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeUuidsByVulNamesRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeUuidsByVulNamesRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeUuidsByVulNamesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeUuidsByVulNamesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeUuidsByVulNamesRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeUuidsByVulNamesRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeUuidsByVulNamesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // searchTags Field Functions 
    bool hasSearchTags() const { return this->searchTags_ != nullptr;};
    void deleteSearchTags() { this->searchTags_ = nullptr;};
    inline string getSearchTags() const { DARABONBA_PTR_GET_DEFAULT(searchTags_, "") };
    inline DescribeUuidsByVulNamesRequest& setSearchTags(string searchTags) { DARABONBA_PTR_SET_VALUE(searchTags_, searchTags) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string getStatusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline DescribeUuidsByVulNamesRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeUuidsByVulNamesRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeUuidsByVulNamesRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeUuidsByVulNamesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcInstanceIds Field Functions 
    bool hasVpcInstanceIds() const { return this->vpcInstanceIds_ != nullptr;};
    void deleteVpcInstanceIds() { this->vpcInstanceIds_ = nullptr;};
    inline string getVpcInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceIds_, "") };
    inline DescribeUuidsByVulNamesRequest& setVpcInstanceIds(string vpcInstanceIds) { DARABONBA_PTR_SET_VALUE(vpcInstanceIds_, vpcInstanceIds) };


    // vulNames Field Functions 
    bool hasVulNames() const { return this->vulNames_ != nullptr;};
    void deleteVulNames() { this->vulNames_ = nullptr;};
    inline const vector<string> & getVulNames() const { DARABONBA_PTR_GET_CONST(vulNames_, vector<string>) };
    inline vector<string> getVulNames() { DARABONBA_PTR_GET(vulNames_, vector<string>) };
    inline DescribeUuidsByVulNamesRequest& setVulNames(const vector<string> & vulNames) { DARABONBA_PTR_SET_VALUE(vulNames_, vulNames) };
    inline DescribeUuidsByVulNamesRequest& setVulNames(vector<string> && vulNames) { DARABONBA_PTR_SET_RVALUE(vulNames_, vulNames) };


  protected:
    // Specifies whether the vulnerability is fixed. Valid values:
    // 
    // *   **y**: the vulnerability is fixed.
    // *   **n**: the vulnerability is not fixed.
    shared_ptr<string> dealed_ {};
    // The name of the search field that is used to query containers.
    shared_ptr<string> fieldName_ {};
    // The value of the search field that is used to query containers.
    shared_ptr<string> fieldValue_ {};
    // The ID of the asset group.
    shared_ptr<int64_t> groupId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The severity of the vulnerability. Separate multiple severities with commas (,). Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> level_ {};
    // The priority based on which the vulnerability is fixed. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    shared_ptr<string> necessity_ {};
    // The remarks for the asset affected by the vulnerability. The value can be the private IP address, public IP address, or name of the asset. Fuzzy match is supported.
    shared_ptr<string> remark_ {};
    // The tags that are used to search for the vulnerability.
    shared_ptr<string> searchTags_ {};
    // The status of the vulnerability. Separate multiple states with commas (,). Valid values:
    // 
    // *   **1**: unfixed
    // *   **2**: fix failed
    shared_ptr<string> statusList_ {};
    // The tag of the vulnerability.
    shared_ptr<string> tag_ {};
    // The type of the query condition. Valid values:
    // 
    // *   **containerId**: the ID of the container
    // *   **uuid**: the ID of the asset
    shared_ptr<string> targetType_ {};
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The ID of the virtual private cloud (VPC) in which the vulnerability is detected. Separate multiple IDs with commas (,).
    shared_ptr<string> vpcInstanceIds_ {};
    // An array that consists of the names of vulnerabilities.
    // 
    // >  You can call the [DescribeGroupedVul](~~DescribeGroupedVul~~) operation to obtain the names of vulnerabilities.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> vulNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
