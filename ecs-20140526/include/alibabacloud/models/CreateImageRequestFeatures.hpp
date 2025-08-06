// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUESTFEATURES_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUESTFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImageRequestFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequestFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequestFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
    };
    CreateImageRequestFeatures() = default ;
    CreateImageRequestFeatures(const CreateImageRequestFeatures &) = default ;
    CreateImageRequestFeatures(CreateImageRequestFeatures &&) = default ;
    CreateImageRequestFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageRequestFeatures() = default ;
    CreateImageRequestFeatures& operator=(const CreateImageRequestFeatures &) = default ;
    CreateImageRequestFeatures& operator=(CreateImageRequestFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imdsSupport_ != nullptr; };
    // imdsSupport Field Functions 
    bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
    void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
    inline string imdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
    inline CreateImageRequestFeatures& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


  protected:
    // The image metadata access mode. Valid values:
    // 
    // *   v1: You cannot set the image metadata access mode to security hardening when you create instances from the image.
    // *   v2: You can set the image metadata access mode to security hardening when you create instances from the image.
    // 
    // When you use a snapshot to create instances, the default value is set to 1. If you use an instance to create an image, the value of the ImdsSupport parameter is used by default.
    std::shared_ptr<string> imdsSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
