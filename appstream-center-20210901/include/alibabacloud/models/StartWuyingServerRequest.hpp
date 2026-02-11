// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class StartWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StartWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    StartWuyingServerRequest() = default ;
    StartWuyingServerRequest(const StartWuyingServerRequest &) = default ;
    StartWuyingServerRequest(StartWuyingServerRequest &&) = default ;
    StartWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartWuyingServerRequest() = default ;
    StartWuyingServerRequest& operator=(const StartWuyingServerRequest &) = default ;
    StartWuyingServerRequest& operator=(StartWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && this->wuyingServerIdList_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline StartWuyingServerRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // wuyingServerIdList Field Functions 
    bool hasWuyingServerIdList() const { return this->wuyingServerIdList_ != nullptr;};
    void deleteWuyingServerIdList() { this->wuyingServerIdList_ = nullptr;};
    inline const vector<string> & getWuyingServerIdList() const { DARABONBA_PTR_GET_CONST(wuyingServerIdList_, vector<string>) };
    inline vector<string> getWuyingServerIdList() { DARABONBA_PTR_GET(wuyingServerIdList_, vector<string>) };
    inline StartWuyingServerRequest& setWuyingServerIdList(const vector<string> & wuyingServerIdList) { DARABONBA_PTR_SET_VALUE(wuyingServerIdList_, wuyingServerIdList) };
    inline StartWuyingServerRequest& setWuyingServerIdList(vector<string> && wuyingServerIdList) { DARABONBA_PTR_SET_RVALUE(wuyingServerIdList_, wuyingServerIdList) };


  protected:
    shared_ptr<string> productType_ {};
    // The list of workstation IDs.
    shared_ptr<vector<string>> wuyingServerIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
