// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class DeleteAlertStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    DeleteAlertStrategyRequest() = default ;
    DeleteAlertStrategyRequest(const DeleteAlertStrategyRequest &) = default ;
    DeleteAlertStrategyRequest(DeleteAlertStrategyRequest &&) = default ;
    DeleteAlertStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertStrategyRequest() = default ;
    DeleteAlertStrategyRequest& operator=(const DeleteAlertStrategyRequest &) = default ;
    DeleteAlertStrategyRequest& operator=(DeleteAlertStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteAlertStrategyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
