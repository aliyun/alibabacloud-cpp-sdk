// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
    };
    ResourceInfo() = default ;
    ResourceInfo(const ResourceInfo &) = default ;
    ResourceInfo(ResourceInfo &&) = default ;
    ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInfo() = default ;
    ResourceInfo& operator=(const ResourceInfo &) = default ;
    ResourceInfo& operator=(ResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
