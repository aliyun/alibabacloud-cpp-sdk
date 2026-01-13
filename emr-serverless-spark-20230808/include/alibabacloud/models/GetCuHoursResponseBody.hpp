// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUHOURSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUHOURSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetCuHoursResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCuHoursResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCuHoursResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCuHoursResponseBody() = default ;
    GetCuHoursResponseBody(const GetCuHoursResponseBody &) = default ;
    GetCuHoursResponseBody(GetCuHoursResponseBody &&) = default ;
    GetCuHoursResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCuHoursResponseBody() = default ;
    GetCuHoursResponseBody& operator=(const GetCuHoursResponseBody &) = default ;
    GetCuHoursResponseBody& operator=(GetCuHoursResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cuHours_ == nullptr; };
      // cuHours Field Functions 
      bool hasCuHours() const { return this->cuHours_ != nullptr;};
      void deleteCuHours() { this->cuHours_ = nullptr;};
      inline string getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, "") };
      inline Data& setCuHours(string cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


    protected:
      // The number of CU-hours consumed by a queue during a specified cycle. The value is an estimated value. Refer to your Alibaba Cloud bill for the actual number of consumed CU-hours.
      shared_ptr<string> cuHours_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCuHoursResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCuHoursResponseBody::Data) };
    inline GetCuHoursResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCuHoursResponseBody::Data) };
    inline GetCuHoursResponseBody& setData(const GetCuHoursResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCuHoursResponseBody& setData(GetCuHoursResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCuHoursResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetCuHoursResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
