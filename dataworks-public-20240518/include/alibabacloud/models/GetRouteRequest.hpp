// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetRouteRequest() = default ;
    GetRouteRequest(const GetRouteRequest &) = default ;
    GetRouteRequest(GetRouteRequest &&) = default ;
    GetRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRouteRequest() = default ;
    GetRouteRequest& operator=(const GetRouteRequest &) = default ;
    GetRouteRequest& operator=(GetRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRouteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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
