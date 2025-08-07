// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFreeUserEventTypesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventTypesResponseBody() = default ;
    DescribeFreeUserEventTypesResponseBody(const DescribeFreeUserEventTypesResponseBody &) = default ;
    DescribeFreeUserEventTypesResponseBody(DescribeFreeUserEventTypesResponseBody &&) = default ;
    DescribeFreeUserEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventTypesResponseBody() = default ;
    DescribeFreeUserEventTypesResponseBody& operator=(const DescribeFreeUserEventTypesResponseBody &) = default ;
    DescribeFreeUserEventTypesResponseBody& operator=(DescribeFreeUserEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeFreeUserEventTypesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeFreeUserEventTypesResponseBodyData>) };
    inline vector<DescribeFreeUserEventTypesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeFreeUserEventTypesResponseBodyData>) };
    inline DescribeFreeUserEventTypesResponseBody& setData(const vector<DescribeFreeUserEventTypesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFreeUserEventTypesResponseBody& setData(vector<DescribeFreeUserEventTypesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of security events on which basic detection is performed.
    std::shared_ptr<vector<DescribeFreeUserEventTypesResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
