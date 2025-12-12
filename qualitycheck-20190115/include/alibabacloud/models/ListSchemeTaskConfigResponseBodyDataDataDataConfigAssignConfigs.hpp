// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIGASSIGNCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIGASSIGNCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AssignConfig, assignConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignConfig, assignConfig_);
    };
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs(const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs(ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs &&) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& operator=(const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& operator=(ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignConfig_ == nullptr; };
    // assignConfig Field Functions 
    bool hasAssignConfig() const { return this->assignConfig_ != nullptr;};
    void deleteAssignConfig() { this->assignConfig_ = nullptr;};
    inline const vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig> & assignConfig() const { DARABONBA_PTR_GET_CONST(assignConfig_, vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig>) };
    inline vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig> assignConfig() { DARABONBA_PTR_GET(assignConfig_, vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig>) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& setAssignConfig(const vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig> & assignConfig) { DARABONBA_PTR_SET_VALUE(assignConfig_, assignConfig) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs& setAssignConfig(vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig> && assignConfig) { DARABONBA_PTR_SET_RVALUE(assignConfig_, assignConfig) };


  protected:
    std::shared_ptr<vector<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig>> assignConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
