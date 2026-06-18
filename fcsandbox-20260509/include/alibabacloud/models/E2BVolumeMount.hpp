// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BVOLUMEMOUNT_HPP_
#define ALIBABACLOUD_MODELS_E2BVOLUMEMOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BVolumeMount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BVolumeMount& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, E2BVolumeMount& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    E2BVolumeMount() = default ;
    E2BVolumeMount(const E2BVolumeMount &) = default ;
    E2BVolumeMount(E2BVolumeMount &&) = default ;
    E2BVolumeMount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BVolumeMount() = default ;
    E2BVolumeMount& operator=(const E2BVolumeMount &) = default ;
    E2BVolumeMount& operator=(E2BVolumeMount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline E2BVolumeMount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline E2BVolumeMount& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
