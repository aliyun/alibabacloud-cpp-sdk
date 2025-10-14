// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTSDNSNODESANSWERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTSDNSNODESANSWERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Record, record_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Record, record_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers(DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers &&) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& operator=(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& operator=(DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->record_ == nullptr && return this->ttl_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline string record() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> record_ = nullptr;
    std::shared_ptr<int64_t> ttl_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
