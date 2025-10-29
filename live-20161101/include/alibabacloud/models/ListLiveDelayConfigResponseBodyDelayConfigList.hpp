// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODYDELAYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODYDELAYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveDelayConfigResponseBodyDelayConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveDelayConfigResponseBodyDelayConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(DelayConfig, delayConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveDelayConfigResponseBodyDelayConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayConfig, delayConfig_);
    };
    ListLiveDelayConfigResponseBodyDelayConfigList() = default ;
    ListLiveDelayConfigResponseBodyDelayConfigList(const ListLiveDelayConfigResponseBodyDelayConfigList &) = default ;
    ListLiveDelayConfigResponseBodyDelayConfigList(ListLiveDelayConfigResponseBodyDelayConfigList &&) = default ;
    ListLiveDelayConfigResponseBodyDelayConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveDelayConfigResponseBodyDelayConfigList() = default ;
    ListLiveDelayConfigResponseBodyDelayConfigList& operator=(const ListLiveDelayConfigResponseBodyDelayConfigList &) = default ;
    ListLiveDelayConfigResponseBodyDelayConfigList& operator=(ListLiveDelayConfigResponseBodyDelayConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayConfig_ == nullptr; };
    // delayConfig Field Functions 
    bool hasDelayConfig() const { return this->delayConfig_ != nullptr;};
    void deleteDelayConfig() { this->delayConfig_ = nullptr;};
    inline const vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig> & delayConfig() const { DARABONBA_PTR_GET_CONST(delayConfig_, vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig>) };
    inline vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig> delayConfig() { DARABONBA_PTR_GET(delayConfig_, vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig>) };
    inline ListLiveDelayConfigResponseBodyDelayConfigList& setDelayConfig(const vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig> & delayConfig) { DARABONBA_PTR_SET_VALUE(delayConfig_, delayConfig) };
    inline ListLiveDelayConfigResponseBodyDelayConfigList& setDelayConfig(vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig> && delayConfig) { DARABONBA_PTR_SET_RVALUE(delayConfig_, delayConfig) };


  protected:
    std::shared_ptr<vector<Models::ListLiveDelayConfigResponseBodyDelayConfigListDelayConfig>> delayConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
