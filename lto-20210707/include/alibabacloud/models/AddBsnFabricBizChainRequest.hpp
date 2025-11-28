// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBSNFABRICBIZCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBSNFABRICBIZCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddBsnFabricBizChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBsnFabricBizChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserCode, userCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddBsnFabricBizChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserCode, userCode_);
    };
    AddBsnFabricBizChainRequest() = default ;
    AddBsnFabricBizChainRequest(const AddBsnFabricBizChainRequest &) = default ;
    AddBsnFabricBizChainRequest(AddBsnFabricBizChainRequest &&) = default ;
    AddBsnFabricBizChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBsnFabricBizChainRequest() = default ;
    AddBsnFabricBizChainRequest& operator=(const AddBsnFabricBizChainRequest &) = default ;
    AddBsnFabricBizChainRequest& operator=(AddBsnFabricBizChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->name_ == nullptr && return this->nodeList_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->userCode_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline AddBsnFabricBizChainRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddBsnFabricBizChainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline string nodeList() const { DARABONBA_PTR_GET_DEFAULT(nodeList_, "") };
    inline AddBsnFabricBizChainRequest& setNodeList(string nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddBsnFabricBizChainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddBsnFabricBizChainRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userCode Field Functions 
    bool hasUserCode() const { return this->userCode_ != nullptr;};
    void deleteUserCode() { this->userCode_ = nullptr;};
    inline string userCode() const { DARABONBA_PTR_GET_DEFAULT(userCode_, "") };
    inline AddBsnFabricBizChainRequest& setUserCode(string userCode) { DARABONBA_PTR_SET_VALUE(userCode_, userCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
