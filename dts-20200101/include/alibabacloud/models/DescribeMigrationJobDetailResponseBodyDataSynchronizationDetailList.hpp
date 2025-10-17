// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(DataSynchronizationDetail, dataSynchronizationDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSynchronizationDetail, dataSynchronizationDetail_);
    };
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList(const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList(DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList &&) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& operator=(const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& operator=(DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSynchronizationDetail_ == nullptr; };
    // dataSynchronizationDetail Field Functions 
    bool hasDataSynchronizationDetail() const { return this->dataSynchronizationDetail_ != nullptr;};
    void deleteDataSynchronizationDetail() { this->dataSynchronizationDetail_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail> & dataSynchronizationDetail() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail>) };
    inline vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail> dataSynchronizationDetail() { DARABONBA_PTR_GET(dataSynchronizationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail>) };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& setDataSynchronizationDetail(const vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail> & dataSynchronizationDetail) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetail_, dataSynchronizationDetail) };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList& setDataSynchronizationDetail(vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail> && dataSynchronizationDetail) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetail_, dataSynchronizationDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail>> dataSynchronizationDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
