// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPCLIENTINFO_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPCLIENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MobiInfo.hpp>
#include <vector>
#include <alibabacloud/models/AppPluginInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppClientInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppClientInfo& obj) { 
      DARABONBA_PTR_TO_JSON(appEntry, appEntry_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(mobiInfo, mobiInfo_);
      DARABONBA_PTR_TO_JSON(pluginList, pluginList_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(sidebar, sidebar_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppClientInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(appEntry, appEntry_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(mobiInfo, mobiInfo_);
      DARABONBA_PTR_FROM_JSON(pluginList, pluginList_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(sidebar, sidebar_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NeuronAppClientInfo() = default ;
    NeuronAppClientInfo(const NeuronAppClientInfo &) = default ;
    NeuronAppClientInfo(NeuronAppClientInfo &&) = default ;
    NeuronAppClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppClientInfo() = default ;
    NeuronAppClientInfo& operator=(const NeuronAppClientInfo &) = default ;
    NeuronAppClientInfo& operator=(NeuronAppClientInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEntry_ == nullptr
        && this->appId_ == nullptr && this->mobiInfo_ == nullptr && this->pluginList_ == nullptr && this->productId_ == nullptr && this->sidebar_ == nullptr
        && this->version_ == nullptr; };
    // appEntry Field Functions 
    bool hasAppEntry() const { return this->appEntry_ != nullptr;};
    void deleteAppEntry() { this->appEntry_ = nullptr;};
    inline string getAppEntry() const { DARABONBA_PTR_GET_DEFAULT(appEntry_, "") };
    inline NeuronAppClientInfo& setAppEntry(string appEntry) { DARABONBA_PTR_SET_VALUE(appEntry_, appEntry) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppClientInfo& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mobiInfo Field Functions 
    bool hasMobiInfo() const { return this->mobiInfo_ != nullptr;};
    void deleteMobiInfo() { this->mobiInfo_ = nullptr;};
    inline const MobiInfo & getMobiInfo() const { DARABONBA_PTR_GET_CONST(mobiInfo_, MobiInfo) };
    inline MobiInfo getMobiInfo() { DARABONBA_PTR_GET(mobiInfo_, MobiInfo) };
    inline NeuronAppClientInfo& setMobiInfo(const MobiInfo & mobiInfo) { DARABONBA_PTR_SET_VALUE(mobiInfo_, mobiInfo) };
    inline NeuronAppClientInfo& setMobiInfo(MobiInfo && mobiInfo) { DARABONBA_PTR_SET_RVALUE(mobiInfo_, mobiInfo) };


    // pluginList Field Functions 
    bool hasPluginList() const { return this->pluginList_ != nullptr;};
    void deletePluginList() { this->pluginList_ = nullptr;};
    inline const vector<AppPluginInfo> & getPluginList() const { DARABONBA_PTR_GET_CONST(pluginList_, vector<AppPluginInfo>) };
    inline vector<AppPluginInfo> getPluginList() { DARABONBA_PTR_GET(pluginList_, vector<AppPluginInfo>) };
    inline NeuronAppClientInfo& setPluginList(const vector<AppPluginInfo> & pluginList) { DARABONBA_PTR_SET_VALUE(pluginList_, pluginList) };
    inline NeuronAppClientInfo& setPluginList(vector<AppPluginInfo> && pluginList) { DARABONBA_PTR_SET_RVALUE(pluginList_, pluginList) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline NeuronAppClientInfo& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // sidebar Field Functions 
    bool hasSidebar() const { return this->sidebar_ != nullptr;};
    void deleteSidebar() { this->sidebar_ = nullptr;};
    inline string getSidebar() const { DARABONBA_PTR_GET_DEFAULT(sidebar_, "") };
    inline NeuronAppClientInfo& setSidebar(string sidebar) { DARABONBA_PTR_SET_VALUE(sidebar_, sidebar) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronAppClientInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> appEntry_ {};
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<MobiInfo> mobiInfo_ {};
    shared_ptr<vector<AppPluginInfo>> pluginList_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> sidebar_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
