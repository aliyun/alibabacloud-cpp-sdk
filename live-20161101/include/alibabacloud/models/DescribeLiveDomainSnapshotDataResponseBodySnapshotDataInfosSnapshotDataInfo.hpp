// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAINFOSSNAPSHOTDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODYSNAPSHOTDATAINFOSSNAPSHOTDATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo() = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo(const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo &) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo(DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo &&) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo() = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& operator=(const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo &) = default ;
    DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& operator=(DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->total_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfosSnapshotDataInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The date.
    std::shared_ptr<string> date_ = nullptr;
    // The total number of snapshots that were captured on the day.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
