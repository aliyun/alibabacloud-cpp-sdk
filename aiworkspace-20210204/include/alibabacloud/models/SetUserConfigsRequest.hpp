// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetUserConfigsRequestConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class SetUserConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
    };
    SetUserConfigsRequest() = default ;
    SetUserConfigsRequest(const SetUserConfigsRequest &) = default ;
    SetUserConfigsRequest(SetUserConfigsRequest &&) = default ;
    SetUserConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserConfigsRequest() = default ;
    SetUserConfigsRequest& operator=(const SetUserConfigsRequest &) = default ;
    SetUserConfigsRequest& operator=(SetUserConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<SetUserConfigsRequestConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<SetUserConfigsRequestConfigs>) };
    inline vector<SetUserConfigsRequestConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<SetUserConfigsRequestConfigs>) };
    inline SetUserConfigsRequest& setConfigs(const vector<SetUserConfigsRequestConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline SetUserConfigsRequest& setConfigs(vector<SetUserConfigsRequestConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


  protected:
    // The configurations list.
    std::shared_ptr<vector<SetUserConfigsRequestConfigs>> configs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
