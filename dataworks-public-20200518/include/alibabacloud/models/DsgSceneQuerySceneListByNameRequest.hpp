// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneQuerySceneListByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneQuerySceneListByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneQuerySceneListByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
    };
    DsgSceneQuerySceneListByNameRequest() = default ;
    DsgSceneQuerySceneListByNameRequest(const DsgSceneQuerySceneListByNameRequest &) = default ;
    DsgSceneQuerySceneListByNameRequest(DsgSceneQuerySceneListByNameRequest &&) = default ;
    DsgSceneQuerySceneListByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneQuerySceneListByNameRequest() = default ;
    DsgSceneQuerySceneListByNameRequest& operator=(const DsgSceneQuerySceneListByNameRequest &) = default ;
    DsgSceneQuerySceneListByNameRequest& operator=(DsgSceneQuerySceneListByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneName_ != nullptr; };
    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DsgSceneQuerySceneListByNameRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


  protected:
    // The name of the data masking scenario. A fuzzy match is performed in the platform based on a keyword to search for the data masking scenario.
    std::shared_ptr<string> sceneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
