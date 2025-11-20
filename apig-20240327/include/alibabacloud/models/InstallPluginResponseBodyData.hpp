// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstallPluginResponseBodyDataInstallPluginResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InstallPluginResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPluginResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(installPluginResults, installPluginResults_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPluginResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(installPluginResults, installPluginResults_);
    };
    InstallPluginResponseBodyData() = default ;
    InstallPluginResponseBodyData(const InstallPluginResponseBodyData &) = default ;
    InstallPluginResponseBodyData(InstallPluginResponseBodyData &&) = default ;
    InstallPluginResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPluginResponseBodyData() = default ;
    InstallPluginResponseBodyData& operator=(const InstallPluginResponseBodyData &) = default ;
    InstallPluginResponseBodyData& operator=(InstallPluginResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installPluginResults_ == nullptr; };
    // installPluginResults Field Functions 
    bool hasInstallPluginResults() const { return this->installPluginResults_ != nullptr;};
    void deleteInstallPluginResults() { this->installPluginResults_ = nullptr;};
    inline const vector<Models::InstallPluginResponseBodyDataInstallPluginResults> & installPluginResults() const { DARABONBA_PTR_GET_CONST(installPluginResults_, vector<Models::InstallPluginResponseBodyDataInstallPluginResults>) };
    inline vector<Models::InstallPluginResponseBodyDataInstallPluginResults> installPluginResults() { DARABONBA_PTR_GET(installPluginResults_, vector<Models::InstallPluginResponseBodyDataInstallPluginResults>) };
    inline InstallPluginResponseBodyData& setInstallPluginResults(const vector<Models::InstallPluginResponseBodyDataInstallPluginResults> & installPluginResults) { DARABONBA_PTR_SET_VALUE(installPluginResults_, installPluginResults) };
    inline InstallPluginResponseBodyData& setInstallPluginResults(vector<Models::InstallPluginResponseBodyDataInstallPluginResults> && installPluginResults) { DARABONBA_PTR_SET_RVALUE(installPluginResults_, installPluginResults) };


  protected:
    // The installation result.
    std::shared_ptr<vector<Models::InstallPluginResponseBodyDataInstallPluginResults>> installPluginResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
