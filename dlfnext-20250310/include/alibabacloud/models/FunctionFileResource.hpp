// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONFILERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONFILERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FunctionFileResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionFileResource& obj) { 
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionFileResource& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(uri, uri_);
    };
    FunctionFileResource() = default ;
    FunctionFileResource(const FunctionFileResource &) = default ;
    FunctionFileResource(FunctionFileResource &&) = default ;
    FunctionFileResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionFileResource() = default ;
    FunctionFileResource& operator=(const FunctionFileResource &) = default ;
    FunctionFileResource& operator=(FunctionFileResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && return this->uri_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline FunctionFileResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline FunctionFileResource& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
