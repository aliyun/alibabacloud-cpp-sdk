// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSDGsResponseBodySDGs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SDGs, SDGs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SDGs, SDGs_);
    };
    DescribeSDGsResponseBody() = default ;
    DescribeSDGsResponseBody(const DescribeSDGsResponseBody &) = default ;
    DescribeSDGsResponseBody(DescribeSDGsResponseBody &&) = default ;
    DescribeSDGsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGsResponseBody() = default ;
    DescribeSDGsResponseBody& operator=(const DescribeSDGsResponseBody &) = default ;
    DescribeSDGsResponseBody& operator=(DescribeSDGsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->SDGs_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDGsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SDGs Field Functions 
    bool hasSDGs() const { return this->SDGs_ != nullptr;};
    void deleteSDGs() { this->SDGs_ = nullptr;};
    inline const vector<DescribeSDGsResponseBodySDGs> & SDGs() const { DARABONBA_PTR_GET_CONST(SDGs_, vector<DescribeSDGsResponseBodySDGs>) };
    inline vector<DescribeSDGsResponseBodySDGs> SDGs() { DARABONBA_PTR_GET(SDGs_, vector<DescribeSDGsResponseBodySDGs>) };
    inline DescribeSDGsResponseBody& setSDGs(const vector<DescribeSDGsResponseBodySDGs> & SDGs) { DARABONBA_PTR_SET_VALUE(SDGs_, SDGs) };
    inline DescribeSDGsResponseBody& setSDGs(vector<DescribeSDGsResponseBodySDGs> && SDGs) { DARABONBA_PTR_SET_RVALUE(SDGs_, SDGs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the SDGs.
    std::shared_ptr<vector<DescribeSDGsResponseBodySDGs>> SDGs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
