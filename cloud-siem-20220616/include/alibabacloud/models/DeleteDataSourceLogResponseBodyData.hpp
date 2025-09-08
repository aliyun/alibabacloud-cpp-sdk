// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASOURCELOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASOURCELOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteDataSourceLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSourceLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(LogInstanceId, logInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSourceLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(LogInstanceId, logInstanceId_);
    };
    DeleteDataSourceLogResponseBodyData() = default ;
    DeleteDataSourceLogResponseBodyData(const DeleteDataSourceLogResponseBodyData &) = default ;
    DeleteDataSourceLogResponseBodyData(DeleteDataSourceLogResponseBodyData &&) = default ;
    DeleteDataSourceLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSourceLogResponseBodyData() = default ;
    DeleteDataSourceLogResponseBodyData& operator=(const DeleteDataSourceLogResponseBodyData &) = default ;
    DeleteDataSourceLogResponseBodyData& operator=(DeleteDataSourceLogResponseBodyData &&) = default ;
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
    inline DeleteDataSourceLogResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // logInstanceId Field Functions 
    bool hasLogInstanceId() const { return this->logInstanceId_ != nullptr;};
    void deleteLogInstanceId() { this->logInstanceId_ = nullptr;};
    inline string logInstanceId() const { DARABONBA_PTR_GET_DEFAULT(logInstanceId_, "") };
    inline DeleteDataSourceLogResponseBodyData& setLogInstanceId(string logInstanceId) { DARABONBA_PTR_SET_VALUE(logInstanceId_, logInstanceId) };


  protected:
    // The number of logs that are removed. The value 1 indicates that the log is removed, and a value less than or equal to 0 indicates that the log failed to be removed.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the log. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> logInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
