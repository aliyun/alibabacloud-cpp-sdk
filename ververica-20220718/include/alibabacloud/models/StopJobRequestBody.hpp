// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPJOBREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPJOBREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StopJobRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopJobRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(stopStrategy, stopStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, StopJobRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(stopStrategy, stopStrategy_);
    };
    StopJobRequestBody() = default ;
    StopJobRequestBody(const StopJobRequestBody &) = default ;
    StopJobRequestBody(StopJobRequestBody &&) = default ;
    StopJobRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopJobRequestBody() = default ;
    StopJobRequestBody& operator=(const StopJobRequestBody &) = default ;
    StopJobRequestBody& operator=(StopJobRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stopStrategy_ == nullptr; };
    // stopStrategy Field Functions 
    bool hasStopStrategy() const { return this->stopStrategy_ != nullptr;};
    void deleteStopStrategy() { this->stopStrategy_ = nullptr;};
    inline string stopStrategy() const { DARABONBA_PTR_GET_DEFAULT(stopStrategy_, "") };
    inline StopJobRequestBody& setStopStrategy(string stopStrategy) { DARABONBA_PTR_SET_VALUE(stopStrategy_, stopStrategy) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> stopStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
