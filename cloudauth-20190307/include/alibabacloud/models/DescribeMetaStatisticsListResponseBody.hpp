// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetaStatisticsListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaStatisticsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaStatisticsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaStatisticsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetaStatisticsListResponseBody() = default ;
    DescribeMetaStatisticsListResponseBody(const DescribeMetaStatisticsListResponseBody &) = default ;
    DescribeMetaStatisticsListResponseBody(DescribeMetaStatisticsListResponseBody &&) = default ;
    DescribeMetaStatisticsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaStatisticsListResponseBody() = default ;
    DescribeMetaStatisticsListResponseBody& operator=(const DescribeMetaStatisticsListResponseBody &) = default ;
    DescribeMetaStatisticsListResponseBody& operator=(DescribeMetaStatisticsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMetaStatisticsListResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMetaStatisticsListResponseBodyItems>) };
    inline vector<DescribeMetaStatisticsListResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeMetaStatisticsListResponseBodyItems>) };
    inline DescribeMetaStatisticsListResponseBody& setItems(const vector<DescribeMetaStatisticsListResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMetaStatisticsListResponseBody& setItems(vector<DescribeMetaStatisticsListResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaStatisticsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeMetaStatisticsListResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
