// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODYDATALOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODYDATALOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeErrorLogRecordsResponseBodyDataLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogRecordsResponseBodyDataLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConnInfo, connInfo_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogRecordsResponseBodyDataLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConnInfo, connInfo_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    DescribeErrorLogRecordsResponseBodyDataLogs() = default ;
    DescribeErrorLogRecordsResponseBodyDataLogs(const DescribeErrorLogRecordsResponseBodyDataLogs &) = default ;
    DescribeErrorLogRecordsResponseBodyDataLogs(DescribeErrorLogRecordsResponseBodyDataLogs &&) = default ;
    DescribeErrorLogRecordsResponseBodyDataLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogRecordsResponseBodyDataLogs() = default ;
    DescribeErrorLogRecordsResponseBodyDataLogs& operator=(const DescribeErrorLogRecordsResponseBodyDataLogs &) = default ;
    DescribeErrorLogRecordsResponseBodyDataLogs& operator=(DescribeErrorLogRecordsResponseBodyDataLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->connInfo_ == nullptr && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->DBInstanceName_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeErrorLogRecordsResponseBodyDataLogs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // connInfo Field Functions 
    bool hasConnInfo() const { return this->connInfo_ != nullptr;};
    void deleteConnInfo() { this->connInfo_ = nullptr;};
    inline string connInfo() const { DARABONBA_PTR_GET_DEFAULT(connInfo_, "") };
    inline DescribeErrorLogRecordsResponseBodyDataLogs& setConnInfo(string connInfo) { DARABONBA_PTR_SET_VALUE(connInfo_, connInfo) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeErrorLogRecordsResponseBodyDataLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeErrorLogRecordsResponseBodyDataLogs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeErrorLogRecordsResponseBodyDataLogs& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> connInfo_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
