// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONCURRENCYCONFIGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTCONCURRENCYCONFIGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConcurrencyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListConcurrencyConfigsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConcurrencyConfigsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListConcurrencyConfigsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListConcurrencyConfigsOutput() = default ;
    ListConcurrencyConfigsOutput(const ListConcurrencyConfigsOutput &) = default ;
    ListConcurrencyConfigsOutput(ListConcurrencyConfigsOutput &&) = default ;
    ListConcurrencyConfigsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConcurrencyConfigsOutput() = default ;
    ListConcurrencyConfigsOutput& operator=(const ListConcurrencyConfigsOutput &) = default ;
    ListConcurrencyConfigsOutput& operator=(ListConcurrencyConfigsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->nextToken_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ConcurrencyConfig> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ConcurrencyConfig>) };
    inline vector<ConcurrencyConfig> configs() { DARABONBA_PTR_GET(configs_, vector<ConcurrencyConfig>) };
    inline ListConcurrencyConfigsOutput& setConfigs(const vector<ConcurrencyConfig> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListConcurrencyConfigsOutput& setConfigs(vector<ConcurrencyConfig> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConcurrencyConfigsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<ConcurrencyConfig>> configs_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
