// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopInfoResponseBodyDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopInfoResponseBody() = default ;
    DescribeDesktopInfoResponseBody(const DescribeDesktopInfoResponseBody &) = default ;
    DescribeDesktopInfoResponseBody(DescribeDesktopInfoResponseBody &&) = default ;
    DescribeDesktopInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopInfoResponseBody() = default ;
    DescribeDesktopInfoResponseBody& operator=(const DescribeDesktopInfoResponseBody &) = default ;
    DescribeDesktopInfoResponseBody& operator=(DescribeDesktopInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktops_ != nullptr
        && this->requestId_ != nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeDesktopInfoResponseBodyDesktops> & desktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeDesktopInfoResponseBodyDesktops>) };
    inline vector<DescribeDesktopInfoResponseBodyDesktops> desktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeDesktopInfoResponseBodyDesktops>) };
    inline DescribeDesktopInfoResponseBody& setDesktops(const vector<DescribeDesktopInfoResponseBodyDesktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeDesktopInfoResponseBody& setDesktops(vector<DescribeDesktopInfoResponseBodyDesktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about cloud computers.
    std::shared_ptr<vector<DescribeDesktopInfoResponseBodyDesktops>> desktops_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
