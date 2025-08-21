// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotValue, snapshotValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotValue, snapshotValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule() = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule(const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule &) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule(DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule &&) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule() = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& operator=(const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule &) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& operator=(DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotValue_ != nullptr
        && this->timeStamp_ != nullptr; };
    // snapshotValue Field Functions 
    bool hasSnapshotValue() const { return this->snapshotValue_ != nullptr;};
    void deleteSnapshotValue() { this->snapshotValue_ = nullptr;};
    inline string snapshotValue() const { DARABONBA_PTR_GET_DEFAULT(snapshotValue_, "") };
    inline DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& setSnapshotValue(string snapshotValue) { DARABONBA_PTR_SET_VALUE(snapshotValue_, snapshotValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> snapshotValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
