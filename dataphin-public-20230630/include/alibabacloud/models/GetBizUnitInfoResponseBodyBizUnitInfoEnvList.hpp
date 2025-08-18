// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFOENVLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFOENVLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizUnitInfoResponseBodyBizUnitInfoEnvList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizUnitInfoResponseBodyBizUnitInfoEnvList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvName, envName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizUnitInfoResponseBodyBizUnitInfoEnvList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvName, envName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList(const GetBizUnitInfoResponseBodyBizUnitInfoEnvList &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList(GetBizUnitInfoResponseBodyBizUnitInfoEnvList &&) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizUnitInfoResponseBodyBizUnitInfoEnvList() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList& operator=(const GetBizUnitInfoResponseBodyBizUnitInfoEnvList &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoEnvList& operator=(GetBizUnitInfoResponseBodyBizUnitInfoEnvList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->envName_ != nullptr && this->name_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfoEnvList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfoEnvList& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfoEnvList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> envName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
