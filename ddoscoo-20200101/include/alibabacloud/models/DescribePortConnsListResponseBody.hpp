// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortConnsListResponseBodyConnsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortConnsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortConnsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnsList, connsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortConnsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnsList, connsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortConnsListResponseBody() = default ;
    DescribePortConnsListResponseBody(const DescribePortConnsListResponseBody &) = default ;
    DescribePortConnsListResponseBody(DescribePortConnsListResponseBody &&) = default ;
    DescribePortConnsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortConnsListResponseBody() = default ;
    DescribePortConnsListResponseBody& operator=(const DescribePortConnsListResponseBody &) = default ;
    DescribePortConnsListResponseBody& operator=(DescribePortConnsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connsList_ != nullptr
        && this->requestId_ != nullptr; };
    // connsList Field Functions 
    bool hasConnsList() const { return this->connsList_ != nullptr;};
    void deleteConnsList() { this->connsList_ = nullptr;};
    inline const vector<DescribePortConnsListResponseBodyConnsList> & connsList() const { DARABONBA_PTR_GET_CONST(connsList_, vector<DescribePortConnsListResponseBodyConnsList>) };
    inline vector<DescribePortConnsListResponseBodyConnsList> connsList() { DARABONBA_PTR_GET(connsList_, vector<DescribePortConnsListResponseBodyConnsList>) };
    inline DescribePortConnsListResponseBody& setConnsList(const vector<DescribePortConnsListResponseBodyConnsList> & connsList) { DARABONBA_PTR_SET_VALUE(connsList_, connsList) };
    inline DescribePortConnsListResponseBody& setConnsList(vector<DescribePortConnsListResponseBodyConnsList> && connsList) { DARABONBA_PTR_SET_RVALUE(connsList_, connsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortConnsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the connections established over the port.
    std::shared_ptr<vector<DescribePortConnsListResponseBodyConnsList>> connsList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
