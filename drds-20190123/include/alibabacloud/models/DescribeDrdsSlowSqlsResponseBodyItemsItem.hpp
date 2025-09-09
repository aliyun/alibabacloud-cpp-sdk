// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSLOWSQLSRESPONSEBODYITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSLOWSQLSRESPONSEBODYITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsSlowSqlsResponseBodyItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsSlowSqlsResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(ResponseTime, responseTime_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsSlowSqlsResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(ResponseTime, responseTime_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    DescribeDrdsSlowSqlsResponseBodyItemsItem() = default ;
    DescribeDrdsSlowSqlsResponseBodyItemsItem(const DescribeDrdsSlowSqlsResponseBodyItemsItem &) = default ;
    DescribeDrdsSlowSqlsResponseBodyItemsItem(DescribeDrdsSlowSqlsResponseBodyItemsItem &&) = default ;
    DescribeDrdsSlowSqlsResponseBodyItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsSlowSqlsResponseBodyItemsItem() = default ;
    DescribeDrdsSlowSqlsResponseBodyItemsItem& operator=(const DescribeDrdsSlowSqlsResponseBodyItemsItem &) = default ;
    DescribeDrdsSlowSqlsResponseBodyItemsItem& operator=(DescribeDrdsSlowSqlsResponseBodyItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->responseTime_ != nullptr && this->schema_ != nullptr && this->sendTime_ != nullptr && this->sql_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeDrdsSlowSqlsResponseBodyItemsItem& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline int64_t responseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
    inline DescribeDrdsSlowSqlsResponseBodyItemsItem& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeDrdsSlowSqlsResponseBodyItemsItem& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sendTime Field Functions 
    bool hasSendTime() const { return this->sendTime_ != nullptr;};
    void deleteSendTime() { this->sendTime_ = nullptr;};
    inline int64_t sendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, 0L) };
    inline DescribeDrdsSlowSqlsResponseBodyItemsItem& setSendTime(int64_t sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline DescribeDrdsSlowSqlsResponseBodyItemsItem& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // Indicates the IP address of the execution machine.
    std::shared_ptr<string> host_ = nullptr;
    // Indicates the response time. Unit: ms.
    std::shared_ptr<int64_t> responseTime_ = nullptr;
    // Indicates the name of the database.
    std::shared_ptr<string> schema_ = nullptr;
    // Indicates the time when the slow SQL query was sent. Unit: ms.
    std::shared_ptr<int64_t> sendTime_ = nullptr;
    // Indicates the content of the slow SQL query.
    std::shared_ptr<string> sql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
