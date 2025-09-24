// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateConfigsRequestConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
    };
    UpdateConfigsRequest() = default ;
    UpdateConfigsRequest(const UpdateConfigsRequest &) = default ;
    UpdateConfigsRequest(UpdateConfigsRequest &&) = default ;
    UpdateConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigsRequest() = default ;
    UpdateConfigsRequest& operator=(const UpdateConfigsRequest &) = default ;
    UpdateConfigsRequest& operator=(UpdateConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<UpdateConfigsRequestConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<UpdateConfigsRequestConfigs>) };
    inline vector<UpdateConfigsRequestConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<UpdateConfigsRequestConfigs>) };
    inline UpdateConfigsRequest& setConfigs(const vector<UpdateConfigsRequestConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline UpdateConfigsRequest& setConfigs(vector<UpdateConfigsRequestConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


  protected:
    // The list of workspace configurations to update or add.
    std::shared_ptr<vector<UpdateConfigsRequestConfigs>> configs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
