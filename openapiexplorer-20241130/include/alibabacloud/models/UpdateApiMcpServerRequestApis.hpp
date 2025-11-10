// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUESTAPIS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUESTAPIS_HPP_
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
  class UpdateApiMcpServerRequestApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiMcpServerRequestApis& obj) { 
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(selectors, selectors_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiMcpServerRequestApis& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(selectors, selectors_);
    };
    UpdateApiMcpServerRequestApis() = default ;
    UpdateApiMcpServerRequestApis(const UpdateApiMcpServerRequestApis &) = default ;
    UpdateApiMcpServerRequestApis(UpdateApiMcpServerRequestApis &&) = default ;
    UpdateApiMcpServerRequestApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiMcpServerRequestApis() = default ;
    UpdateApiMcpServerRequestApis& operator=(const UpdateApiMcpServerRequestApis &) = default ;
    UpdateApiMcpServerRequestApis& operator=(UpdateApiMcpServerRequestApis &&) = default ;
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
    inline UpdateApiMcpServerRequestApis& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline UpdateApiMcpServerRequestApis& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // selectors Field Functions 
    bool hasSelectors() const { return this->selectors_ != nullptr;};
    void deleteSelectors() { this->selectors_ = nullptr;};
    inline const vector<string> & selectors() const { DARABONBA_PTR_GET_CONST(selectors_, vector<string>) };
    inline vector<string> selectors() { DARABONBA_PTR_GET(selectors_, vector<string>) };
    inline UpdateApiMcpServerRequestApis& setSelectors(const vector<string> & selectors) { DARABONBA_PTR_SET_VALUE(selectors_, selectors) };
    inline UpdateApiMcpServerRequestApis& setSelectors(vector<string> && selectors) { DARABONBA_PTR_SET_RVALUE(selectors_, selectors) };


  protected:
    std::shared_ptr<string> apiVersion_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<vector<string>> selectors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
