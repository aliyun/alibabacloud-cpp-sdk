// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNisNetworkRankingResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkRankingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkRankingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkRankingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNisNetworkRankingResponseBody() = default ;
    GetNisNetworkRankingResponseBody(const GetNisNetworkRankingResponseBody &) = default ;
    GetNisNetworkRankingResponseBody(GetNisNetworkRankingResponseBody &&) = default ;
    GetNisNetworkRankingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkRankingResponseBody() = default ;
    GetNisNetworkRankingResponseBody& operator=(const GetNisNetworkRankingResponseBody &) = default ;
    GetNisNetworkRankingResponseBody& operator=(GetNisNetworkRankingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetNisNetworkRankingResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetNisNetworkRankingResponseBodyData>) };
    inline vector<GetNisNetworkRankingResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetNisNetworkRankingResponseBodyData>) };
    inline GetNisNetworkRankingResponseBody& setData(const vector<GetNisNetworkRankingResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNisNetworkRankingResponseBody& setData(vector<GetNisNetworkRankingResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNisNetworkRankingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetNisNetworkRankingResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
