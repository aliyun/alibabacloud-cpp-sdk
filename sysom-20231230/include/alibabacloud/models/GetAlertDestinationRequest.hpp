// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    GetAlertDestinationRequest() = default ;
    GetAlertDestinationRequest(const GetAlertDestinationRequest &) = default ;
    GetAlertDestinationRequest(GetAlertDestinationRequest &&) = default ;
    GetAlertDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertDestinationRequest() = default ;
    GetAlertDestinationRequest& operator=(const GetAlertDestinationRequest &) = default ;
    GetAlertDestinationRequest& operator=(GetAlertDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline GetAlertDestinationRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<int32_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
