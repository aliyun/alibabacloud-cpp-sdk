// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTCHANGEORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ABORTCHANGEORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AbortChangeOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, AbortChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    AbortChangeOrderResponseBodyData() = default ;
    AbortChangeOrderResponseBodyData(const AbortChangeOrderResponseBodyData &) = default ;
    AbortChangeOrderResponseBodyData(AbortChangeOrderResponseBodyData &&) = default ;
    AbortChangeOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortChangeOrderResponseBodyData() = default ;
    AbortChangeOrderResponseBodyData& operator=(const AbortChangeOrderResponseBodyData &) = default ;
    AbortChangeOrderResponseBodyData& operator=(AbortChangeOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline AbortChangeOrderResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The ID of the change process.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
