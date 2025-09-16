// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONLINECONFIGSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTONLINECONFIGSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListOnlineConfigsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnlineConfigsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnlineConfigsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
    };
    ListOnlineConfigsResponseBodyResult() = default ;
    ListOnlineConfigsResponseBodyResult(const ListOnlineConfigsResponseBodyResult &) = default ;
    ListOnlineConfigsResponseBodyResult(ListOnlineConfigsResponseBodyResult &&) = default ;
    ListOnlineConfigsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnlineConfigsResponseBodyResult() = default ;
    ListOnlineConfigsResponseBodyResult& operator=(const ListOnlineConfigsResponseBodyResult &) = default ;
    ListOnlineConfigsResponseBodyResult& operator=(ListOnlineConfigsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->indexName_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListOnlineConfigsResponseBodyResult& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListOnlineConfigsResponseBodyResult& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


  protected:
    // The configuration information
    std::shared_ptr<string> config_ = nullptr;
    // The name of the index
    std::shared_ptr<string> indexName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
