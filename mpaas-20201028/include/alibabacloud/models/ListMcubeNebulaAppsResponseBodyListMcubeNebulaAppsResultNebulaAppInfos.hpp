// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODYLISTMCUBENEBULAAPPSRESULTNEBULAAPPINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODYLISTMCUBENEBULAAPPSRESULTNEBULAAPPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& obj) { 
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
    };
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos() = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos(const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos &) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos(ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos &&) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos() = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& operator=(const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos &) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& operator=(ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h5Id_ == nullptr
        && return this->h5Name_ == nullptr; };
    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


  protected:
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
