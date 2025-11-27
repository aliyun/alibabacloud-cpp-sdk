// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTSDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTSDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonResponseBodyDataEnvironmentsDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyDataEnvironmentsDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(clusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyDataEnvironmentsDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterTypes, clusterTypes_);
      DARABONBA_PTR_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    GetAddonResponseBodyDataEnvironmentsDependencies() = default ;
    GetAddonResponseBodyDataEnvironmentsDependencies(const GetAddonResponseBodyDataEnvironmentsDependencies &) = default ;
    GetAddonResponseBodyDataEnvironmentsDependencies(GetAddonResponseBodyDataEnvironmentsDependencies &&) = default ;
    GetAddonResponseBodyDataEnvironmentsDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyDataEnvironmentsDependencies() = default ;
    GetAddonResponseBodyDataEnvironmentsDependencies& operator=(const GetAddonResponseBodyDataEnvironmentsDependencies &) = default ;
    GetAddonResponseBodyDataEnvironmentsDependencies& operator=(GetAddonResponseBodyDataEnvironmentsDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterTypes_ == nullptr
        && return this->features_ == nullptr && return this->services_ == nullptr; };
    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<string> & clusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<string>) };
    inline vector<string> clusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<string>) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setClusterTypes(const vector<string> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setClusterTypes(vector<string> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const map<string, bool> & features() const { DARABONBA_PTR_GET_CONST(features_, map<string, bool>) };
    inline map<string, bool> features() { DARABONBA_PTR_GET(features_, map<string, bool>) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setFeatures(const map<string, bool> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setFeatures(map<string, bool> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<string> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
    inline vector<string> services() { DARABONBA_PTR_GET(services_, vector<string>) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetAddonResponseBodyDataEnvironmentsDependencies& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<vector<string>> clusterTypes_ = nullptr;
    std::shared_ptr<map<string, bool>> features_ = nullptr;
    std::shared_ptr<vector<string>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
