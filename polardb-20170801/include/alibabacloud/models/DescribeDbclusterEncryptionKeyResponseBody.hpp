// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEncryptionKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionKeyList, encryptionKeyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionKeyList, encryptionKeyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterEncryptionKeyResponseBody() = default ;
    DescribeDBClusterEncryptionKeyResponseBody(const DescribeDBClusterEncryptionKeyResponseBody &) = default ;
    DescribeDBClusterEncryptionKeyResponseBody(DescribeDBClusterEncryptionKeyResponseBody &&) = default ;
    DescribeDBClusterEncryptionKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEncryptionKeyResponseBody() = default ;
    DescribeDBClusterEncryptionKeyResponseBody& operator=(const DescribeDBClusterEncryptionKeyResponseBody &) = default ;
    DescribeDBClusterEncryptionKeyResponseBody& operator=(DescribeDBClusterEncryptionKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptionKeyList_ != nullptr
        && this->requestId_ != nullptr; };
    // encryptionKeyList Field Functions 
    bool hasEncryptionKeyList() const { return this->encryptionKeyList_ != nullptr;};
    void deleteEncryptionKeyList() { this->encryptionKeyList_ = nullptr;};
    inline const vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList> & encryptionKeyList() const { DARABONBA_PTR_GET_CONST(encryptionKeyList_, vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList>) };
    inline vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList> encryptionKeyList() { DARABONBA_PTR_GET(encryptionKeyList_, vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList>) };
    inline DescribeDBClusterEncryptionKeyResponseBody& setEncryptionKeyList(const vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList> & encryptionKeyList) { DARABONBA_PTR_SET_VALUE(encryptionKeyList_, encryptionKeyList) };
    inline DescribeDBClusterEncryptionKeyResponseBody& setEncryptionKeyList(vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList> && encryptionKeyList) { DARABONBA_PTR_SET_RVALUE(encryptionKeyList_, encryptionKeyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList>> encryptionKeyList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
