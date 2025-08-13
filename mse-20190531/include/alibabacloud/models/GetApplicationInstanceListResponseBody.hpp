// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationInstanceListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    GetApplicationInstanceListResponseBody() = default ;
    GetApplicationInstanceListResponseBody(const GetApplicationInstanceListResponseBody &) = default ;
    GetApplicationInstanceListResponseBody(GetApplicationInstanceListResponseBody &&) = default ;
    GetApplicationInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationInstanceListResponseBody() = default ;
    GetApplicationInstanceListResponseBody& operator=(const GetApplicationInstanceListResponseBody &) = default ;
    GetApplicationInstanceListResponseBody& operator=(GetApplicationInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApplicationInstanceListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetApplicationInstanceListResponseBodyData) };
    inline GetApplicationInstanceListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetApplicationInstanceListResponseBodyData) };
    inline GetApplicationInstanceListResponseBody& setData(const GetApplicationInstanceListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApplicationInstanceListResponseBody& setData(GetApplicationInstanceListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The returned data.
    std::shared_ptr<GetApplicationInstanceListResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
