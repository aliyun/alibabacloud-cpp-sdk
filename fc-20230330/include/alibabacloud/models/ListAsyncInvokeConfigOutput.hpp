// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCINVOKECONFIGOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCINVOKECONFIGOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListAsyncInvokeConfigOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncInvokeConfigOutput& obj) { 
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncInvokeConfigOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListAsyncInvokeConfigOutput() = default ;
    ListAsyncInvokeConfigOutput(const ListAsyncInvokeConfigOutput &) = default ;
    ListAsyncInvokeConfigOutput(ListAsyncInvokeConfigOutput &&) = default ;
    ListAsyncInvokeConfigOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncInvokeConfigOutput() = default ;
    ListAsyncInvokeConfigOutput& operator=(const ListAsyncInvokeConfigOutput &) = default ;
    ListAsyncInvokeConfigOutput& operator=(ListAsyncInvokeConfigOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr
        && return this->nextToken_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<AsyncConfig> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<AsyncConfig>) };
    inline vector<AsyncConfig> configs() { DARABONBA_PTR_GET(configs_, vector<AsyncConfig>) };
    inline ListAsyncInvokeConfigOutput& setConfigs(const vector<AsyncConfig> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListAsyncInvokeConfigOutput& setConfigs(vector<AsyncConfig> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAsyncInvokeConfigOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<AsyncConfig>> configs_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
