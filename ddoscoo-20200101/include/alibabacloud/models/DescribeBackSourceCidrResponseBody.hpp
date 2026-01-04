// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKSOURCECIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKSOURCECIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBackSourceCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackSourceCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackSourceCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackSourceCidrResponseBody() = default ;
    DescribeBackSourceCidrResponseBody(const DescribeBackSourceCidrResponseBody &) = default ;
    DescribeBackSourceCidrResponseBody(DescribeBackSourceCidrResponseBody &&) = default ;
    DescribeBackSourceCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackSourceCidrResponseBody() = default ;
    DescribeBackSourceCidrResponseBody& operator=(const DescribeBackSourceCidrResponseBody &) = default ;
    DescribeBackSourceCidrResponseBody& operator=(DescribeBackSourceCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrs_ == nullptr
        && this->requestId_ == nullptr; };
    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline const vector<string> & getCidrs() const { DARABONBA_PTR_GET_CONST(cidrs_, vector<string>) };
    inline vector<string> getCidrs() { DARABONBA_PTR_GET(cidrs_, vector<string>) };
    inline DescribeBackSourceCidrResponseBody& setCidrs(const vector<string> & cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };
    inline DescribeBackSourceCidrResponseBody& setCidrs(vector<string> && cidrs) { DARABONBA_PTR_SET_RVALUE(cidrs_, cidrs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackSourceCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the back-to-origin CIDR blocks of the instance.
    shared_ptr<vector<string>> cidrs_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
