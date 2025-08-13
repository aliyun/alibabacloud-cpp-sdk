// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(apiGroupId, apiGroupId_);
      DARABONBA_PTR_TO_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(apiGroupId, apiGroupId_);
      DARABONBA_PTR_FROM_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeApisRequest() = default ;
    DescribeApisRequest(const DescribeApisRequest &) = default ;
    DescribeApisRequest(DescribeApisRequest &&) = default ;
    DescribeApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisRequest() = default ;
    DescribeApisRequest& operator=(const DescribeApisRequest &) = default ;
    DescribeApisRequest& operator=(DescribeApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->apiGroupId_ != nullptr && this->apiRegionId_ != nullptr && this->apiType_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeApisRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // apiGroupId Field Functions 
    bool hasApiGroupId() const { return this->apiGroupId_ != nullptr;};
    void deleteApiGroupId() { this->apiGroupId_ = nullptr;};
    inline string apiGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGroupId_, "") };
    inline DescribeApisRequest& setApiGroupId(string apiGroupId) { DARABONBA_PTR_SET_VALUE(apiGroupId_, apiGroupId) };


    // apiRegionId Field Functions 
    bool hasApiRegionId() const { return this->apiRegionId_ != nullptr;};
    void deleteApiRegionId() { this->apiRegionId_ = nullptr;};
    inline string apiRegionId() const { DARABONBA_PTR_GET_DEFAULT(apiRegionId_, "") };
    inline DescribeApisRequest& setApiRegionId(string apiRegionId) { DARABONBA_PTR_SET_VALUE(apiRegionId_, apiRegionId) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline DescribeApisRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeApisRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // API group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiGroupId_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiRegionId_ = nullptr;
    // API type.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiType_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
