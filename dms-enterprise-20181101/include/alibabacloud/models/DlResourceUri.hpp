// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLRESOURCEURI_HPP_
#define ALIBABACLOUD_MODELS_DLRESOURCEURI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLResourceUri : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLResourceUri& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DLResourceUri& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DLResourceUri() = default ;
    DLResourceUri(const DLResourceUri &) = default ;
    DLResourceUri(DLResourceUri &&) = default ;
    DLResourceUri(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLResourceUri() = default ;
    DLResourceUri& operator=(const DLResourceUri &) = default ;
    DLResourceUri& operator=(DLResourceUri &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->uri_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DLResourceUri& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DLResourceUri& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
