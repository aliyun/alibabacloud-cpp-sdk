// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    GetAlertStrategyRequest() = default ;
    GetAlertStrategyRequest(const GetAlertStrategyRequest &) = default ;
    GetAlertStrategyRequest(GetAlertStrategyRequest &&) = default ;
    GetAlertStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertStrategyRequest() = default ;
    GetAlertStrategyRequest& operator=(const GetAlertStrategyRequest &) = default ;
    GetAlertStrategyRequest& operator=(GetAlertStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlertStrategyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
