// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODYAPIEXPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODYAPIEXPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApiExportsResponseBodyApiExports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiExportsResponseBodyApiExports& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiExportsResponseBodyApiExports& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeApiExportsResponseBodyApiExports() = default ;
    DescribeApiExportsResponseBodyApiExports(const DescribeApiExportsResponseBodyApiExports &) = default ;
    DescribeApiExportsResponseBodyApiExports(DescribeApiExportsResponseBodyApiExports &&) = default ;
    DescribeApiExportsResponseBodyApiExports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiExportsResponseBodyApiExports() = default ;
    DescribeApiExportsResponseBodyApiExports& operator=(const DescribeApiExportsResponseBodyApiExports &) = default ;
    DescribeApiExportsResponseBodyApiExports& operator=(DescribeApiExportsResponseBodyApiExports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->fileName_ != nullptr && this->fileUrl_ != nullptr && this->format_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeApiExportsResponseBodyApiExports& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeApiExportsResponseBodyApiExports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline DescribeApiExportsResponseBodyApiExports& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeApiExportsResponseBodyApiExports& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApiExportsResponseBodyApiExports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApiExportsResponseBodyApiExports& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the data export task was created. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The download URL of the exported file.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // The format of the exported file.
    std::shared_ptr<string> format_ = nullptr;
    // The status of the data export task. Valid values:
    // 
    // * **expired**: The file is expired.
    // 
    // * **exporting**: Data is being exported.
    // 
    // * **completed**: Data is exported.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the data export task. Valid values:
    // 
    // * **apisec_api**: API tasks
    // 
    // * **apisec_abnormal**: API risk tasks
    // 
    // * **apisec_event**: API security event tasks
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
