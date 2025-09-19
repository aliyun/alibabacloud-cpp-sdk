// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPICIOUSSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPICIOUSSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSuspiciousStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspiciousStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspiciousStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    GetSuspiciousStatisticsRequest() = default ;
    GetSuspiciousStatisticsRequest(const GetSuspiciousStatisticsRequest &) = default ;
    GetSuspiciousStatisticsRequest(GetSuspiciousStatisticsRequest &&) = default ;
    GetSuspiciousStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspiciousStatisticsRequest() = default ;
    GetSuspiciousStatisticsRequest& operator=(const GetSuspiciousStatisticsRequest &) = default ;
    GetSuspiciousStatisticsRequest& operator=(GetSuspiciousStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupIdList_ != nullptr
        && this->sourceIp_ != nullptr; };
    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline string groupIdList() const { DARABONBA_PTR_GET_DEFAULT(groupIdList_, "") };
    inline GetSuspiciousStatisticsRequest& setGroupIdList(string groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GetSuspiciousStatisticsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the asset group. Separate multiple IDs with commas (,).
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupIdList_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
