// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileProtectDashboardResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectDashboardResponseBody() = default ;
    GetFileProtectDashboardResponseBody(const GetFileProtectDashboardResponseBody &) = default ;
    GetFileProtectDashboardResponseBody(GetFileProtectDashboardResponseBody &&) = default ;
    GetFileProtectDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectDashboardResponseBody() = default ;
    GetFileProtectDashboardResponseBody& operator=(const GetFileProtectDashboardResponseBody &) = default ;
    GetFileProtectDashboardResponseBody& operator=(GetFileProtectDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectDashboardResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectDashboardResponseBodyData) };
    inline GetFileProtectDashboardResponseBodyData data() { DARABONBA_PTR_GET(data_, GetFileProtectDashboardResponseBodyData) };
    inline GetFileProtectDashboardResponseBody& setData(const GetFileProtectDashboardResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectDashboardResponseBody& setData(GetFileProtectDashboardResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectDashboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetFileProtectDashboardResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
