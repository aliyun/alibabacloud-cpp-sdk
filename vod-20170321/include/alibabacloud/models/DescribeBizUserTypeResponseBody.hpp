// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBIZUSERTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBIZUSERTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBizUserTypeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeBizUserTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBizUserTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBizUserTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBizUserTypeResponseBody() = default ;
    DescribeBizUserTypeResponseBody(const DescribeBizUserTypeResponseBody &) = default ;
    DescribeBizUserTypeResponseBody(DescribeBizUserTypeResponseBody &&) = default ;
    DescribeBizUserTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBizUserTypeResponseBody() = default ;
    DescribeBizUserTypeResponseBody& operator=(const DescribeBizUserTypeResponseBody &) = default ;
    DescribeBizUserTypeResponseBody& operator=(DescribeBizUserTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBizUserTypeResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBizUserTypeResponseBodyData>) };
    inline vector<DescribeBizUserTypeResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeBizUserTypeResponseBodyData>) };
    inline DescribeBizUserTypeResponseBody& setData(const vector<DescribeBizUserTypeResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBizUserTypeResponseBody& setData(vector<DescribeBizUserTypeResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBizUserTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeBizUserTypeResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
