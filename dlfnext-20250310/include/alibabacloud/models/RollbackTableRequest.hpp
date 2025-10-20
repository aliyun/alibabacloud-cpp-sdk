// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FullInstant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class RollbackTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instant, instant_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instant, instant_);
    };
    RollbackTableRequest() = default ;
    RollbackTableRequest(const RollbackTableRequest &) = default ;
    RollbackTableRequest(RollbackTableRequest &&) = default ;
    RollbackTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackTableRequest() = default ;
    RollbackTableRequest& operator=(const RollbackTableRequest &) = default ;
    RollbackTableRequest& operator=(RollbackTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instant_ == nullptr; };
    // instant Field Functions 
    bool hasInstant() const { return this->instant_ != nullptr;};
    void deleteInstant() { this->instant_ = nullptr;};
    inline const FullInstant & instant() const { DARABONBA_PTR_GET_CONST(instant_, FullInstant) };
    inline FullInstant instant() { DARABONBA_PTR_GET(instant_, FullInstant) };
    inline RollbackTableRequest& setInstant(const FullInstant & instant) { DARABONBA_PTR_SET_VALUE(instant_, instant) };
    inline RollbackTableRequest& setInstant(FullInstant && instant) { DARABONBA_PTR_SET_RVALUE(instant_, instant) };


  protected:
    std::shared_ptr<FullInstant> instant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
