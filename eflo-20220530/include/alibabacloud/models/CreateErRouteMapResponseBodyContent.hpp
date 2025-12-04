// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERROUTEMAPRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEERROUTEMAPRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErRouteMapResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErRouteMapResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErRouteMapResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
    };
    CreateErRouteMapResponseBodyContent() = default ;
    CreateErRouteMapResponseBodyContent(const CreateErRouteMapResponseBodyContent &) = default ;
    CreateErRouteMapResponseBodyContent(CreateErRouteMapResponseBodyContent &&) = default ;
    CreateErRouteMapResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErRouteMapResponseBodyContent() = default ;
    CreateErRouteMapResponseBodyContent& operator=(const CreateErRouteMapResponseBodyContent &) = default ;
    CreateErRouteMapResponseBodyContent& operator=(CreateErRouteMapResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erRouteMapId_ == nullptr; };
    // erRouteMapId Field Functions 
    bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
    void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
    inline string erRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
    inline CreateErRouteMapResponseBodyContent& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


  protected:
    // routing policy ID
    std::shared_ptr<string> erRouteMapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
