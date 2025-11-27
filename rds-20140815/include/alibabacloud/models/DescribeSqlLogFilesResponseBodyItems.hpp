// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogFilesResponseBodyItemsLogFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogFilesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(LogFile, logFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(LogFile, logFile_);
    };
    DescribeSQLLogFilesResponseBodyItems() = default ;
    DescribeSQLLogFilesResponseBodyItems(const DescribeSQLLogFilesResponseBodyItems &) = default ;
    DescribeSQLLogFilesResponseBodyItems(DescribeSQLLogFilesResponseBodyItems &&) = default ;
    DescribeSQLLogFilesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogFilesResponseBodyItems() = default ;
    DescribeSQLLogFilesResponseBodyItems& operator=(const DescribeSQLLogFilesResponseBodyItems &) = default ;
    DescribeSQLLogFilesResponseBodyItems& operator=(DescribeSQLLogFilesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logFile_ == nullptr; };
    // logFile Field Functions 
    bool hasLogFile() const { return this->logFile_ != nullptr;};
    void deleteLogFile() { this->logFile_ = nullptr;};
    inline const vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile> & logFile() const { DARABONBA_PTR_GET_CONST(logFile_, vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile>) };
    inline vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile> logFile() { DARABONBA_PTR_GET(logFile_, vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile>) };
    inline DescribeSQLLogFilesResponseBodyItems& setLogFile(const vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile> & logFile) { DARABONBA_PTR_SET_VALUE(logFile_, logFile) };
    inline DescribeSQLLogFilesResponseBodyItems& setLogFile(vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile> && logFile) { DARABONBA_PTR_SET_RVALUE(logFile_, logFile) };


  protected:
    std::shared_ptr<vector<Models::DescribeSQLLogFilesResponseBodyItemsLogFile>> logFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
