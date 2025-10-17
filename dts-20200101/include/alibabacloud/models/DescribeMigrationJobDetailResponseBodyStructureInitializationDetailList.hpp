// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(StructureInitializationDetail, structureInitializationDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(StructureInitializationDetail, structureInitializationDetail_);
    };
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList &&) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& operator=(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& operator=(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->structureInitializationDetail_ == nullptr; };
    // structureInitializationDetail Field Functions 
    bool hasStructureInitializationDetail() const { return this->structureInitializationDetail_ != nullptr;};
    void deleteStructureInitializationDetail() { this->structureInitializationDetail_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail> & structureInitializationDetail() const { DARABONBA_PTR_GET_CONST(structureInitializationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail>) };
    inline vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail> structureInitializationDetail() { DARABONBA_PTR_GET(structureInitializationDetail_, vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail>) };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& setStructureInitializationDetail(const vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail> & structureInitializationDetail) { DARABONBA_PTR_SET_VALUE(structureInitializationDetail_, structureInitializationDetail) };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList& setStructureInitializationDetail(vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail> && structureInitializationDetail) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetail_, structureInitializationDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail>> structureInitializationDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
