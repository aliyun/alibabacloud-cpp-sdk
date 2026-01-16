// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTELASTICCONFIGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTELASTICCONFIGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElasticConfigStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListElasticConfigsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListElasticConfigsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(elasticConfigs, elasticConfigs_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListElasticConfigsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticConfigs, elasticConfigs_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListElasticConfigsOutput() = default ;
    ListElasticConfigsOutput(const ListElasticConfigsOutput &) = default ;
    ListElasticConfigsOutput(ListElasticConfigsOutput &&) = default ;
    ListElasticConfigsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListElasticConfigsOutput() = default ;
    ListElasticConfigsOutput& operator=(const ListElasticConfigsOutput &) = default ;
    ListElasticConfigsOutput& operator=(ListElasticConfigsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticConfigs_ == nullptr
        && this->nextToken_ == nullptr; };
    // elasticConfigs Field Functions 
    bool hasElasticConfigs() const { return this->elasticConfigs_ != nullptr;};
    void deleteElasticConfigs() { this->elasticConfigs_ = nullptr;};
    inline const vector<ElasticConfigStatus> & getElasticConfigs() const { DARABONBA_PTR_GET_CONST(elasticConfigs_, vector<ElasticConfigStatus>) };
    inline vector<ElasticConfigStatus> getElasticConfigs() { DARABONBA_PTR_GET(elasticConfigs_, vector<ElasticConfigStatus>) };
    inline ListElasticConfigsOutput& setElasticConfigs(const vector<ElasticConfigStatus> & elasticConfigs) { DARABONBA_PTR_SET_VALUE(elasticConfigs_, elasticConfigs) };
    inline ListElasticConfigsOutput& setElasticConfigs(vector<ElasticConfigStatus> && elasticConfigs) { DARABONBA_PTR_SET_RVALUE(elasticConfigs_, elasticConfigs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListElasticConfigsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<ElasticConfigStatus>> elasticConfigs_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
