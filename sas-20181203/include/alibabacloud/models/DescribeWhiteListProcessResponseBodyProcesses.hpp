// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSRESPONSEBODYPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSRESPONSEBODYPROCESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListProcessResponseBodyProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessType, processType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeWhiteListProcessResponseBodyProcesses() = default ;
    DescribeWhiteListProcessResponseBodyProcesses(const DescribeWhiteListProcessResponseBodyProcesses &) = default ;
    DescribeWhiteListProcessResponseBodyProcesses(DescribeWhiteListProcessResponseBodyProcesses &&) = default ;
    DescribeWhiteListProcessResponseBodyProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListProcessResponseBodyProcesses() = default ;
    DescribeWhiteListProcessResponseBodyProcesses& operator=(const DescribeWhiteListProcessResponseBodyProcesses &) = default ;
    DescribeWhiteListProcessResponseBodyProcesses& operator=(DescribeWhiteListProcessResponseBodyProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr
        && return this->id_ == nullptr && return this->level_ == nullptr && return this->md5_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr
        && return this->processType_ == nullptr && return this->status_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeWhiteListProcessResponseBodyProcesses& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeWhiteListProcessResponseBodyProcesses& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeWhiteListProcessResponseBodyProcesses& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeWhiteListProcessResponseBodyProcesses& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline int32_t processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0) };
    inline DescribeWhiteListProcessResponseBodyProcesses& setProcessId(int32_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeWhiteListProcessResponseBodyProcesses& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processType Field Functions 
    bool hasProcessType() const { return this->processType_ != nullptr;};
    void deleteProcessType() { this->processType_ = nullptr;};
    inline int32_t processType() const { DARABONBA_PTR_GET_DEFAULT(processType_, 0) };
    inline DescribeWhiteListProcessResponseBodyProcesses& setProcessType(int32_t processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeWhiteListProcessResponseBodyProcesses& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The path to the process startup file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The primary key of the process information.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The trust score of the process.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The MD5 hash value of the process startup file.
    std::shared_ptr<string> md5_ = nullptr;
    // The ID of the process.
    std::shared_ptr<int32_t> processId_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> processName_ = nullptr;
    // The type of the process. Valid values:
    // 
    // *   **1**: trusted
    // *   **2**: suspicious
    // *   **3**: malicious
    std::shared_ptr<int32_t> processType_ = nullptr;
    // Indicates whether the process is trusted. Valid values:
    // 
    // *   **1**: no
    // *   **2**: yes
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
