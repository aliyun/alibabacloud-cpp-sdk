// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSBACKUPMETALISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSBACKUPMETALISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossBackupMetaListResponseBodyItemsMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossBackupMetaListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossBackupMetaListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Meta, meta_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossBackupMetaListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
    };
    DescribeCrossBackupMetaListResponseBodyItems() = default ;
    DescribeCrossBackupMetaListResponseBodyItems(const DescribeCrossBackupMetaListResponseBodyItems &) = default ;
    DescribeCrossBackupMetaListResponseBodyItems(DescribeCrossBackupMetaListResponseBodyItems &&) = default ;
    DescribeCrossBackupMetaListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossBackupMetaListResponseBodyItems() = default ;
    DescribeCrossBackupMetaListResponseBodyItems& operator=(const DescribeCrossBackupMetaListResponseBodyItems &) = default ;
    DescribeCrossBackupMetaListResponseBodyItems& operator=(DescribeCrossBackupMetaListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->meta_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta> & meta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta>) };
    inline vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta> meta() { DARABONBA_PTR_GET(meta_, vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta>) };
    inline DescribeCrossBackupMetaListResponseBodyItems& setMeta(const vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline DescribeCrossBackupMetaListResponseBodyItems& setMeta(vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


  protected:
    std::shared_ptr<vector<Models::DescribeCrossBackupMetaListResponseBodyItemsMeta>> meta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
