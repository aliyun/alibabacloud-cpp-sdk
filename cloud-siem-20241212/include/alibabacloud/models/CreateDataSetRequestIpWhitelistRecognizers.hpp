// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUESTIPWHITELISTRECOGNIZERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUESTIPWHITELISTRECOGNIZERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSetRequestIpWhitelistRecognizers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSetRequestIpWhitelistRecognizers& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
      DARABONBA_PTR_TO_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
      DARABONBA_PTR_TO_JSON(RecognizeScope, recognizeScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSetRequestIpWhitelistRecognizers& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
      DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
      DARABONBA_PTR_FROM_JSON(RecognizeScope, recognizeScope_);
    };
    CreateDataSetRequestIpWhitelistRecognizers() = default ;
    CreateDataSetRequestIpWhitelistRecognizers(const CreateDataSetRequestIpWhitelistRecognizers &) = default ;
    CreateDataSetRequestIpWhitelistRecognizers(CreateDataSetRequestIpWhitelistRecognizers &&) = default ;
    CreateDataSetRequestIpWhitelistRecognizers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSetRequestIpWhitelistRecognizers() = default ;
    CreateDataSetRequestIpWhitelistRecognizers& operator=(const CreateDataSetRequestIpWhitelistRecognizers &) = default ;
    CreateDataSetRequestIpWhitelistRecognizers& operator=(CreateDataSetRequestIpWhitelistRecognizers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRecognizeStatus_ == nullptr
        && return this->ipWhitelistRecognizerType_ == nullptr && return this->recognizeScope_ == nullptr; };
    // autoRecognizeStatus Field Functions 
    bool hasAutoRecognizeStatus() const { return this->autoRecognizeStatus_ != nullptr;};
    void deleteAutoRecognizeStatus() { this->autoRecognizeStatus_ = nullptr;};
    inline string autoRecognizeStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRecognizeStatus_, "") };
    inline CreateDataSetRequestIpWhitelistRecognizers& setAutoRecognizeStatus(string autoRecognizeStatus) { DARABONBA_PTR_SET_VALUE(autoRecognizeStatus_, autoRecognizeStatus) };


    // ipWhitelistRecognizerType Field Functions 
    bool hasIpWhitelistRecognizerType() const { return this->ipWhitelistRecognizerType_ != nullptr;};
    void deleteIpWhitelistRecognizerType() { this->ipWhitelistRecognizerType_ = nullptr;};
    inline string ipWhitelistRecognizerType() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelistRecognizerType_, "") };
    inline CreateDataSetRequestIpWhitelistRecognizers& setIpWhitelistRecognizerType(string ipWhitelistRecognizerType) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizerType_, ipWhitelistRecognizerType) };


    // recognizeScope Field Functions 
    bool hasRecognizeScope() const { return this->recognizeScope_ != nullptr;};
    void deleteRecognizeScope() { this->recognizeScope_ = nullptr;};
    inline string recognizeScope() const { DARABONBA_PTR_GET_DEFAULT(recognizeScope_, "") };
    inline CreateDataSetRequestIpWhitelistRecognizers& setRecognizeScope(string recognizeScope) { DARABONBA_PTR_SET_VALUE(recognizeScope_, recognizeScope) };


  protected:
    std::shared_ptr<string> autoRecognizeStatus_ = nullptr;
    std::shared_ptr<string> ipWhitelistRecognizerType_ = nullptr;
    std::shared_ptr<string> recognizeScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
