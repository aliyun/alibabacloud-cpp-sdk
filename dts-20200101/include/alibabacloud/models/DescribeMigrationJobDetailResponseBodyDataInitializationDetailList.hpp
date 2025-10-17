// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATAINITIALIZATIONDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATAINITIALIZATIONDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyDataInitializationDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationDetail, dataInitializationDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationDetail, dataInitializationDetail_);
    };
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList(const DescribeMigrationJobDetailResponseBodyDataInitializationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList(DescribeMigrationJobDetailResponseBodyDataInitializationDetailList &&) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyDataInitializationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& operator=(const DescribeMigrationJobDetailResponseBodyDataInitializationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& operator=(DescribeMigrationJobDetailResponseBodyDataInitializationDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitializationDetail_ == nullptr; };
    // dataInitializationDetail Field Functions 
    bool hasDataInitializationDetail() const { return this->dataInitializationDetail_ != nullptr;};
    void deleteDataInitializationDetail() { this->dataInitializationDetail_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail> & dataInitializationDetail() const { DARABONBA_PTR_GET_CONST(dataInitializationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail>) };
    inline vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail> dataInitializationDetail() { DARABONBA_PTR_GET(dataInitializationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail>) };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& setDataInitializationDetail(const vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail> & dataInitializationDetail) { DARABONBA_PTR_SET_VALUE(dataInitializationDetail_, dataInitializationDetail) };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailList& setDataInitializationDetail(vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail> && dataInitializationDetail) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetail_, dataInitializationDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail>> dataInitializationDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
