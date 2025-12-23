// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTSCENERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTSCENERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestSceneResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestSceneResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(online, online_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(traffic, traffic_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestSceneResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(online, online_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(traffic, traffic_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    UpdateABTestSceneResponseBodyResult() = default ;
    UpdateABTestSceneResponseBodyResult(const UpdateABTestSceneResponseBodyResult &) = default ;
    UpdateABTestSceneResponseBodyResult(UpdateABTestSceneResponseBodyResult &&) = default ;
    UpdateABTestSceneResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestSceneResponseBodyResult() = default ;
    UpdateABTestSceneResponseBodyResult& operator=(const UpdateABTestSceneResponseBodyResult &) = default ;
    UpdateABTestSceneResponseBodyResult& operator=(UpdateABTestSceneResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->online_ == nullptr && return this->params_ == nullptr && return this->traffic_ == nullptr
        && return this->updated_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline UpdateABTestSceneResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateABTestSceneResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateABTestSceneResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline UpdateABTestSceneResponseBodyResult& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline UpdateABTestSceneResponseBodyResult& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline UpdateABTestSceneResponseBodyResult& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int32_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
    inline UpdateABTestSceneResponseBodyResult& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline UpdateABTestSceneResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the test scenario was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the test scenario.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the test scenario.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the test. Valid values:
    // 
    // *   true: The test is started.
    // *   false: The test is stopped.
    std::shared_ptr<bool> online_ = nullptr;
    // The parameters of the A/B test.
    Darabonba::Json params_ = nullptr;
    // The percentage of traffic that is allocated to the A/B test. Valid values: 0 to 100.
    std::shared_ptr<int32_t> traffic_ = nullptr;
    // The time when the test scenario was last modified.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
