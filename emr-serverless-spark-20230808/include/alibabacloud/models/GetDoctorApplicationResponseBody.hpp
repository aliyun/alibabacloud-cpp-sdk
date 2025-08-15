// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetDoctorApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    GetDoctorApplicationResponseBody() = default ;
    GetDoctorApplicationResponseBody(const GetDoctorApplicationResponseBody &) = default ;
    GetDoctorApplicationResponseBody(GetDoctorApplicationResponseBody &&) = default ;
    GetDoctorApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBody() = default ;
    GetDoctorApplicationResponseBody& operator=(const GetDoctorApplicationResponseBody &) = default ;
    GetDoctorApplicationResponseBody& operator=(GetDoctorApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorApplicationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorApplicationResponseBodyData) };
    inline GetDoctorApplicationResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDoctorApplicationResponseBodyData) };
    inline GetDoctorApplicationResponseBody& setData(const GetDoctorApplicationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorApplicationResponseBody& setData(GetDoctorApplicationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The data returned.
    std::shared_ptr<GetDoctorApplicationResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
