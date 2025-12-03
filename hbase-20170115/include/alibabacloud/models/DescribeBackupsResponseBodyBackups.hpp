// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYBACKUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYBACKUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupsResponseBodyBackupsBackup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeBackupsResponseBodyBackups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_TO_JSON(Backup, backup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_FROM_JSON(Backup, backup_);
    };
    DescribeBackupsResponseBodyBackups() = default ;
    DescribeBackupsResponseBodyBackups(const DescribeBackupsResponseBodyBackups &) = default ;
    DescribeBackupsResponseBodyBackups(DescribeBackupsResponseBodyBackups &&) = default ;
    DescribeBackupsResponseBodyBackups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyBackups() = default ;
    DescribeBackupsResponseBodyBackups& operator=(const DescribeBackupsResponseBodyBackups &) = default ;
    DescribeBackupsResponseBodyBackups& operator=(DescribeBackupsResponseBodyBackups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backup_ == nullptr; };
    // backup Field Functions 
    bool hasBackup() const { return this->backup_ != nullptr;};
    void deleteBackup() { this->backup_ = nullptr;};
    inline const vector<Models::DescribeBackupsResponseBodyBackupsBackup> & backup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Models::DescribeBackupsResponseBodyBackupsBackup>) };
    inline vector<Models::DescribeBackupsResponseBodyBackupsBackup> backup() { DARABONBA_PTR_GET(backup_, vector<Models::DescribeBackupsResponseBodyBackupsBackup>) };
    inline DescribeBackupsResponseBodyBackups& setBackup(const vector<Models::DescribeBackupsResponseBodyBackupsBackup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
    inline DescribeBackupsResponseBodyBackups& setBackup(vector<Models::DescribeBackupsResponseBodyBackupsBackup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupsResponseBodyBackupsBackup>> backup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
