// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteRouteRequest() = default ;
    DeleteRouteRequest(const DeleteRouteRequest &) = default ;
    DeleteRouteRequest(DeleteRouteRequest &&) = default ;
    DeleteRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteRequest() = default ;
    DeleteRouteRequest& operator=(const DeleteRouteRequest &) = default ;
    DeleteRouteRequest& operator=(DeleteRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteRouteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The route ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
