// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sConfigMapsResponseBodyResultConfigMaps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sConfigMapsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sConfigMapsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMaps, configMaps_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sConfigMapsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMaps, configMaps_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListK8sConfigMapsResponseBodyResult() = default ;
    ListK8sConfigMapsResponseBodyResult(const ListK8sConfigMapsResponseBodyResult &) = default ;
    ListK8sConfigMapsResponseBodyResult(ListK8sConfigMapsResponseBodyResult &&) = default ;
    ListK8sConfigMapsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sConfigMapsResponseBodyResult() = default ;
    ListK8sConfigMapsResponseBodyResult& operator=(const ListK8sConfigMapsResponseBodyResult &) = default ;
    ListK8sConfigMapsResponseBodyResult& operator=(ListK8sConfigMapsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMaps_ == nullptr
        && return this->total_ == nullptr; };
    // configMaps Field Functions 
    bool hasConfigMaps() const { return this->configMaps_ != nullptr;};
    void deleteConfigMaps() { this->configMaps_ = nullptr;};
    inline const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps> & configMaps() const { DARABONBA_PTR_GET_CONST(configMaps_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps>) };
    inline vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps> configMaps() { DARABONBA_PTR_GET(configMaps_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps>) };
    inline ListK8sConfigMapsResponseBodyResult& setConfigMaps(const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps> & configMaps) { DARABONBA_PTR_SET_VALUE(configMaps_, configMaps) };
    inline ListK8sConfigMapsResponseBodyResult& setConfigMaps(vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps> && configMaps) { DARABONBA_PTR_SET_RVALUE(configMaps_, configMaps) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListK8sConfigMapsResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about ConfigMaps.
    std::shared_ptr<vector<Models::ListK8sConfigMapsResponseBodyResultConfigMaps>> configMaps_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
