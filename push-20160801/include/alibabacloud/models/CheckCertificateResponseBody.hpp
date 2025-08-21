// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckCertificateResponseBodyDevelopmentCertInfo.hpp>
#include <alibabacloud/models/CheckCertificateResponseBodyProductionCertInfo.hpp>
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
    virtual bool empty() const override { this->android_ != nullptr
        && this->developmentCertInfo_ != nullptr && this->IOS_ != nullptr && this->productionCertInfo_ != nullptr && this->requestId_ != nullptr; };
    // android Field Functions 
    bool hasAndroid() const { return this->android_ != nullptr;};
    void deleteAndroid() { this->android_ = nullptr;};
    inline bool android() const { DARABONBA_PTR_GET_DEFAULT(android_, false) };
    inline CheckCertificateResponseBody& setAndroid(bool android) { DARABONBA_PTR_SET_VALUE(android_, android) };


    // developmentCertInfo Field Functions 
    bool hasDevelopmentCertInfo() const { return this->developmentCertInfo_ != nullptr;};
    void deleteDevelopmentCertInfo() { this->developmentCertInfo_ = nullptr;};
    inline const CheckCertificateResponseBodyDevelopmentCertInfo & developmentCertInfo() const { DARABONBA_PTR_GET_CONST(developmentCertInfo_, CheckCertificateResponseBodyDevelopmentCertInfo) };
    inline CheckCertificateResponseBodyDevelopmentCertInfo developmentCertInfo() { DARABONBA_PTR_GET(developmentCertInfo_, CheckCertificateResponseBodyDevelopmentCertInfo) };
    inline CheckCertificateResponseBody& setDevelopmentCertInfo(const CheckCertificateResponseBodyDevelopmentCertInfo & developmentCertInfo) { DARABONBA_PTR_SET_VALUE(developmentCertInfo_, developmentCertInfo) };
    inline CheckCertificateResponseBody& setDevelopmentCertInfo(CheckCertificateResponseBodyDevelopmentCertInfo && developmentCertInfo) { DARABONBA_PTR_SET_RVALUE(developmentCertInfo_, developmentCertInfo) };


    // IOS Field Functions 
    bool hasIOS() const { return this->IOS_ != nullptr;};
    void deleteIOS() { this->IOS_ = nullptr;};
    inline bool IOS() const { DARABONBA_PTR_GET_DEFAULT(IOS_, false) };
    inline CheckCertificateResponseBody& setIOS(bool IOS) { DARABONBA_PTR_SET_VALUE(IOS_, IOS) };


    // productionCertInfo Field Functions 
    bool hasProductionCertInfo() const { return this->productionCertInfo_ != nullptr;};
    void deleteProductionCertInfo() { this->productionCertInfo_ = nullptr;};
    inline const CheckCertificateResponseBodyProductionCertInfo & productionCertInfo() const { DARABONBA_PTR_GET_CONST(productionCertInfo_, CheckCertificateResponseBodyProductionCertInfo) };
    inline CheckCertificateResponseBodyProductionCertInfo productionCertInfo() { DARABONBA_PTR_GET(productionCertInfo_, CheckCertificateResponseBodyProductionCertInfo) };
    inline CheckCertificateResponseBody& setProductionCertInfo(const CheckCertificateResponseBodyProductionCertInfo & productionCertInfo) { DARABONBA_PTR_SET_VALUE(productionCertInfo_, productionCertInfo) };
    inline CheckCertificateResponseBody& setProductionCertInfo(CheckCertificateResponseBodyProductionCertInfo && productionCertInfo) { DARABONBA_PTR_SET_RVALUE(productionCertInfo_, productionCertInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> android_ = nullptr;
    std::shared_ptr<CheckCertificateResponseBodyDevelopmentCertInfo> developmentCertInfo_ = nullptr;
    std::shared_ptr<bool> IOS_ = nullptr;
    std::shared_ptr<CheckCertificateResponseBodyProductionCertInfo> productionCertInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
