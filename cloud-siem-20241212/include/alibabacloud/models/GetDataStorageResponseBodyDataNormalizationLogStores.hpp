// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATANORMALIZATIONLOGSTORES_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATANORMALIZATIONLOGSTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBodyDataNormalizationLogStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBodyDataNormalizationLogStores& obj) { 
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBodyDataNormalizationLogStores& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
    };
    GetDataStorageResponseBodyDataNormalizationLogStores() = default ;
    GetDataStorageResponseBodyDataNormalizationLogStores(const GetDataStorageResponseBodyDataNormalizationLogStores &) = default ;
    GetDataStorageResponseBodyDataNormalizationLogStores(GetDataStorageResponseBodyDataNormalizationLogStores &&) = default ;
    GetDataStorageResponseBodyDataNormalizationLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBodyDataNormalizationLogStores() = default ;
    GetDataStorageResponseBodyDataNormalizationLogStores& operator=(const GetDataStorageResponseBodyDataNormalizationLogStores &) = default ;
    GetDataStorageResponseBodyDataNormalizationLogStores& operator=(GetDataStorageResponseBodyDataNormalizationLogStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStoreName_ == nullptr
        && return this->logStoreTtl_ == nullptr; };
    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logStoreTtl Field Functions 
    bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
    void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
    inline int32_t logStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
    inline GetDataStorageResponseBodyDataNormalizationLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


  protected:
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int32_t> logStoreTtl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
