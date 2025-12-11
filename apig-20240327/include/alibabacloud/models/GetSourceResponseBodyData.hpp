// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSourceResponseBodyDataK8SSourceInfo.hpp>
#include <alibabacloud/models/GetSourceResponseBodyDataNacosSourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(k8SSourceInfo, k8SSourceInfo_);
      DARABONBA_PTR_TO_JSON(nacosSourceInfo, nacosSourceInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(k8SSourceInfo, k8SSourceInfo_);
      DARABONBA_PTR_FROM_JSON(nacosSourceInfo, nacosSourceInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    GetSourceResponseBodyData() = default ;
    GetSourceResponseBodyData(const GetSourceResponseBodyData &) = default ;
    GetSourceResponseBodyData(GetSourceResponseBodyData &&) = default ;
    GetSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceResponseBodyData() = default ;
    GetSourceResponseBodyData& operator=(const GetSourceResponseBodyData &) = default ;
    GetSourceResponseBodyData& operator=(GetSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && return this->gatewayId_ == nullptr && return this->k8SSourceInfo_ == nullptr && return this->nacosSourceInfo_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->sourceId_ == nullptr && return this->type_ == nullptr && return this->updateTimestamp_ == nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetSourceResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetSourceResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // k8SSourceInfo Field Functions 
    bool hasK8SSourceInfo() const { return this->k8SSourceInfo_ != nullptr;};
    void deleteK8SSourceInfo() { this->k8SSourceInfo_ = nullptr;};
    inline const Models::GetSourceResponseBodyDataK8SSourceInfo & k8SSourceInfo() const { DARABONBA_PTR_GET_CONST(k8SSourceInfo_, Models::GetSourceResponseBodyDataK8SSourceInfo) };
    inline Models::GetSourceResponseBodyDataK8SSourceInfo k8SSourceInfo() { DARABONBA_PTR_GET(k8SSourceInfo_, Models::GetSourceResponseBodyDataK8SSourceInfo) };
    inline GetSourceResponseBodyData& setK8SSourceInfo(const Models::GetSourceResponseBodyDataK8SSourceInfo & k8SSourceInfo) { DARABONBA_PTR_SET_VALUE(k8SSourceInfo_, k8SSourceInfo) };
    inline GetSourceResponseBodyData& setK8SSourceInfo(Models::GetSourceResponseBodyDataK8SSourceInfo && k8SSourceInfo) { DARABONBA_PTR_SET_RVALUE(k8SSourceInfo_, k8SSourceInfo) };


    // nacosSourceInfo Field Functions 
    bool hasNacosSourceInfo() const { return this->nacosSourceInfo_ != nullptr;};
    void deleteNacosSourceInfo() { this->nacosSourceInfo_ = nullptr;};
    inline const Models::GetSourceResponseBodyDataNacosSourceInfo & nacosSourceInfo() const { DARABONBA_PTR_GET_CONST(nacosSourceInfo_, Models::GetSourceResponseBodyDataNacosSourceInfo) };
    inline Models::GetSourceResponseBodyDataNacosSourceInfo nacosSourceInfo() { DARABONBA_PTR_GET(nacosSourceInfo_, Models::GetSourceResponseBodyDataNacosSourceInfo) };
    inline GetSourceResponseBodyData& setNacosSourceInfo(const Models::GetSourceResponseBodyDataNacosSourceInfo & nacosSourceInfo) { DARABONBA_PTR_SET_VALUE(nacosSourceInfo_, nacosSourceInfo) };
    inline GetSourceResponseBodyData& setNacosSourceInfo(Models::GetSourceResponseBodyDataNacosSourceInfo && nacosSourceInfo) { DARABONBA_PTR_SET_RVALUE(nacosSourceInfo_, nacosSourceInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSourceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetSourceResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetSourceResponseBodyData& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSourceResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline GetSourceResponseBodyData& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<Models::GetSourceResponseBodyDataK8SSourceInfo> k8SSourceInfo_ = nullptr;
    std::shared_ptr<Models::GetSourceResponseBodyDataNacosSourceInfo> nacosSourceInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
