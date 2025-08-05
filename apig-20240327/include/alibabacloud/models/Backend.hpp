// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKEND_HPP_
#define ALIBABACLOUD_MODELS_BACKEND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BackendServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class Backend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Backend& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, Backend& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    Backend() = default ;
    Backend(const Backend &) = default ;
    Backend(Backend &&) = default ;
    Backend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Backend() = default ;
    Backend& operator=(const Backend &) = default ;
    Backend& operator=(Backend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scene_ != nullptr
        && this->services_ != nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline Backend& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<BackendServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<BackendServices>) };
    inline vector<BackendServices> services() { DARABONBA_PTR_GET(services_, vector<BackendServices>) };
    inline Backend& setServices(const vector<BackendServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline Backend& setServices(vector<BackendServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<BackendServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
