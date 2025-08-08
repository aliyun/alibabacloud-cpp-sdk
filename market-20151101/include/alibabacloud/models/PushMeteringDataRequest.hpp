// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class PushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Metering, metering_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Metering, metering_);
    };
    PushMeteringDataRequest() = default ;
    PushMeteringDataRequest(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest(PushMeteringDataRequest &&) = default ;
    PushMeteringDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMeteringDataRequest() = default ;
    PushMeteringDataRequest& operator=(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest& operator=(PushMeteringDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metering_ != nullptr; };
    // metering Field Functions 
    bool hasMetering() const { return this->metering_ != nullptr;};
    void deleteMetering() { this->metering_ = nullptr;};
    inline string metering() const { DARABONBA_PTR_GET_DEFAULT(metering_, "") };
    inline PushMeteringDataRequest& setMetering(string metering) { DARABONBA_PTR_SET_VALUE(metering_, metering) };


  protected:
    std::shared_ptr<string> metering_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
