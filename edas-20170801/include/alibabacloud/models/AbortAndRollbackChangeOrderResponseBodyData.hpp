// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTANDROLLBACKCHANGEORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ABORTANDROLLBACKCHANGEORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AbortAndRollbackChangeOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortAndRollbackChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, AbortAndRollbackChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    AbortAndRollbackChangeOrderResponseBodyData() = default ;
    AbortAndRollbackChangeOrderResponseBodyData(const AbortAndRollbackChangeOrderResponseBodyData &) = default ;
    AbortAndRollbackChangeOrderResponseBodyData(AbortAndRollbackChangeOrderResponseBodyData &&) = default ;
    AbortAndRollbackChangeOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortAndRollbackChangeOrderResponseBodyData() = default ;
    AbortAndRollbackChangeOrderResponseBodyData& operator=(const AbortAndRollbackChangeOrderResponseBodyData &) = default ;
    AbortAndRollbackChangeOrderResponseBodyData& operator=(AbortAndRollbackChangeOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline AbortAndRollbackChangeOrderResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The ID of the change process.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
