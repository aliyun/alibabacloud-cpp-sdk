// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTAUTOMODE_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTAUTOMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestAutoMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestAutoMode& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestAutoMode& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    CreateClusterRequestAutoMode() = default ;
    CreateClusterRequestAutoMode(const CreateClusterRequestAutoMode &) = default ;
    CreateClusterRequestAutoMode(CreateClusterRequestAutoMode &&) = default ;
    CreateClusterRequestAutoMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestAutoMode() = default ;
    CreateClusterRequestAutoMode& operator=(const CreateClusterRequestAutoMode &) = default ;
    CreateClusterRequestAutoMode& operator=(CreateClusterRequestAutoMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateClusterRequestAutoMode& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
