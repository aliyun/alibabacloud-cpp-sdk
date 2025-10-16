// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopTypesResponseBodyDesktopTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopTypes, desktopTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopTypes, desktopTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopTypesResponseBody() = default ;
    DescribeDesktopTypesResponseBody(const DescribeDesktopTypesResponseBody &) = default ;
    DescribeDesktopTypesResponseBody(DescribeDesktopTypesResponseBody &&) = default ;
    DescribeDesktopTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopTypesResponseBody() = default ;
    DescribeDesktopTypesResponseBody& operator=(const DescribeDesktopTypesResponseBody &) = default ;
    DescribeDesktopTypesResponseBody& operator=(DescribeDesktopTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopTypes_ == nullptr
        && return this->requestId_ == nullptr; };
    // desktopTypes Field Functions 
    bool hasDesktopTypes() const { return this->desktopTypes_ != nullptr;};
    void deleteDesktopTypes() { this->desktopTypes_ = nullptr;};
    inline const vector<DescribeDesktopTypesResponseBodyDesktopTypes> & desktopTypes() const { DARABONBA_PTR_GET_CONST(desktopTypes_, vector<DescribeDesktopTypesResponseBodyDesktopTypes>) };
    inline vector<DescribeDesktopTypesResponseBodyDesktopTypes> desktopTypes() { DARABONBA_PTR_GET(desktopTypes_, vector<DescribeDesktopTypesResponseBodyDesktopTypes>) };
    inline DescribeDesktopTypesResponseBody& setDesktopTypes(const vector<DescribeDesktopTypesResponseBodyDesktopTypes> & desktopTypes) { DARABONBA_PTR_SET_VALUE(desktopTypes_, desktopTypes) };
    inline DescribeDesktopTypesResponseBody& setDesktopTypes(vector<DescribeDesktopTypesResponseBodyDesktopTypes> && desktopTypes) { DARABONBA_PTR_SET_RVALUE(desktopTypes_, desktopTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The specifications.
    std::shared_ptr<vector<DescribeDesktopTypesResponseBodyDesktopTypes>> desktopTypes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
