// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeShowListResponseBodyShowListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowList, showList_);
      DARABONBA_PTR_TO_JSON(ShowListInfo, showListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowList, showList_);
      DARABONBA_PTR_FROM_JSON(ShowListInfo, showListInfo_);
    };
    DescribeShowListResponseBody() = default ;
    DescribeShowListResponseBody(const DescribeShowListResponseBody &) = default ;
    DescribeShowListResponseBody(DescribeShowListResponseBody &&) = default ;
    DescribeShowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBody() = default ;
    DescribeShowListResponseBody& operator=(const DescribeShowListResponseBody &) = default ;
    DescribeShowListResponseBody& operator=(DescribeShowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->showList_ != nullptr && this->showListInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeShowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showList Field Functions 
    bool hasShowList() const { return this->showList_ != nullptr;};
    void deleteShowList() { this->showList_ = nullptr;};
    inline string showList() const { DARABONBA_PTR_GET_DEFAULT(showList_, "") };
    inline DescribeShowListResponseBody& setShowList(string showList) { DARABONBA_PTR_SET_VALUE(showList_, showList) };


    // showListInfo Field Functions 
    bool hasShowListInfo() const { return this->showListInfo_ != nullptr;};
    void deleteShowListInfo() { this->showListInfo_ = nullptr;};
    inline const DescribeShowListResponseBodyShowListInfo & showListInfo() const { DARABONBA_PTR_GET_CONST(showListInfo_, DescribeShowListResponseBodyShowListInfo) };
    inline DescribeShowListResponseBodyShowListInfo showListInfo() { DARABONBA_PTR_GET(showListInfo_, DescribeShowListResponseBodyShowListInfo) };
    inline DescribeShowListResponseBody& setShowListInfo(const DescribeShowListResponseBodyShowListInfo & showListInfo) { DARABONBA_PTR_SET_VALUE(showListInfo_, showListInfo) };
    inline DescribeShowListResponseBody& setShowListInfo(DescribeShowListResponseBodyShowListInfo && showListInfo) { DARABONBA_PTR_SET_RVALUE(showListInfo_, showListInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // ****Details of the episode list.
    // 
    // Show indicates the information about a specific episode. For more information, see the **Show** parameter.
    std::shared_ptr<string> showList_ = nullptr;
    // The information about the episode list.
    std::shared_ptr<DescribeShowListResponseBodyShowListInfo> showListInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
