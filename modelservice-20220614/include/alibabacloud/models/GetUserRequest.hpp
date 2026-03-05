// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class GetUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
    };
    GetUserRequest() = default ;
    GetUserRequest(const GetUserRequest &) = default ;
    GetUserRequest(GetUserRequest &&) = default ;
    GetUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserRequest() = default ;
    GetUserRequest& operator=(const GetUserRequest &) = default ;
    GetUserRequest& operator=(GetUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneType_ == nullptr; };
    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline GetUserRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


  protected:
    shared_ptr<string> sceneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
