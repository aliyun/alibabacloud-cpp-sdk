// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYSTORAGETYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYSTORAGETYPELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList(const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList(DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageType_ != nullptr; };
    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType> & storageType() const { DARABONBA_PTR_GET_CONST(storageType_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType> storageType() { DARABONBA_PTR_GET(storageType_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& setStorageType(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType> & storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList& setStorageType(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType> && storageType) { DARABONBA_PTR_SET_RVALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType>> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
