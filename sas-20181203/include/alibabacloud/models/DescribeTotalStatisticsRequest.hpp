// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOTALSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOTALSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTotalStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTotalStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTotalStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeTotalStatisticsRequest() = default ;
    DescribeTotalStatisticsRequest(const DescribeTotalStatisticsRequest &) = default ;
    DescribeTotalStatisticsRequest(DescribeTotalStatisticsRequest &&) = default ;
    DescribeTotalStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTotalStatisticsRequest() = default ;
    DescribeTotalStatisticsRequest& operator=(const DescribeTotalStatisticsRequest &) = default ;
    DescribeTotalStatisticsRequest& operator=(DescribeTotalStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->groupId_ == nullptr && this->remark_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeTotalStatisticsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeTotalStatisticsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeTotalStatisticsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The source of data. Default value: **aqs**. Valid values:
    // 
    // *   **sas**: Security Center
    // *   **aqs**: Server Guard
    shared_ptr<string> from_ {};
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](https://help.aliyun.com/document_detail/130972.html) operation to query the IDs of asset groups.
    shared_ptr<int64_t> groupId_ {};
    // The name or public IP address of the asset.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
