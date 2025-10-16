// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTCUSTOMOSSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTCUSTOMOSSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocParserJobRequestCustomOssConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParserJobRequestCustomOssConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobRequestCustomOssConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
    };
    SubmitDocParserJobRequestCustomOssConfig() = default ;
    SubmitDocParserJobRequestCustomOssConfig(const SubmitDocParserJobRequestCustomOssConfig &) = default ;
    SubmitDocParserJobRequestCustomOssConfig(SubmitDocParserJobRequestCustomOssConfig &&) = default ;
    SubmitDocParserJobRequestCustomOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParserJobRequestCustomOssConfig() = default ;
    SubmitDocParserJobRequestCustomOssConfig& operator=(const SubmitDocParserJobRequestCustomOssConfig &) = default ;
    SubmitDocParserJobRequestCustomOssConfig& operator=(SubmitDocParserJobRequestCustomOssConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->stsToken_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline SubmitDocParserJobRequestCustomOssConfig& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline SubmitDocParserJobRequestCustomOssConfig& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // stsToken Field Functions 
    bool hasStsToken() const { return this->stsToken_ != nullptr;};
    void deleteStsToken() { this->stsToken_ = nullptr;};
    inline string stsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
    inline SubmitDocParserJobRequestCustomOssConfig& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> stsToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
