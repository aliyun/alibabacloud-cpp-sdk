// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Android, android_);
      DARABONBA_PTR_TO_JSON(DevelopmentCertInfo, developmentCertInfo_);
      DARABONBA_PTR_TO_JSON(IOS, IOS_);
      DARABONBA_PTR_TO_JSON(ProductionCertInfo, productionCertInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Android, android_);
      DARABONBA_PTR_FROM_JSON(DevelopmentCertInfo, developmentCertInfo_);
      DARABONBA_PTR_FROM_JSON(IOS, IOS_);
      DARABONBA_PTR_FROM_JSON(ProductionCertInfo, productionCertInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCertificateResponseBody() = default ;
    CheckCertificateResponseBody(const CheckCertificateResponseBody &) = default ;
    CheckCertificateResponseBody(CheckCertificateResponseBody &&) = default ;
    CheckCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCertificateResponseBody() = default ;
    CheckCertificateResponseBody& operator=(const CheckCertificateResponseBody &) = default ;
    CheckCertificateResponseBody& operator=(CheckCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductionCertInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductionCertInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ExipreTime, exipreTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ProductionCertInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ExipreTime, exipreTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ProductionCertInfo() = default ;
      ProductionCertInfo(const ProductionCertInfo &) = default ;
      ProductionCertInfo(ProductionCertInfo &&) = default ;
      ProductionCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductionCertInfo() = default ;
      ProductionCertInfo& operator=(const ProductionCertInfo &) = default ;
      ProductionCertInfo& operator=(ProductionCertInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exipreTime_ == nullptr
        && this->status_ == nullptr; };
      // exipreTime Field Functions 
      bool hasExipreTime() const { return this->exipreTime_ != nullptr;};
      void deleteExipreTime() { this->exipreTime_ = nullptr;};
      inline int64_t getExipreTime() const { DARABONBA_PTR_GET_DEFAULT(exipreTime_, 0L) };
      inline ProductionCertInfo& setExipreTime(int64_t exipreTime) { DARABONBA_PTR_SET_VALUE(exipreTime_, exipreTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProductionCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> exipreTime_ {};
      shared_ptr<string> status_ {};
    };

    class DevelopmentCertInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DevelopmentCertInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ExipreTime, exipreTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DevelopmentCertInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ExipreTime, exipreTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DevelopmentCertInfo() = default ;
      DevelopmentCertInfo(const DevelopmentCertInfo &) = default ;
      DevelopmentCertInfo(DevelopmentCertInfo &&) = default ;
      DevelopmentCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DevelopmentCertInfo() = default ;
      DevelopmentCertInfo& operator=(const DevelopmentCertInfo &) = default ;
      DevelopmentCertInfo& operator=(DevelopmentCertInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exipreTime_ == nullptr
        && this->status_ == nullptr; };
      // exipreTime Field Functions 
      bool hasExipreTime() const { return this->exipreTime_ != nullptr;};
      void deleteExipreTime() { this->exipreTime_ = nullptr;};
      inline int64_t getExipreTime() const { DARABONBA_PTR_GET_DEFAULT(exipreTime_, 0L) };
      inline DevelopmentCertInfo& setExipreTime(int64_t exipreTime) { DARABONBA_PTR_SET_VALUE(exipreTime_, exipreTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DevelopmentCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> exipreTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->android_ == nullptr
        && this->developmentCertInfo_ == nullptr && this->IOS_ == nullptr && this->productionCertInfo_ == nullptr && this->requestId_ == nullptr; };
    // android Field Functions 
    bool hasAndroid() const { return this->android_ != nullptr;};
    void deleteAndroid() { this->android_ = nullptr;};
    inline bool getAndroid() const { DARABONBA_PTR_GET_DEFAULT(android_, false) };
    inline CheckCertificateResponseBody& setAndroid(bool android) { DARABONBA_PTR_SET_VALUE(android_, android) };


    // developmentCertInfo Field Functions 
    bool hasDevelopmentCertInfo() const { return this->developmentCertInfo_ != nullptr;};
    void deleteDevelopmentCertInfo() { this->developmentCertInfo_ = nullptr;};
    inline const CheckCertificateResponseBody::DevelopmentCertInfo & getDevelopmentCertInfo() const { DARABONBA_PTR_GET_CONST(developmentCertInfo_, CheckCertificateResponseBody::DevelopmentCertInfo) };
    inline CheckCertificateResponseBody::DevelopmentCertInfo getDevelopmentCertInfo() { DARABONBA_PTR_GET(developmentCertInfo_, CheckCertificateResponseBody::DevelopmentCertInfo) };
    inline CheckCertificateResponseBody& setDevelopmentCertInfo(const CheckCertificateResponseBody::DevelopmentCertInfo & developmentCertInfo) { DARABONBA_PTR_SET_VALUE(developmentCertInfo_, developmentCertInfo) };
    inline CheckCertificateResponseBody& setDevelopmentCertInfo(CheckCertificateResponseBody::DevelopmentCertInfo && developmentCertInfo) { DARABONBA_PTR_SET_RVALUE(developmentCertInfo_, developmentCertInfo) };


    // IOS Field Functions 
    bool hasIOS() const { return this->IOS_ != nullptr;};
    void deleteIOS() { this->IOS_ = nullptr;};
    inline bool getIOS() const { DARABONBA_PTR_GET_DEFAULT(IOS_, false) };
    inline CheckCertificateResponseBody& setIOS(bool IOS) { DARABONBA_PTR_SET_VALUE(IOS_, IOS) };


    // productionCertInfo Field Functions 
    bool hasProductionCertInfo() const { return this->productionCertInfo_ != nullptr;};
    void deleteProductionCertInfo() { this->productionCertInfo_ = nullptr;};
    inline const CheckCertificateResponseBody::ProductionCertInfo & getProductionCertInfo() const { DARABONBA_PTR_GET_CONST(productionCertInfo_, CheckCertificateResponseBody::ProductionCertInfo) };
    inline CheckCertificateResponseBody::ProductionCertInfo getProductionCertInfo() { DARABONBA_PTR_GET(productionCertInfo_, CheckCertificateResponseBody::ProductionCertInfo) };
    inline CheckCertificateResponseBody& setProductionCertInfo(const CheckCertificateResponseBody::ProductionCertInfo & productionCertInfo) { DARABONBA_PTR_SET_VALUE(productionCertInfo_, productionCertInfo) };
    inline CheckCertificateResponseBody& setProductionCertInfo(CheckCertificateResponseBody::ProductionCertInfo && productionCertInfo) { DARABONBA_PTR_SET_RVALUE(productionCertInfo_, productionCertInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> android_ {};
    shared_ptr<CheckCertificateResponseBody::DevelopmentCertInfo> developmentCertInfo_ {};
    shared_ptr<bool> IOS_ {};
    shared_ptr<CheckCertificateResponseBody::ProductionCertInfo> productionCertInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
