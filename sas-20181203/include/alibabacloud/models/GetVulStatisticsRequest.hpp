// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVULSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    GetVulStatisticsRequest() = default ;
    GetVulStatisticsRequest(const GetVulStatisticsRequest &) = default ;
    GetVulStatisticsRequest(GetVulStatisticsRequest &&) = default ;
    GetVulStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulStatisticsRequest() = default ;
    GetVulStatisticsRequest& operator=(const GetVulStatisticsRequest &) = default ;
    GetVulStatisticsRequest& operator=(GetVulStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIdList_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr && return this->sourceIp_ == nullptr && return this->typeList_ == nullptr; };
    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline string groupIdList() const { DARABONBA_PTR_GET_DEFAULT(groupIdList_, "") };
    inline GetVulStatisticsRequest& setGroupIdList(string groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetVulStatisticsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GetVulStatisticsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline string typeList() const { DARABONBA_PTR_GET_DEFAULT(typeList_, "") };
    inline GetVulStatisticsRequest& setTypeList(string typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };


  protected:
    // The ID of the asset group. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupIdList_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the vulnerability whose statistics you want to query. Separate multiple types with commas (,). Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **emg**: urgent vulnerability
    // *   **app**: vulnerability detected by using a web scanner
    // *   **sca**: vulnerability detected based on software component analysis
    // 
    // This parameter is required.
    std::shared_ptr<string> typeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
