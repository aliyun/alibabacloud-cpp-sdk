// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUESTATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUESTATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingInstanceRequestAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingInstanceRequestAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeMediaService, edgeMediaService_);
      DARABONBA_PTR_TO_JSON(InAccess, inAccess_);
      DARABONBA_PTR_TO_JSON(OutAccess, outAccess_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingInstanceRequestAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeMediaService, edgeMediaService_);
      DARABONBA_PTR_FROM_JSON(InAccess, inAccess_);
      DARABONBA_PTR_FROM_JSON(OutAccess, outAccess_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    CreateRenderingInstanceRequestAttributes() = default ;
    CreateRenderingInstanceRequestAttributes(const CreateRenderingInstanceRequestAttributes &) = default ;
    CreateRenderingInstanceRequestAttributes(CreateRenderingInstanceRequestAttributes &&) = default ;
    CreateRenderingInstanceRequestAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingInstanceRequestAttributes() = default ;
    CreateRenderingInstanceRequestAttributes& operator=(const CreateRenderingInstanceRequestAttributes &) = default ;
    CreateRenderingInstanceRequestAttributes& operator=(CreateRenderingInstanceRequestAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edgeMediaService_ == nullptr
        && return this->inAccess_ == nullptr && return this->outAccess_ == nullptr && return this->zone_ == nullptr; };
    // edgeMediaService Field Functions 
    bool hasEdgeMediaService() const { return this->edgeMediaService_ != nullptr;};
    void deleteEdgeMediaService() { this->edgeMediaService_ = nullptr;};
    inline string edgeMediaService() const { DARABONBA_PTR_GET_DEFAULT(edgeMediaService_, "") };
    inline CreateRenderingInstanceRequestAttributes& setEdgeMediaService(string edgeMediaService) { DARABONBA_PTR_SET_VALUE(edgeMediaService_, edgeMediaService) };


    // inAccess Field Functions 
    bool hasInAccess() const { return this->inAccess_ != nullptr;};
    void deleteInAccess() { this->inAccess_ = nullptr;};
    inline string inAccess() const { DARABONBA_PTR_GET_DEFAULT(inAccess_, "") };
    inline CreateRenderingInstanceRequestAttributes& setInAccess(string inAccess) { DARABONBA_PTR_SET_VALUE(inAccess_, inAccess) };


    // outAccess Field Functions 
    bool hasOutAccess() const { return this->outAccess_ != nullptr;};
    void deleteOutAccess() { this->outAccess_ = nullptr;};
    inline string outAccess() const { DARABONBA_PTR_GET_DEFAULT(outAccess_, "") };
    inline CreateRenderingInstanceRequestAttributes& setOutAccess(string outAccess) { DARABONBA_PTR_SET_VALUE(outAccess_, outAccess) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline CreateRenderingInstanceRequestAttributes& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<string> edgeMediaService_ = nullptr;
    std::shared_ptr<string> inAccess_ = nullptr;
    std::shared_ptr<string> outAccess_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
