// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyData.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyPager.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Pager, pager_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Pager, pager_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionResourceResponseBody() = default ;
    DescribeRegionResourceResponseBody(const DescribeRegionResourceResponseBody &) = default ;
    DescribeRegionResourceResponseBody(DescribeRegionResourceResponseBody &&) = default ;
    DescribeRegionResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceResponseBody() = default ;
    DescribeRegionResourceResponseBody& operator=(const DescribeRegionResourceResponseBody &) = default ;
    DescribeRegionResourceResponseBody& operator=(DescribeRegionResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->desc_ == nullptr && return this->msg_ == nullptr && return this->pager_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeRegionResourceResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeRegionResourceResponseBodyData>) };
    inline vector<DescribeRegionResourceResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeRegionResourceResponseBodyData>) };
    inline DescribeRegionResourceResponseBody& setData(const vector<DescribeRegionResourceResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRegionResourceResponseBody& setData(vector<DescribeRegionResourceResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeRegionResourceResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeRegionResourceResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pager Field Functions 
    bool hasPager() const { return this->pager_ != nullptr;};
    void deletePager() { this->pager_ = nullptr;};
    inline const DescribeRegionResourceResponseBodyPager & pager() const { DARABONBA_PTR_GET_CONST(pager_, DescribeRegionResourceResponseBodyPager) };
    inline DescribeRegionResourceResponseBodyPager pager() { DARABONBA_PTR_GET(pager_, DescribeRegionResourceResponseBodyPager) };
    inline DescribeRegionResourceResponseBody& setPager(const DescribeRegionResourceResponseBodyPager & pager) { DARABONBA_PTR_SET_VALUE(pager_, pager) };
    inline DescribeRegionResourceResponseBody& setPager(DescribeRegionResourceResponseBodyPager && pager) { DARABONBA_PTR_SET_RVALUE(pager_, pager) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeRegionResourceResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<DescribeRegionResourceResponseBodyPager> pager_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
