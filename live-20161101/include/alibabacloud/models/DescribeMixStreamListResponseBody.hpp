// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMixStreamListResponseBodyMixStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMixStreamListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMixStreamListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MixStreamList, mixStreamList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMixStreamListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MixStreamList, mixStreamList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMixStreamListResponseBody() = default ;
    DescribeMixStreamListResponseBody(const DescribeMixStreamListResponseBody &) = default ;
    DescribeMixStreamListResponseBody(DescribeMixStreamListResponseBody &&) = default ;
    DescribeMixStreamListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMixStreamListResponseBody() = default ;
    DescribeMixStreamListResponseBody& operator=(const DescribeMixStreamListResponseBody &) = default ;
    DescribeMixStreamListResponseBody& operator=(DescribeMixStreamListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mixStreamList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // mixStreamList Field Functions 
    bool hasMixStreamList() const { return this->mixStreamList_ != nullptr;};
    void deleteMixStreamList() { this->mixStreamList_ = nullptr;};
    inline const vector<DescribeMixStreamListResponseBodyMixStreamList> & mixStreamList() const { DARABONBA_PTR_GET_CONST(mixStreamList_, vector<DescribeMixStreamListResponseBodyMixStreamList>) };
    inline vector<DescribeMixStreamListResponseBodyMixStreamList> mixStreamList() { DARABONBA_PTR_GET(mixStreamList_, vector<DescribeMixStreamListResponseBodyMixStreamList>) };
    inline DescribeMixStreamListResponseBody& setMixStreamList(const vector<DescribeMixStreamListResponseBodyMixStreamList> & mixStreamList) { DARABONBA_PTR_SET_VALUE(mixStreamList_, mixStreamList) };
    inline DescribeMixStreamListResponseBody& setMixStreamList(vector<DescribeMixStreamListResponseBodyMixStreamList> && mixStreamList) { DARABONBA_PTR_SET_RVALUE(mixStreamList_, mixStreamList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMixStreamListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMixStreamListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Details about the stream mixing tasks.
    std::shared_ptr<vector<DescribeMixStreamListResponseBodyMixStreamList>> mixStreamList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
