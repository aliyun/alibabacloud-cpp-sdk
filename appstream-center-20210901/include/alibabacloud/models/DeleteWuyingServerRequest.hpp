// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    DeleteWuyingServerRequest() = default ;
    DeleteWuyingServerRequest(const DeleteWuyingServerRequest &) = default ;
    DeleteWuyingServerRequest(DeleteWuyingServerRequest &&) = default ;
    DeleteWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWuyingServerRequest() = default ;
    DeleteWuyingServerRequest& operator=(const DeleteWuyingServerRequest &) = default ;
    DeleteWuyingServerRequest& operator=(DeleteWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wuyingServerId_ == nullptr; };
    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string wuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline DeleteWuyingServerRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // The ID of the workstation.
    // 
    // This parameter is required.
    std::shared_ptr<string> wuyingServerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
