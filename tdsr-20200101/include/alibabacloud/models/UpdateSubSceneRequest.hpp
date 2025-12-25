// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class UpdateSubSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ViewPoint, viewPoint_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ViewPoint, viewPoint_);
    };
    UpdateSubSceneRequest() = default ;
    UpdateSubSceneRequest(const UpdateSubSceneRequest &) = default ;
    UpdateSubSceneRequest(UpdateSubSceneRequest &&) = default ;
    UpdateSubSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubSceneRequest() = default ;
    UpdateSubSceneRequest& operator=(const UpdateSubSceneRequest &) = default ;
    UpdateSubSceneRequest& operator=(UpdateSubSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->viewPoint_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateSubSceneRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSubSceneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // viewPoint Field Functions 
    bool hasViewPoint() const { return this->viewPoint_ != nullptr;};
    void deleteViewPoint() { this->viewPoint_ = nullptr;};
    inline const vector<double> & viewPoint() const { DARABONBA_PTR_GET_CONST(viewPoint_, vector<double>) };
    inline vector<double> viewPoint() { DARABONBA_PTR_GET(viewPoint_, vector<double>) };
    inline UpdateSubSceneRequest& setViewPoint(const vector<double> & viewPoint) { DARABONBA_PTR_SET_VALUE(viewPoint_, viewPoint) };
    inline UpdateSubSceneRequest& setViewPoint(vector<double> && viewPoint) { DARABONBA_PTR_SET_RVALUE(viewPoint_, viewPoint) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<double>> viewPoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
