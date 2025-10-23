// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAITEMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAITEMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataItemListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataItemListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataItemListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataItemListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDataItemListResponseBody() = default ;
    GetDataItemListResponseBody(const GetDataItemListResponseBody &) = default ;
    GetDataItemListResponseBody(GetDataItemListResponseBody &&) = default ;
    GetDataItemListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataItemListResponseBody() = default ;
    GetDataItemListResponseBody& operator=(const GetDataItemListResponseBody &) = default ;
    GetDataItemListResponseBody& operator=(GetDataItemListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDataItemListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDataItemListResponseBodyData>) };
    inline vector<GetDataItemListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetDataItemListResponseBodyData>) };
    inline GetDataItemListResponseBody& setData(const vector<GetDataItemListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataItemListResponseBody& setData(vector<GetDataItemListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataItemListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response parameters.
    std::shared_ptr<vector<GetDataItemListResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
