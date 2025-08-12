// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotDataInfo, snapshotDataInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotDataInfo, snapshotDataInfo_);
    };
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos() = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos(const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos &) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos(DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos &&) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos() = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& operator=(const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos &) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& operator=(DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotDataInfo_ != nullptr; };
    // snapshotDataInfo Field Functions 
    bool hasSnapshotDataInfo() const { return this->snapshotDataInfo_ != nullptr;};
    void deleteSnapshotDataInfo() { this->snapshotDataInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo> & snapshotDataInfo() const { DARABONBA_PTR_GET_CONST(snapshotDataInfo_, vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo>) };
    inline vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo> snapshotDataInfo() { DARABONBA_PTR_GET(snapshotDataInfo_, vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo>) };
    inline DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& setSnapshotDataInfo(const vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo> & snapshotDataInfo) { DARABONBA_PTR_SET_VALUE(snapshotDataInfo_, snapshotDataInfo) };
    inline DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos& setSnapshotDataInfo(vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo> && snapshotDataInfo) { DARABONBA_PTR_SET_RVALUE(snapshotDataInfo_, snapshotDataInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo>> snapshotDataInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
