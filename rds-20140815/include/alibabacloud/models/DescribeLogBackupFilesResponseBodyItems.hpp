// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogBackupFilesResponseBodyItemsBinLogFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeLogBackupFilesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BinLogFile, binLogFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BinLogFile, binLogFile_);
    };
    DescribeLogBackupFilesResponseBodyItems() = default ;
    DescribeLogBackupFilesResponseBodyItems(const DescribeLogBackupFilesResponseBodyItems &) = default ;
    DescribeLogBackupFilesResponseBodyItems(DescribeLogBackupFilesResponseBodyItems &&) = default ;
    DescribeLogBackupFilesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupFilesResponseBodyItems() = default ;
    DescribeLogBackupFilesResponseBodyItems& operator=(const DescribeLogBackupFilesResponseBodyItems &) = default ;
    DescribeLogBackupFilesResponseBodyItems& operator=(DescribeLogBackupFilesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binLogFile_ == nullptr; };
    // binLogFile Field Functions 
    bool hasBinLogFile() const { return this->binLogFile_ != nullptr;};
    void deleteBinLogFile() { this->binLogFile_ = nullptr;};
    inline const vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile> & binLogFile() const { DARABONBA_PTR_GET_CONST(binLogFile_, vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile>) };
    inline vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile> binLogFile() { DARABONBA_PTR_GET(binLogFile_, vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile>) };
    inline DescribeLogBackupFilesResponseBodyItems& setBinLogFile(const vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile> & binLogFile) { DARABONBA_PTR_SET_VALUE(binLogFile_, binLogFile) };
    inline DescribeLogBackupFilesResponseBodyItems& setBinLogFile(vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile> && binLogFile) { DARABONBA_PTR_SET_RVALUE(binLogFile_, binLogFile) };


  protected:
    std::shared_ptr<vector<Models::DescribeLogBackupFilesResponseBodyItemsBinLogFile>> binLogFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
