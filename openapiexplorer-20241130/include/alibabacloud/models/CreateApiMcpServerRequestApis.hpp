// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUESTAPIS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUESTAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerRequestApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerRequestApis& obj) { 
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(selectors, selectors_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerRequestApis& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(selectors, selectors_);
    };
    CreateApiMcpServerRequestApis() = default ;
    CreateApiMcpServerRequestApis(const CreateApiMcpServerRequestApis &) = default ;
    CreateApiMcpServerRequestApis(CreateApiMcpServerRequestApis &&) = default ;
    CreateApiMcpServerRequestApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerRequestApis() = default ;
    CreateApiMcpServerRequestApis& operator=(const CreateApiMcpServerRequestApis &) = default ;
    CreateApiMcpServerRequestApis& operator=(CreateApiMcpServerRequestApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && return this->product_ == nullptr && return this->selectors_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline CreateApiMcpServerRequestApis& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateApiMcpServerRequestApis& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // selectors Field Functions 
    bool hasSelectors() const { return this->selectors_ != nullptr;};
    void deleteSelectors() { this->selectors_ = nullptr;};
    inline const vector<string> & selectors() const { DARABONBA_PTR_GET_CONST(selectors_, vector<string>) };
    inline vector<string> selectors() { DARABONBA_PTR_GET(selectors_, vector<string>) };
    inline CreateApiMcpServerRequestApis& setSelectors(const vector<string> & selectors) { DARABONBA_PTR_SET_VALUE(selectors_, selectors) };
    inline CreateApiMcpServerRequestApis& setSelectors(vector<string> && selectors) { DARABONBA_PTR_SET_RVALUE(selectors_, selectors) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> selectors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
