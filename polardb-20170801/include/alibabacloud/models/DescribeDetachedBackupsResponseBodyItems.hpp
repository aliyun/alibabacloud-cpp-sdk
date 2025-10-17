// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDetachedBackupsResponseBodyItemsBackup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDetachedBackupsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDetachedBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Backup, backup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDetachedBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Backup, backup_);
    };
    DescribeDetachedBackupsResponseBodyItems() = default ;
    DescribeDetachedBackupsResponseBodyItems(const DescribeDetachedBackupsResponseBodyItems &) = default ;
    DescribeDetachedBackupsResponseBodyItems(DescribeDetachedBackupsResponseBodyItems &&) = default ;
    DescribeDetachedBackupsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDetachedBackupsResponseBodyItems() = default ;
    DescribeDetachedBackupsResponseBodyItems& operator=(const DescribeDetachedBackupsResponseBodyItems &) = default ;
    DescribeDetachedBackupsResponseBodyItems& operator=(DescribeDetachedBackupsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backup_ == nullptr; };
    // backup Field Functions 
    bool hasBackup() const { return this->backup_ != nullptr;};
    void deleteBackup() { this->backup_ = nullptr;};
    inline const vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup> & backup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup>) };
    inline vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup> backup() { DARABONBA_PTR_GET(backup_, vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup>) };
    inline DescribeDetachedBackupsResponseBodyItems& setBackup(const vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
    inline DescribeDetachedBackupsResponseBodyItems& setBackup(vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


  protected:
    std::shared_ptr<vector<Models::DescribeDetachedBackupsResponseBodyItemsBackup>> backup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
