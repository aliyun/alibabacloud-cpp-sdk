// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBinlogFilesResponseBodyItemsBinLogFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBinlogFilesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinlogFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BinLogFile, binLogFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinlogFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BinLogFile, binLogFile_);
    };
    DescribeBinlogFilesResponseBodyItems() = default ;
    DescribeBinlogFilesResponseBodyItems(const DescribeBinlogFilesResponseBodyItems &) = default ;
    DescribeBinlogFilesResponseBodyItems(DescribeBinlogFilesResponseBodyItems &&) = default ;
    DescribeBinlogFilesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinlogFilesResponseBodyItems() = default ;
    DescribeBinlogFilesResponseBodyItems& operator=(const DescribeBinlogFilesResponseBodyItems &) = default ;
    DescribeBinlogFilesResponseBodyItems& operator=(DescribeBinlogFilesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binLogFile_ == nullptr; };
    // binLogFile Field Functions 
    bool hasBinLogFile() const { return this->binLogFile_ != nullptr;};
    void deleteBinLogFile() { this->binLogFile_ = nullptr;};
    inline const vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile> & binLogFile() const { DARABONBA_PTR_GET_CONST(binLogFile_, vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile>) };
    inline vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile> binLogFile() { DARABONBA_PTR_GET(binLogFile_, vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile>) };
    inline DescribeBinlogFilesResponseBodyItems& setBinLogFile(const vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile> & binLogFile) { DARABONBA_PTR_SET_VALUE(binLogFile_, binLogFile) };
    inline DescribeBinlogFilesResponseBodyItems& setBinLogFile(vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile> && binLogFile) { DARABONBA_PTR_SET_RVALUE(binLogFile_, binLogFile) };


  protected:
    std::shared_ptr<vector<Models::DescribeBinlogFilesResponseBodyItemsBinLogFile>> binLogFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
