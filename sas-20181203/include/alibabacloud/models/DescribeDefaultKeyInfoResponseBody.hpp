// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTKEYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTKEYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDefaultKeyInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultKeyInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultKeyInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefaultKeyInfoResponseBody() = default ;
    DescribeDefaultKeyInfoResponseBody(const DescribeDefaultKeyInfoResponseBody &) = default ;
    DescribeDefaultKeyInfoResponseBody(DescribeDefaultKeyInfoResponseBody &&) = default ;
    DescribeDefaultKeyInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultKeyInfoResponseBody() = default ;
    DescribeDefaultKeyInfoResponseBody& operator=(const DescribeDefaultKeyInfoResponseBody &) = default ;
    DescribeDefaultKeyInfoResponseBody& operator=(DescribeDefaultKeyInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainList_ == nullptr
        && return this->names_ == nullptr && return this->requestId_ == nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> domainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline DescribeDefaultKeyInfoResponseBody& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeDefaultKeyInfoResponseBody& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline DescribeDefaultKeyInfoResponseBody& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefaultKeyInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain names.
    std::shared_ptr<vector<string>> domainList_ = nullptr;
    // The company name.
    std::shared_ptr<string> names_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
