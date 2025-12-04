// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMSEAPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMSEAPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& obj) { 
      DARABONBA_PTR_TO_JSON(WebserverAddress, webserverAddress_);
      DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(WebserverAddress, webserverAddress_);
      DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
    };
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig(const DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig(DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig &&) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& operator=(const DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& operator=(DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webserverAddress_ == nullptr
        && return this->webserverSpecName_ == nullptr; };
    // webserverAddress Field Functions 
    bool hasWebserverAddress() const { return this->webserverAddress_ != nullptr;};
    void deleteWebserverAddress() { this->webserverAddress_ = nullptr;};
    inline string webserverAddress() const { DARABONBA_PTR_GET_DEFAULT(webserverAddress_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& setWebserverAddress(string webserverAddress) { DARABONBA_PTR_SET_VALUE(webserverAddress_, webserverAddress) };


    // webserverSpecName Field Functions 
    bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
    void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
    inline string webserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


  protected:
    std::shared_ptr<string> webserverAddress_ = nullptr;
    std::shared_ptr<string> webserverSpecName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
