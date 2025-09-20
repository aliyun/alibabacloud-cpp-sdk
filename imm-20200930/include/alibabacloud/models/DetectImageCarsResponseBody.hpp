// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGECARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGECARSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Car.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageCarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageCarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cars, cars_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageCarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cars, cars_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageCarsResponseBody() = default ;
    DetectImageCarsResponseBody(const DetectImageCarsResponseBody &) = default ;
    DetectImageCarsResponseBody(DetectImageCarsResponseBody &&) = default ;
    DetectImageCarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageCarsResponseBody() = default ;
    DetectImageCarsResponseBody& operator=(const DetectImageCarsResponseBody &) = default ;
    DetectImageCarsResponseBody& operator=(DetectImageCarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cars_ != nullptr
        && this->requestId_ != nullptr; };
    // cars Field Functions 
    bool hasCars() const { return this->cars_ != nullptr;};
    void deleteCars() { this->cars_ = nullptr;};
    inline const vector<Car> & cars() const { DARABONBA_PTR_GET_CONST(cars_, vector<Car>) };
    inline vector<Car> cars() { DARABONBA_PTR_GET(cars_, vector<Car>) };
    inline DetectImageCarsResponseBody& setCars(const vector<Car> & cars) { DARABONBA_PTR_SET_VALUE(cars_, cars) };
    inline DetectImageCarsResponseBody& setCars(vector<Car> && cars) { DARABONBA_PTR_SET_RVALUE(cars_, cars) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageCarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The vehicles.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Car>> cars_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
