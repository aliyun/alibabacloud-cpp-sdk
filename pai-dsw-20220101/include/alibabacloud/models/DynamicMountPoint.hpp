// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DYNAMICMOUNTPOINT_HPP_
#define ALIBABACLOUD_MODELS_DYNAMICMOUNTPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DynamicMountPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DynamicMountPoint& obj) { 
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
    };
    friend void from_json(const Darabonba::Json& j, DynamicMountPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
    };
    DynamicMountPoint() = default ;
    DynamicMountPoint(const DynamicMountPoint &) = default ;
    DynamicMountPoint(DynamicMountPoint &&) = default ;
    DynamicMountPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DynamicMountPoint() = default ;
    DynamicMountPoint& operator=(const DynamicMountPoint &) = default ;
    DynamicMountPoint& operator=(DynamicMountPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->options_ == nullptr
        && this->rootPath_ == nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DynamicMountPoint& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // rootPath Field Functions 
    bool hasRootPath() const { return this->rootPath_ != nullptr;};
    void deleteRootPath() { this->rootPath_ = nullptr;};
    inline string getRootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
    inline DynamicMountPoint& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


  protected:
    shared_ptr<string> options_ {};
    // This parameter is required.
    shared_ptr<string> rootPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
