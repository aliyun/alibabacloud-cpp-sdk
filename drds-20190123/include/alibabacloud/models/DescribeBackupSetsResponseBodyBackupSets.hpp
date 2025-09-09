// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupSetsResponseBodyBackupSetsBackupSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupSetsResponseBodyBackupSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetsResponseBodyBackupSets& obj) { 
      DARABONBA_PTR_TO_JSON(backupSet, backupSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetsResponseBodyBackupSets& obj) { 
      DARABONBA_PTR_FROM_JSON(backupSet, backupSet_);
    };
    DescribeBackupSetsResponseBodyBackupSets() = default ;
    DescribeBackupSetsResponseBodyBackupSets(const DescribeBackupSetsResponseBodyBackupSets &) = default ;
    DescribeBackupSetsResponseBodyBackupSets(DescribeBackupSetsResponseBodyBackupSets &&) = default ;
    DescribeBackupSetsResponseBodyBackupSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetsResponseBodyBackupSets() = default ;
    DescribeBackupSetsResponseBodyBackupSets& operator=(const DescribeBackupSetsResponseBodyBackupSets &) = default ;
    DescribeBackupSetsResponseBodyBackupSets& operator=(DescribeBackupSetsResponseBodyBackupSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupSet_ != nullptr; };
    // backupSet Field Functions 
    bool hasBackupSet() const { return this->backupSet_ != nullptr;};
    void deleteBackupSet() { this->backupSet_ = nullptr;};
    inline const vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet> & backupSet() const { DARABONBA_PTR_GET_CONST(backupSet_, vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet>) };
    inline vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet> backupSet() { DARABONBA_PTR_GET(backupSet_, vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet>) };
    inline DescribeBackupSetsResponseBodyBackupSets& setBackupSet(const vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet> & backupSet) { DARABONBA_PTR_SET_VALUE(backupSet_, backupSet) };
    inline DescribeBackupSetsResponseBodyBackupSets& setBackupSet(vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet> && backupSet) { DARABONBA_PTR_SET_RVALUE(backupSet_, backupSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSet>> backupSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
