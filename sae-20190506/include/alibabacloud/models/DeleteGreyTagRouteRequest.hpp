// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGREYTAGROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGREYTAGROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteGreyTagRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    DeleteGreyTagRouteRequest() = default ;
    DeleteGreyTagRouteRequest(const DeleteGreyTagRouteRequest &) = default ;
    DeleteGreyTagRouteRequest(DeleteGreyTagRouteRequest &&) = default ;
    DeleteGreyTagRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGreyTagRouteRequest() = default ;
    DeleteGreyTagRouteRequest& operator=(const DeleteGreyTagRouteRequest &) = default ;
    DeleteGreyTagRouteRequest& operator=(DeleteGreyTagRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->greyTagRouteId_ != nullptr; };
    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t greyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline DeleteGreyTagRouteRequest& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


  protected:
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> greyTagRouteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
