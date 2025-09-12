// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODYRESOURCEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODYRESOURCEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2StreamEngineInfoResponseBodyResourceGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(JmIpList, jmIpList_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(SgIpList, sgIpList_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(JmIpList, jmIpList_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(SgIpList, sgIpList_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList() = default ;
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList(const GetLindormV2StreamEngineInfoResponseBodyResourceGroupList &) = default ;
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList(GetLindormV2StreamEngineInfoResponseBodyResourceGroupList &&) = default ;
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2StreamEngineInfoResponseBodyResourceGroupList() = default ;
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& operator=(const GetLindormV2StreamEngineInfoResponseBodyResourceGroupList &) = default ;
    GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& operator=(GetLindormV2StreamEngineInfoResponseBodyResourceGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jmIpList_ != nullptr
        && this->quantity_ != nullptr && this->resourceGroupName_ != nullptr && this->sgIpList_ != nullptr && this->spec_ != nullptr && this->specId_ != nullptr
        && this->status_ != nullptr; };
    // jmIpList Field Functions 
    bool hasJmIpList() const { return this->jmIpList_ != nullptr;};
    void deleteJmIpList() { this->jmIpList_ = nullptr;};
    inline const vector<string> & jmIpList() const { DARABONBA_PTR_GET_CONST(jmIpList_, vector<string>) };
    inline vector<string> jmIpList() { DARABONBA_PTR_GET(jmIpList_, vector<string>) };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setJmIpList(const vector<string> & jmIpList) { DARABONBA_PTR_SET_VALUE(jmIpList_, jmIpList) };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setJmIpList(vector<string> && jmIpList) { DARABONBA_PTR_SET_RVALUE(jmIpList_, jmIpList) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // sgIpList Field Functions 
    bool hasSgIpList() const { return this->sgIpList_ != nullptr;};
    void deleteSgIpList() { this->sgIpList_ = nullptr;};
    inline const vector<string> & sgIpList() const { DARABONBA_PTR_GET_CONST(sgIpList_, vector<string>) };
    inline vector<string> sgIpList() { DARABONBA_PTR_GET(sgIpList_, vector<string>) };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setSgIpList(const vector<string> & sgIpList) { DARABONBA_PTR_SET_VALUE(sgIpList_, sgIpList) };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setSgIpList(vector<string> && sgIpList) { DARABONBA_PTR_SET_RVALUE(sgIpList_, sgIpList) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLindormV2StreamEngineInfoResponseBodyResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> jmIpList_ = nullptr;
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<vector<string>> sgIpList_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> specId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
