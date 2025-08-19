// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTQUOTAINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTQUOTAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppRequestQuotaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestQuotaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(appType, appType_);
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestQuotaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(appType, appType_);
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(storage, storage_);
    };
    CreateAppRequestQuotaInfo() = default ;
    CreateAppRequestQuotaInfo(const CreateAppRequestQuotaInfo &) = default ;
    CreateAppRequestQuotaInfo(CreateAppRequestQuotaInfo &&) = default ;
    CreateAppRequestQuotaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestQuotaInfo() = default ;
    CreateAppRequestQuotaInfo& operator=(const CreateAppRequestQuotaInfo &) = default ;
    CreateAppRequestQuotaInfo& operator=(CreateAppRequestQuotaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->cu_ != nullptr && this->storage_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateAppRequestQuotaInfo& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline CreateAppRequestQuotaInfo& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline CreateAppRequestQuotaInfo& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<int32_t> cu_ = nullptr;
    std::shared_ptr<int32_t> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
