// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainQpsListResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainQpsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainQpsListResponseBody() = default ;
    DescribeDomainQpsListResponseBody(const DescribeDomainQpsListResponseBody &) = default ;
    DescribeDomainQpsListResponseBody(DescribeDomainQpsListResponseBody &&) = default ;
    DescribeDomainQpsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsListResponseBody() = default ;
    DescribeDomainQpsListResponseBody& operator=(const DescribeDomainQpsListResponseBody &) = default ;
    DescribeDomainQpsListResponseBody& operator=(DescribeDomainQpsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->requestId_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeDomainQpsListResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeDomainQpsListResponseBodyDataList>) };
    inline vector<DescribeDomainQpsListResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeDomainQpsListResponseBodyDataList>) };
    inline DescribeDomainQpsListResponseBody& setDataList(const vector<DescribeDomainQpsListResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeDomainQpsListResponseBody& setDataList(vector<DescribeDomainQpsListResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainQpsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDomainQpsListResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
