// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMNOCONNECTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMNOCONNECTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ConfirmNoConnectionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmNoConnectionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmNoConnectionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    ConfirmNoConnectionResponseBodyData() = default ;
    ConfirmNoConnectionResponseBodyData(const ConfirmNoConnectionResponseBodyData &) = default ;
    ConfirmNoConnectionResponseBodyData(ConfirmNoConnectionResponseBodyData &&) = default ;
    ConfirmNoConnectionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmNoConnectionResponseBodyData() = default ;
    ConfirmNoConnectionResponseBodyData& operator=(const ConfirmNoConnectionResponseBodyData &) = default ;
    ConfirmNoConnectionResponseBodyData& operator=(ConfirmNoConnectionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slinkTaskId_ == nullptr; };
    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline ConfirmNoConnectionResponseBodyData& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    std::shared_ptr<string> slinkTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
