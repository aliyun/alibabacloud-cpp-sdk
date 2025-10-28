// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETFILEMETASSTAT_HPP_
#define ALIBABACLOUD_MODELS_DATASETFILEMETASSTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetFileMetasStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetFileMetasStat& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetFileMetasStat& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    DatasetFileMetasStat() = default ;
    DatasetFileMetasStat(const DatasetFileMetasStat &) = default ;
    DatasetFileMetasStat(DatasetFileMetasStat &&) = default ;
    DatasetFileMetasStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetFileMetasStat() = default ;
    DatasetFileMetasStat& operator=(const DatasetFileMetasStat &) = default ;
    DatasetFileMetasStat& operator=(DatasetFileMetasStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->key_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DatasetFileMetasStat& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DatasetFileMetasStat& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
