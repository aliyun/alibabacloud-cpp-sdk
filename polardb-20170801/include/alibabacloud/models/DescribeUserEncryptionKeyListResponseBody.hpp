// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(KeyList, keyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(KeyList, keyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    DescribeUserEncryptionKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->keyList_ != nullptr && this->requestId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeUserEncryptionKeyListResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // keyList Field Functions 
    bool hasKeyList() const { return this->keyList_ != nullptr;};
    void deleteKeyList() { this->keyList_ = nullptr;};
    inline const vector<string> & keyList() const { DARABONBA_PTR_GET_CONST(keyList_, vector<string>) };
    inline vector<string> keyList() { DARABONBA_PTR_GET(keyList_, vector<string>) };
    inline DescribeUserEncryptionKeyListResponseBody& setKeyList(const vector<string> & keyList) { DARABONBA_PTR_SET_VALUE(keyList_, keyList) };
    inline DescribeUserEncryptionKeyListResponseBody& setKeyList(vector<string> && keyList) { DARABONBA_PTR_SET_RVALUE(keyList_, keyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEncryptionKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Cluster key list.
    std::shared_ptr<vector<string>> keyList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
