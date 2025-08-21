// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListLogstashLogRequest() = default ;
    ListLogstashLogRequest(const ListLogstashLogRequest &) = default ;
    ListLogstashLogRequest(ListLogstashLogRequest &&) = default ;
    ListLogstashLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashLogRequest() = default ;
    ListLogstashLogRequest& operator=(const ListLogstashLogRequest &) = default ;
    ListLogstashLogRequest& operator=(ListLogstashLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->page_ != nullptr && this->query_ != nullptr && this->size_ != nullptr && this->type_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListLogstashLogRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListLogstashLogRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListLogstashLogRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListLogstashLogRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLogstashLogRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLogstashLogRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 20
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The returned data.
    std::shared_ptr<int32_t> page_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    // The severity level of the log entry. Including trace, debug, info, warn, error, etc. (GC logs have no level).
    std::shared_ptr<int32_t> size_ = nullptr;
    // 1531910852074
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
