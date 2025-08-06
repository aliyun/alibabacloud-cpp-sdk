// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYEDGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYEDGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeFileIdPlayStatisByEdgeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileIdPlayStatisByEdgeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilePlayStatisList, filePlayStatisList_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileIdPlayStatisByEdgeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePlayStatisList, filePlayStatisList_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
    };
    DescribeFileIdPlayStatisByEdgeResponseBody() = default ;
    DescribeFileIdPlayStatisByEdgeResponseBody(const DescribeFileIdPlayStatisByEdgeResponseBody &) = default ;
    DescribeFileIdPlayStatisByEdgeResponseBody(DescribeFileIdPlayStatisByEdgeResponseBody &&) = default ;
    DescribeFileIdPlayStatisByEdgeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileIdPlayStatisByEdgeResponseBody() = default ;
    DescribeFileIdPlayStatisByEdgeResponseBody& operator=(const DescribeFileIdPlayStatisByEdgeResponseBody &) = default ;
    DescribeFileIdPlayStatisByEdgeResponseBody& operator=(DescribeFileIdPlayStatisByEdgeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePlayStatisList_ != nullptr
        && this->hasNext_ != nullptr && this->requestId_ != nullptr && this->scrollToken_ != nullptr; };
    // filePlayStatisList Field Functions 
    bool hasFilePlayStatisList() const { return this->filePlayStatisList_ != nullptr;};
    void deleteFilePlayStatisList() { this->filePlayStatisList_ = nullptr;};
    inline const vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList> & filePlayStatisList() const { DARABONBA_PTR_GET_CONST(filePlayStatisList_, vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList>) };
    inline vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList> filePlayStatisList() { DARABONBA_PTR_GET(filePlayStatisList_, vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList>) };
    inline DescribeFileIdPlayStatisByEdgeResponseBody& setFilePlayStatisList(const vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList> & filePlayStatisList) { DARABONBA_PTR_SET_VALUE(filePlayStatisList_, filePlayStatisList) };
    inline DescribeFileIdPlayStatisByEdgeResponseBody& setFilePlayStatisList(vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList> && filePlayStatisList) { DARABONBA_PTR_SET_RVALUE(filePlayStatisList_, filePlayStatisList) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline DescribeFileIdPlayStatisByEdgeResponseBody& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileIdPlayStatisByEdgeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string scrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline DescribeFileIdPlayStatisByEdgeResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


  protected:
    std::shared_ptr<vector<DescribeFileIdPlayStatisByEdgeResponseBodyFilePlayStatisList>> filePlayStatisList_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scrollToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
