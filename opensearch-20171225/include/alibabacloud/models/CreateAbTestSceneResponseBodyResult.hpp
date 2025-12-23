// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABTESTSCENERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEABTESTSCENERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateABTestSceneResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABTestSceneResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABTestSceneResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    CreateABTestSceneResponseBodyResult() = default ;
    CreateABTestSceneResponseBodyResult(const CreateABTestSceneResponseBodyResult &) = default ;
    CreateABTestSceneResponseBodyResult(CreateABTestSceneResponseBodyResult &&) = default ;
    CreateABTestSceneResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABTestSceneResponseBodyResult() = default ;
    CreateABTestSceneResponseBodyResult& operator=(const CreateABTestSceneResponseBodyResult &) = default ;
    CreateABTestSceneResponseBodyResult& operator=(CreateABTestSceneResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->updated_ == nullptr && return this->values_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline CreateABTestSceneResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateABTestSceneResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateABTestSceneResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateABTestSceneResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline CreateABTestSceneResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline CreateABTestSceneResponseBodyResult& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline CreateABTestSceneResponseBodyResult& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The time when the test scenario was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the test group.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the A/B test group.
    std::shared_ptr<string> name_ = nullptr;
    // The status. Valid values:
    // 
    // *   0: not in effect
    // *   1: in effect
    std::shared_ptr<int32_t> status_ = nullptr;
    // The time when the test scenario was last updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
    // The ID of the test scenario
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
