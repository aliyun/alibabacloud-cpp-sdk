// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODYCONFIGIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODYCONFIGIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListUserCustomLogConfigResponseBodyConfigIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCustomLogConfigResponseBodyConfigIds& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCustomLogConfigResponseBodyConfigIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    ListUserCustomLogConfigResponseBodyConfigIds() = default ;
    ListUserCustomLogConfigResponseBodyConfigIds(const ListUserCustomLogConfigResponseBodyConfigIds &) = default ;
    ListUserCustomLogConfigResponseBodyConfigIds(ListUserCustomLogConfigResponseBodyConfigIds &&) = default ;
    ListUserCustomLogConfigResponseBodyConfigIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCustomLogConfigResponseBodyConfigIds() = default ;
    ListUserCustomLogConfigResponseBodyConfigIds& operator=(const ListUserCustomLogConfigResponseBodyConfigIds &) = default ;
    ListUserCustomLogConfigResponseBodyConfigIds& operator=(ListUserCustomLogConfigResponseBodyConfigIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline const vector<string> & configId() const { DARABONBA_PTR_GET_CONST(configId_, vector<string>) };
    inline vector<string> configId() { DARABONBA_PTR_GET(configId_, vector<string>) };
    inline ListUserCustomLogConfigResponseBodyConfigIds& setConfigId(const vector<string> & configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };
    inline ListUserCustomLogConfigResponseBodyConfigIds& setConfigId(vector<string> && configId) { DARABONBA_PTR_SET_RVALUE(configId_, configId) };


  protected:
    std::shared_ptr<vector<string>> configId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
