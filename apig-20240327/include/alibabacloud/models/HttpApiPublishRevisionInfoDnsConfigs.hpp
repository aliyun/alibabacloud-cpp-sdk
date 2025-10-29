// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFODNSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFODNSCONFIGS_HPP_
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
  class HttpApiPublishRevisionInfoDnsConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoDnsConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(dnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoDnsConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(dnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    HttpApiPublishRevisionInfoDnsConfigs() = default ;
    HttpApiPublishRevisionInfoDnsConfigs(const HttpApiPublishRevisionInfoDnsConfigs &) = default ;
    HttpApiPublishRevisionInfoDnsConfigs(HttpApiPublishRevisionInfoDnsConfigs &&) = default ;
    HttpApiPublishRevisionInfoDnsConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoDnsConfigs() = default ;
    HttpApiPublishRevisionInfoDnsConfigs& operator=(const HttpApiPublishRevisionInfoDnsConfigs &) = default ;
    HttpApiPublishRevisionInfoDnsConfigs& operator=(HttpApiPublishRevisionInfoDnsConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsList_ == nullptr
        && return this->match_ == nullptr && return this->weight_ == nullptr; };
    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const vector<string> & dnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, vector<string>) };
    inline vector<string> dnsList() { DARABONBA_PTR_GET(dnsList_, vector<string>) };
    inline HttpApiPublishRevisionInfoDnsConfigs& setDnsList(const vector<string> & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline HttpApiPublishRevisionInfoDnsConfigs& setDnsList(vector<string> && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpApiBackendMatchConditions & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpApiBackendMatchConditions) };
    inline Models::HttpApiBackendMatchConditions match() { DARABONBA_PTR_GET(match_, Models::HttpApiBackendMatchConditions) };
    inline HttpApiPublishRevisionInfoDnsConfigs& setMatch(const Models::HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpApiPublishRevisionInfoDnsConfigs& setMatch(Models::HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline HttpApiPublishRevisionInfoDnsConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<vector<string>> dnsList_ = nullptr;
    std::shared_ptr<Models::HttpApiBackendMatchConditions> match_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
