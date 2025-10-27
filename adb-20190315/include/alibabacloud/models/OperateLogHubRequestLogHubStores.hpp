// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATELOGHUBREQUESTLOGHUBSTORES_HPP_
#define ALIBABACLOUD_MODELS_OPERATELOGHUBREQUESTLOGHUBSTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class OperateLogHubRequestLogHubStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateLogHubRequestLogHubStores& obj) { 
      DARABONBA_PTR_TO_JSON(FieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(LogKey, logKey_);
    };
    friend void from_json(const Darabonba::Json& j, OperateLogHubRequestLogHubStores& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(LogKey, logKey_);
    };
    OperateLogHubRequestLogHubStores() = default ;
    OperateLogHubRequestLogHubStores(const OperateLogHubRequestLogHubStores &) = default ;
    OperateLogHubRequestLogHubStores(OperateLogHubRequestLogHubStores &&) = default ;
    OperateLogHubRequestLogHubStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateLogHubRequestLogHubStores() = default ;
    OperateLogHubRequestLogHubStores& operator=(const OperateLogHubRequestLogHubStores &) = default ;
    OperateLogHubRequestLogHubStores& operator=(OperateLogHubRequestLogHubStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && return this->logKey_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline OperateLogHubRequestLogHubStores& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // logKey Field Functions 
    bool hasLogKey() const { return this->logKey_ != nullptr;};
    void deleteLogKey() { this->logKey_ = nullptr;};
    inline string logKey() const { DARABONBA_PTR_GET_DEFAULT(logKey_, "") };
    inline OperateLogHubRequestLogHubStores& setLogKey(string logKey) { DARABONBA_PTR_SET_VALUE(logKey_, logKey) };


  protected:
    // The value of the log keyword.
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldKey_ = nullptr;
    // The log keyword.
    // 
    // This parameter is required.
    std::shared_ptr<string> logKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
