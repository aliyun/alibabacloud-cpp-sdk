// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONCONFIGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONCONFIGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProvisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListProvisionConfigsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionConfigsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(provisionConfigs, provisionConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionConfigsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(provisionConfigs, provisionConfigs_);
    };
    ListProvisionConfigsOutput() = default ;
    ListProvisionConfigsOutput(const ListProvisionConfigsOutput &) = default ;
    ListProvisionConfigsOutput(ListProvisionConfigsOutput &&) = default ;
    ListProvisionConfigsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionConfigsOutput() = default ;
    ListProvisionConfigsOutput& operator=(const ListProvisionConfigsOutput &) = default ;
    ListProvisionConfigsOutput& operator=(ListProvisionConfigsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->provisionConfigs_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProvisionConfigsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // provisionConfigs Field Functions 
    bool hasProvisionConfigs() const { return this->provisionConfigs_ != nullptr;};
    void deleteProvisionConfigs() { this->provisionConfigs_ = nullptr;};
    inline const vector<ProvisionConfig> & provisionConfigs() const { DARABONBA_PTR_GET_CONST(provisionConfigs_, vector<ProvisionConfig>) };
    inline vector<ProvisionConfig> provisionConfigs() { DARABONBA_PTR_GET(provisionConfigs_, vector<ProvisionConfig>) };
    inline ListProvisionConfigsOutput& setProvisionConfigs(const vector<ProvisionConfig> & provisionConfigs) { DARABONBA_PTR_SET_VALUE(provisionConfigs_, provisionConfigs) };
    inline ListProvisionConfigsOutput& setProvisionConfigs(vector<ProvisionConfig> && provisionConfigs) { DARABONBA_PTR_SET_RVALUE(provisionConfigs_, provisionConfigs) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ProvisionConfig>> provisionConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
