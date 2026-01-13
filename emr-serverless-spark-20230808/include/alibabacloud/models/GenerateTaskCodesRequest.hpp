// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETASKCODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETASKCODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GenerateTaskCodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTaskCodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(genNum, genNum_);
      DARABONBA_PTR_TO_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTaskCodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(genNum, genNum_);
      DARABONBA_PTR_FROM_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GenerateTaskCodesRequest() = default ;
    GenerateTaskCodesRequest(const GenerateTaskCodesRequest &) = default ;
    GenerateTaskCodesRequest(GenerateTaskCodesRequest &&) = default ;
    GenerateTaskCodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTaskCodesRequest() = default ;
    GenerateTaskCodesRequest& operator=(const GenerateTaskCodesRequest &) = default ;
    GenerateTaskCodesRequest& operator=(GenerateTaskCodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->genNum_ == nullptr
        && this->productNamespace_ == nullptr && this->regionId_ == nullptr; };
    // genNum Field Functions 
    bool hasGenNum() const { return this->genNum_ != nullptr;};
    void deleteGenNum() { this->genNum_ = nullptr;};
    inline int32_t getGenNum() const { DARABONBA_PTR_GET_DEFAULT(genNum_, 0) };
    inline GenerateTaskCodesRequest& setGenNum(int32_t genNum) { DARABONBA_PTR_SET_VALUE(genNum_, genNum) };


    // productNamespace Field Functions 
    bool hasProductNamespace() const { return this->productNamespace_ != nullptr;};
    void deleteProductNamespace() { this->productNamespace_ = nullptr;};
    inline string getProductNamespace() const { DARABONBA_PTR_GET_DEFAULT(productNamespace_, "") };
    inline GenerateTaskCodesRequest& setProductNamespace(string productNamespace) { DARABONBA_PTR_SET_VALUE(productNamespace_, productNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateTaskCodesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> genNum_ {};
    // This parameter is required.
    shared_ptr<string> productNamespace_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
