// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKSOURCECIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKSOURCECIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeBackSourceCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackSourceCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackSourceCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
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
    virtual bool empty() const override { this->cidrList_ != nullptr
        && this->requestId_ != nullptr; };
    // cidrList Field Functions 
    bool hasCidrList() const { return this->cidrList_ != nullptr;};
    void deleteCidrList() { this->cidrList_ = nullptr;};
    inline const vector<string> & cidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<string>) };
    inline vector<string> cidrList() { DARABONBA_PTR_GET(cidrList_, vector<string>) };
    inline DescribeBackSourceCidrResponseBody& setCidrList(const vector<string> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
    inline DescribeBackSourceCidrResponseBody& setCidrList(vector<string> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackSourceCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> cidrList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
