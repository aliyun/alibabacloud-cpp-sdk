// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALIYUNCONSOLESERVICEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_ALIYUNCONSOLESERVICEINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class AliyunConsoleServiceInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AliyunConsoleServiceInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(buyUrl, buyUrl_);
      DARABONBA_PTR_TO_JSON(documentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(freeConcurrencyCount, freeConcurrencyCount_);
      DARABONBA_PTR_TO_JSON(freeCount, freeCount_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, AliyunConsoleServiceInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(buyUrl, buyUrl_);
      DARABONBA_PTR_FROM_JSON(documentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(freeConcurrencyCount, freeConcurrencyCount_);
      DARABONBA_PTR_FROM_JSON(freeCount, freeCount_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    AliyunConsoleServiceInfoDTO() = default ;
    AliyunConsoleServiceInfoDTO(const AliyunConsoleServiceInfoDTO &) = default ;
    AliyunConsoleServiceInfoDTO(AliyunConsoleServiceInfoDTO &&) = default ;
    AliyunConsoleServiceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AliyunConsoleServiceInfoDTO() = default ;
    AliyunConsoleServiceInfoDTO& operator=(const AliyunConsoleServiceInfoDTO &) = default ;
    AliyunConsoleServiceInfoDTO& operator=(AliyunConsoleServiceInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyUrl_ == nullptr
        && this->documentUrl_ == nullptr && this->freeConcurrencyCount_ == nullptr && this->freeCount_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr; };
    // buyUrl Field Functions 
    bool hasBuyUrl() const { return this->buyUrl_ != nullptr;};
    void deleteBuyUrl() { this->buyUrl_ = nullptr;};
    inline string getBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(buyUrl_, "") };
    inline AliyunConsoleServiceInfoDTO& setBuyUrl(string buyUrl) { DARABONBA_PTR_SET_VALUE(buyUrl_, buyUrl) };


    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string getDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline AliyunConsoleServiceInfoDTO& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // freeConcurrencyCount Field Functions 
    bool hasFreeConcurrencyCount() const { return this->freeConcurrencyCount_ != nullptr;};
    void deleteFreeConcurrencyCount() { this->freeConcurrencyCount_ = nullptr;};
    inline int32_t getFreeConcurrencyCount() const { DARABONBA_PTR_GET_DEFAULT(freeConcurrencyCount_, 0) };
    inline AliyunConsoleServiceInfoDTO& setFreeConcurrencyCount(int32_t freeConcurrencyCount) { DARABONBA_PTR_SET_VALUE(freeConcurrencyCount_, freeConcurrencyCount) };


    // freeCount Field Functions 
    bool hasFreeCount() const { return this->freeCount_ != nullptr;};
    void deleteFreeCount() { this->freeCount_ = nullptr;};
    inline int32_t getFreeCount() const { DARABONBA_PTR_GET_DEFAULT(freeCount_, 0) };
    inline AliyunConsoleServiceInfoDTO& setFreeCount(int32_t freeCount) { DARABONBA_PTR_SET_VALUE(freeCount_, freeCount) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline AliyunConsoleServiceInfoDTO& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline AliyunConsoleServiceInfoDTO& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    shared_ptr<string> buyUrl_ {};
    shared_ptr<string> documentUrl_ {};
    shared_ptr<int32_t> freeConcurrencyCount_ {};
    shared_ptr<int32_t> freeCount_ {};
    shared_ptr<string> serviceCode_ {};
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
