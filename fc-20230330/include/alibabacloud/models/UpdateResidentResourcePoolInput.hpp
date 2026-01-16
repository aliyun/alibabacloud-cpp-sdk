// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESIDENTRESOURCEPOOLINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESIDENTRESOURCEPOOLINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateResidentResourcePoolInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResidentResourcePoolInput& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(useScaling, useScaling_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResidentResourcePoolInput& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(useScaling, useScaling_);
    };
    UpdateResidentResourcePoolInput() = default ;
    UpdateResidentResourcePoolInput(const UpdateResidentResourcePoolInput &) = default ;
    UpdateResidentResourcePoolInput(UpdateResidentResourcePoolInput &&) = default ;
    UpdateResidentResourcePoolInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResidentResourcePoolInput() = default ;
    UpdateResidentResourcePoolInput& operator=(const UpdateResidentResourcePoolInput &) = default ;
    UpdateResidentResourcePoolInput& operator=(UpdateResidentResourcePoolInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->useScaling_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResidentResourcePoolInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // useScaling Field Functions 
    bool hasUseScaling() const { return this->useScaling_ != nullptr;};
    void deleteUseScaling() { this->useScaling_ = nullptr;};
    inline bool getUseScaling() const { DARABONBA_PTR_GET_DEFAULT(useScaling_, false) };
    inline UpdateResidentResourcePoolInput& setUseScaling(bool useScaling) { DARABONBA_PTR_SET_VALUE(useScaling_, useScaling) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<bool> useScaling_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
