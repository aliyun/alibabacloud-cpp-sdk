// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeZoneRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZoneRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZoneRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    DescribeZoneRecordRequest() = default ;
    DescribeZoneRecordRequest(const DescribeZoneRecordRequest &) = default ;
    DescribeZoneRecordRequest(DescribeZoneRecordRequest &&) = default ;
    DescribeZoneRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZoneRecordRequest() = default ;
    DescribeZoneRecordRequest& operator=(const DescribeZoneRecordRequest &) = default ;
    DescribeZoneRecordRequest& operator=(DescribeZoneRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DescribeZoneRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    // The ID of the DNS record.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
