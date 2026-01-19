// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(apiId, apiId_);
      DARABONBA_PTR_TO_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(apiId, apiId_);
      DARABONBA_PTR_FROM_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeApiRequest() = default ;
    DescribeApiRequest(const DescribeApiRequest &) = default ;
    DescribeApiRequest(DescribeApiRequest &&) = default ;
    DescribeApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiRequest() = default ;
    DescribeApiRequest& operator=(const DescribeApiRequest &) = default ;
    DescribeApiRequest& operator=(DescribeApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->apiId_ == nullptr && this->apiRegionId_ == nullptr && this->apiType_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeApiRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiRegionId Field Functions 
    bool hasApiRegionId() const { return this->apiRegionId_ != nullptr;};
    void deleteApiRegionId() { this->apiRegionId_ = nullptr;};
    inline string getApiRegionId() const { DARABONBA_PTR_GET_DEFAULT(apiRegionId_, "") };
    inline DescribeApiRequest& setApiRegionId(string apiRegionId) { DARABONBA_PTR_SET_VALUE(apiRegionId_, apiRegionId) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline DescribeApiRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeApiRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // API unique ID.
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> apiRegionId_ {};
    // API type
    // 
    // This parameter is required.
    shared_ptr<string> apiType_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
