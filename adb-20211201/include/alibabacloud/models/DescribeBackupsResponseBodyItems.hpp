// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupsResponseBodyItemsBackup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBackupsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Backup, backup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Backup, backup_);
    };
    DescribeBackupsResponseBodyItems() = default ;
    DescribeBackupsResponseBodyItems(const DescribeBackupsResponseBodyItems &) = default ;
    DescribeBackupsResponseBodyItems(DescribeBackupsResponseBodyItems &&) = default ;
    DescribeBackupsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyItems() = default ;
    DescribeBackupsResponseBodyItems& operator=(const DescribeBackupsResponseBodyItems &) = default ;
    DescribeBackupsResponseBodyItems& operator=(DescribeBackupsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backup_ == nullptr; };
    // backup Field Functions 
    bool hasBackup() const { return this->backup_ != nullptr;};
    void deleteBackup() { this->backup_ = nullptr;};
    inline const vector<Models::DescribeBackupsResponseBodyItemsBackup> & backup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Models::DescribeBackupsResponseBodyItemsBackup>) };
    inline vector<Models::DescribeBackupsResponseBodyItemsBackup> backup() { DARABONBA_PTR_GET(backup_, vector<Models::DescribeBackupsResponseBodyItemsBackup>) };
    inline DescribeBackupsResponseBodyItems& setBackup(const vector<Models::DescribeBackupsResponseBodyItemsBackup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
    inline DescribeBackupsResponseBodyItems& setBackup(vector<Models::DescribeBackupsResponseBodyItemsBackup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupsResponseBodyItemsBackup>> backup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
