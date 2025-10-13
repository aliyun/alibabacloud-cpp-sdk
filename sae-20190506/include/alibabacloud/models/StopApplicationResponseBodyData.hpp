// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STOPAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class StopApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, StopApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    StopApplicationResponseBodyData() = default ;
    StopApplicationResponseBodyData(const StopApplicationResponseBodyData &) = default ;
    StopApplicationResponseBodyData(StopApplicationResponseBodyData &&) = default ;
    StopApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopApplicationResponseBodyData() = default ;
    StopApplicationResponseBodyData& operator=(const StopApplicationResponseBodyData &) = default ;
    StopApplicationResponseBodyData& operator=(StopApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline StopApplicationResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
