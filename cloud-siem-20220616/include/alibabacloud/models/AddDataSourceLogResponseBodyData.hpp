// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCELOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCELOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddDataSourceLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(LogInstanceId, logInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(LogInstanceId, logInstanceId_);
    };
    AddDataSourceLogResponseBodyData() = default ;
    AddDataSourceLogResponseBodyData(const AddDataSourceLogResponseBodyData &) = default ;
    AddDataSourceLogResponseBodyData(AddDataSourceLogResponseBodyData &&) = default ;
    AddDataSourceLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceLogResponseBodyData() = default ;
    AddDataSourceLogResponseBodyData& operator=(const AddDataSourceLogResponseBodyData &) = default ;
    AddDataSourceLogResponseBodyData& operator=(AddDataSourceLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->logInstanceId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline AddDataSourceLogResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // logInstanceId Field Functions 
    bool hasLogInstanceId() const { return this->logInstanceId_ != nullptr;};
    void deleteLogInstanceId() { this->logInstanceId_ = nullptr;};
    inline string logInstanceId() const { DARABONBA_PTR_GET_DEFAULT(logInstanceId_, "") };
    inline AddDataSourceLogResponseBodyData& setLogInstanceId(string logInstanceId) { DARABONBA_PTR_SET_VALUE(logInstanceId_, logInstanceId) };


  protected:
    // The number of logs that are added. The value 1 indicates that the log is added, and a value less than or equal to 0 indicates that the log failed to be added.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the log. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> logInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
