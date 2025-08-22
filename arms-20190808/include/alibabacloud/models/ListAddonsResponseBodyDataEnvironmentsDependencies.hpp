// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYDATAENVIRONMENTSDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYDATAENVIRONMENTSDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonsResponseBodyDataEnvironmentsDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBodyDataEnvironmentsDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBodyDataEnvironmentsDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    ListAddonsResponseBodyDataEnvironmentsDependencies() = default ;
    ListAddonsResponseBodyDataEnvironmentsDependencies(const ListAddonsResponseBodyDataEnvironmentsDependencies &) = default ;
    ListAddonsResponseBodyDataEnvironmentsDependencies(ListAddonsResponseBodyDataEnvironmentsDependencies &&) = default ;
    ListAddonsResponseBodyDataEnvironmentsDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBodyDataEnvironmentsDependencies() = default ;
    ListAddonsResponseBodyDataEnvironmentsDependencies& operator=(const ListAddonsResponseBodyDataEnvironmentsDependencies &) = default ;
    ListAddonsResponseBodyDataEnvironmentsDependencies& operator=(ListAddonsResponseBodyDataEnvironmentsDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterTypes_ != nullptr
        && this->features_ != nullptr && this->services_ != nullptr; };
    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<string> & clusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<string>) };
    inline vector<string> clusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<string>) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setClusterTypes(const vector<string> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setClusterTypes(vector<string> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const map<string, bool> & features() const { DARABONBA_PTR_GET_CONST(features_, map<string, bool>) };
    inline map<string, bool> features() { DARABONBA_PTR_GET(features_, map<string, bool>) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setFeatures(const map<string, bool> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setFeatures(map<string, bool> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<string> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
    inline vector<string> services() { DARABONBA_PTR_GET(services_, vector<string>) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListAddonsResponseBodyDataEnvironmentsDependencies& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The supported cluster types.
    std::shared_ptr<vector<string>> clusterTypes_ = nullptr;
    // The feature on which the environment depends.
    std::shared_ptr<map<string, bool>> features_ = nullptr;
    // The services.
    std::shared_ptr<vector<string>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
