// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMSDBSRECOVERRANGEFULLBACKUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMSDBSRECOVERRANGEFULLBACKUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& obj) { 
      DARABONBA_PTR_TO_JSON(FullBackupDetail, fullBackupDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& obj) { 
      DARABONBA_PTR_FROM_JSON(FullBackupDetail, fullBackupDetail_);
    };
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList() = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList(const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList &) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList(DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList &&) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList() = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& operator=(const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList &) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& operator=(DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullBackupDetail_ == nullptr; };
    // fullBackupDetail Field Functions 
    bool hasFullBackupDetail() const { return this->fullBackupDetail_ != nullptr;};
    void deleteFullBackupDetail() { this->fullBackupDetail_ = nullptr;};
    inline const vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail> & fullBackupDetail() const { DARABONBA_PTR_GET_CONST(fullBackupDetail_, vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail>) };
    inline vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail> fullBackupDetail() { DARABONBA_PTR_GET(fullBackupDetail_, vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail>) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& setFullBackupDetail(const vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail> & fullBackupDetail) { DARABONBA_PTR_SET_VALUE(fullBackupDetail_, fullBackupDetail) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList& setFullBackupDetail(vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail> && fullBackupDetail) { DARABONBA_PTR_SET_RVALUE(fullBackupDetail_, fullBackupDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail>> fullBackupDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
