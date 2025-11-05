// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnConditionIPBInfoResponseBodyDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnConditionIPBInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnConditionIPBInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnConditionIPBInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnConditionIPBInfoResponseBody() = default ;
    DescribeCdnConditionIPBInfoResponseBody(const DescribeCdnConditionIPBInfoResponseBody &) = default ;
    DescribeCdnConditionIPBInfoResponseBody(DescribeCdnConditionIPBInfoResponseBody &&) = default ;
    DescribeCdnConditionIPBInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnConditionIPBInfoResponseBody() = default ;
    DescribeCdnConditionIPBInfoResponseBody& operator=(const DescribeCdnConditionIPBInfoResponseBody &) = default ;
    DescribeCdnConditionIPBInfoResponseBody& operator=(DescribeCdnConditionIPBInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datas_ == nullptr
        && return this->requestId_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<DescribeCdnConditionIPBInfoResponseBodyDatas> & datas() const { DARABONBA_PTR_GET_CONST(datas_, vector<DescribeCdnConditionIPBInfoResponseBodyDatas>) };
    inline vector<DescribeCdnConditionIPBInfoResponseBodyDatas> datas() { DARABONBA_PTR_GET(datas_, vector<DescribeCdnConditionIPBInfoResponseBodyDatas>) };
    inline DescribeCdnConditionIPBInfoResponseBody& setDatas(const vector<DescribeCdnConditionIPBInfoResponseBodyDatas> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline DescribeCdnConditionIPBInfoResponseBody& setDatas(vector<DescribeCdnConditionIPBInfoResponseBodyDatas> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnConditionIPBInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data that is returned.
    std::shared_ptr<vector<DescribeCdnConditionIPBInfoResponseBodyDatas>> datas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
