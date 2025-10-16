// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCustomizedListHeadersResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedListHeadersResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayType, displayType_);
      DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedListHeadersResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayType, displayType_);
      DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
    };
    DescribeCustomizedListHeadersResponseBodyHeaders() = default ;
    DescribeCustomizedListHeadersResponseBodyHeaders(const DescribeCustomizedListHeadersResponseBodyHeaders &) = default ;
    DescribeCustomizedListHeadersResponseBodyHeaders(DescribeCustomizedListHeadersResponseBodyHeaders &&) = default ;
    DescribeCustomizedListHeadersResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedListHeadersResponseBodyHeaders() = default ;
    DescribeCustomizedListHeadersResponseBodyHeaders& operator=(const DescribeCustomizedListHeadersResponseBodyHeaders &) = default ;
    DescribeCustomizedListHeadersResponseBodyHeaders& operator=(DescribeCustomizedListHeadersResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayType_ == nullptr
        && return this->headerKey_ == nullptr && return this->headerName_ == nullptr; };
    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline DescribeCustomizedListHeadersResponseBodyHeaders& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string headerKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline DescribeCustomizedListHeadersResponseBodyHeaders& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string headerName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline DescribeCustomizedListHeadersResponseBodyHeaders& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


  protected:
    std::shared_ptr<string> displayType_ = nullptr;
    std::shared_ptr<string> headerKey_ = nullptr;
    std::shared_ptr<string> headerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
