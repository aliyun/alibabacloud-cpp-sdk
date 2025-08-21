// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATARESULTVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATARESULTVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DataResultValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataResultValue& obj) { 
      DARABONBA_PTR_TO_JSON(sqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DataResultValue& obj) { 
      DARABONBA_PTR_FROM_JSON(sqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(count, count_);
    };
    DataResultValue() = default ;
    DataResultValue(const DataResultValue &) = default ;
    DataResultValue(DataResultValue &&) = default ;
    DataResultValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataResultValue() = default ;
    DataResultValue& operator=(const DataResultValue &) = default ;
    DataResultValue& operator=(DataResultValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sqlId_ != nullptr
        && this->instanceId_ != nullptr && this->count_ != nullptr; };
    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline DataResultValue& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DataResultValue& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DataResultValue& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<string> sqlId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
