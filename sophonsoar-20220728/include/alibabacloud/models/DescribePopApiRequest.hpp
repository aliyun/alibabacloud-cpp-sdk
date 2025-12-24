// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePopApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePopApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(PopCode, popCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePopApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(PopCode, popCode_);
    };
    DescribePopApiRequest() = default ;
    DescribePopApiRequest(const DescribePopApiRequest &) = default ;
    DescribePopApiRequest(DescribePopApiRequest &&) = default ;
    DescribePopApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePopApiRequest() = default ;
    DescribePopApiRequest& operator=(const DescribePopApiRequest &) = default ;
    DescribePopApiRequest& operator=(DescribePopApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->apiVersion_ == nullptr && return this->popCode_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribePopApiRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribePopApiRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string popCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribePopApiRequest& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


  protected:
    // The operation name of the Alibaba Cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiName_ = nullptr;
    // The version number of the API.
    // 
    // >  You can call the [DescribePopApiVersionList](~~DescribePopApiVersionList~~) operation to query the version number.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The POP code of the Alibaba Cloud service.
    // 
    // >  You can call the [DescribeApiList](~~DescribeApiList~~) operation to query the POP code.
    // 
    // This parameter is required.
    std::shared_ptr<string> popCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
