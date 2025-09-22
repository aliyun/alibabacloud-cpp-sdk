// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEpdSummaryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEpdSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEpdSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEpdSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEpdSummaryResponseBody() = default ;
    GetEpdSummaryResponseBody(const GetEpdSummaryResponseBody &) = default ;
    GetEpdSummaryResponseBody(GetEpdSummaryResponseBody &&) = default ;
    GetEpdSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEpdSummaryResponseBody() = default ;
    GetEpdSummaryResponseBody& operator=(const GetEpdSummaryResponseBody &) = default ;
    GetEpdSummaryResponseBody& operator=(GetEpdSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetEpdSummaryResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetEpdSummaryResponseBodyData>) };
    inline vector<GetEpdSummaryResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetEpdSummaryResponseBodyData>) };
    inline GetEpdSummaryResponseBody& setData(const vector<GetEpdSummaryResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEpdSummaryResponseBody& setData(vector<GetEpdSummaryResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEpdSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response parameters
    std::shared_ptr<vector<GetEpdSummaryResponseBodyData>> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
