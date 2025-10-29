// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOVIPCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOVIPCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfoVipConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoVipConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoVipConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    HttpApiPublishRevisionInfoVipConfigs() = default ;
    HttpApiPublishRevisionInfoVipConfigs(const HttpApiPublishRevisionInfoVipConfigs &) = default ;
    HttpApiPublishRevisionInfoVipConfigs(HttpApiPublishRevisionInfoVipConfigs &&) = default ;
    HttpApiPublishRevisionInfoVipConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoVipConfigs() = default ;
    HttpApiPublishRevisionInfoVipConfigs& operator=(const HttpApiPublishRevisionInfoVipConfigs &) = default ;
    HttpApiPublishRevisionInfoVipConfigs& operator=(HttpApiPublishRevisionInfoVipConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoints_ == nullptr
        && return this->match_ == nullptr && return this->weight_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<string> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
    inline vector<string> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
    inline HttpApiPublishRevisionInfoVipConfigs& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline HttpApiPublishRevisionInfoVipConfigs& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpApiBackendMatchConditions & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpApiBackendMatchConditions) };
    inline Models::HttpApiBackendMatchConditions match() { DARABONBA_PTR_GET(match_, Models::HttpApiBackendMatchConditions) };
    inline HttpApiPublishRevisionInfoVipConfigs& setMatch(const Models::HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpApiPublishRevisionInfoVipConfigs& setMatch(Models::HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline HttpApiPublishRevisionInfoVipConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<vector<string>> endpoints_ = nullptr;
    std::shared_ptr<Models::HttpApiBackendMatchConditions> match_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
