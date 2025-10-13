// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class StartApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, StartApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    StartApplicationResponseBodyData() = default ;
    StartApplicationResponseBodyData(const StartApplicationResponseBodyData &) = default ;
    StartApplicationResponseBodyData(StartApplicationResponseBodyData &&) = default ;
    StartApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartApplicationResponseBodyData() = default ;
    StartApplicationResponseBodyData& operator=(const StartApplicationResponseBodyData &) = default ;
    StartApplicationResponseBodyData& operator=(StartApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline StartApplicationResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The ID of the change order.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
