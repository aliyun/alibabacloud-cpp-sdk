// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval() = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval(const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval &) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval(DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval &&) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval() = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& operator=(const DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval &) = default ;
    DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& operator=(DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule>) };
    inline DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval& setDataModule(vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
