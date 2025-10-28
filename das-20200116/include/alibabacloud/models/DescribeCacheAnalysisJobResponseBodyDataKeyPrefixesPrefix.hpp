// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAKEYPREFIXESPREFIX_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAKEYPREFIXESPREFIX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& obj) { 
      DARABONBA_PTR_TO_JSON(Bytes, bytes_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(KeyNum, keyNum_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& obj) { 
      DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(KeyNum, keyNum_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix() = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix(const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix(DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix() = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& operator=(const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& operator=(DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytes_ == nullptr
        && return this->count_ == nullptr && return this->keyNum_ == nullptr && return this->prefix_ == nullptr && return this->type_ == nullptr; };
    // bytes Field Functions 
    bool hasBytes() const { return this->bytes_ != nullptr;};
    void deleteBytes() { this->bytes_ = nullptr;};
    inline int64_t bytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // keyNum Field Functions 
    bool hasKeyNum() const { return this->keyNum_ != nullptr;};
    void deleteKeyNum() { this->keyNum_ = nullptr;};
    inline int64_t keyNum() const { DARABONBA_PTR_GET_DEFAULT(keyNum_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& setKeyNum(int64_t keyNum) { DARABONBA_PTR_SET_VALUE(keyNum_, keyNum) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of bytes that are occupied by the key.
    std::shared_ptr<int64_t> bytes_ = nullptr;
    // The number of elements in the key.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The number of keys that contain the prefix.
    std::shared_ptr<int64_t> keyNum_ = nullptr;
    // The prefix of the key.
    std::shared_ptr<string> prefix_ = nullptr;
    // The data type of the instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
