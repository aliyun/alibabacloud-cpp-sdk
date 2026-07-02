// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListKeysRequest() = default ;
    ListKeysRequest(const ListKeysRequest &) = default ;
    ListKeysRequest(ListKeysRequest &&) = default ;
    ListKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeysRequest() = default ;
    ListKeysRequest& operator=(const ListKeysRequest &) = default ;
    ListKeysRequest& operator=(ListKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline ListKeysRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKeysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // A filter for master keys. The filter consists of 0 to 10 key-value pairs.
    // 
    // - Key
    // 
    //   - Description: The property to filter.
    // 
    //   - Type: String.
    // 
    // - Values
    // 
    //   - Description: The value to be included after filtering.
    // 
    //   - Type: String array.
    // 
    //   - Length: 0 to 10.
    // 
    // Valid values:
    // 
    // - If \\`Key\\` is set to \\`KeyState\\`, it specifies the key status. Valid values for \\`Value\\` are \\`Enabled\\`, \\`Disabled\\`, \\`PendingDeletion\\`, and \\`PendingImport\\`.
    // 
    // - If \\`Key\\` is set to \\`KeySpec\\`, it specifies the key type. Valid values for \\`Value\\` are \\`Aliyun_AES_256\\`, \\`Aliyun_SM4\\`, \\`RSA_2048\\`, \\`EC_P256\\`, \\`EC_P256K\\`, \\`EC_SM2\\`, and \\`Aliyun_SM4\\`.<br> Note: You can create keys of the \\`EC_SM2\\` and \\`Aliyun_SM4\\` types only in regions that support managed HSMs and have passed the compliance assessment of the Office of State Commercial Cryptography Administration (OSCCA). For more information about the supported regions, see [Supported regions](https://help.aliyun.com/document_detail/125803.html). If you specify \\`EC_SM2\\` or \\`Aliyun_SM4\\` in a region that does not support these key types, the parameters are ignored.<br>
    // 
    // - If \\`Key\\` is set to \\`KeyUsage\\`, it specifies the key usage. Valid values for \\`Value\\` are \\`ENCRYPT/DECRYPT\\` (for data encryption and decryption) and \\`SIGN/VERIFY\\` (for generating and verifying digital signatures).
    // 
    // - If \\`Key\\` is set to \\`ProtectionLevel\\`, it specifies the protection level of the key. Valid values for \\`Value\\` are \\`SOFTWARE\\` and \\`HSM\\`.<br> Note: The HSM protection level is supported only in specific regions. For more information about the supported regions, see [Supported regions](https://help.aliyun.com/document_detail/125803.html). If you specify \\`HSM\\` in a region that does not support it, the parameter is ignored.<br>
    // 
    // - If \\`Key\\` is set to \\`CreatorType\\`, it specifies the creator type. Valid values for \\`Value\\` are \\`User\\` (returns master keys created by users) and \\`Service\\` (returns master keys that are automatically created by other Alibaba Cloud services based on your authorization).
    // 
    // - If \\`Key\\` is set to \\`DKMSInstanceId\\`, it specifies the ID of the KMS instance. Set \\`Value\\` as needed.
    // 
    // - If \\`Key\\` is set to \\`keyId\\`, it specifies the key ID. Set \\`Value\\` as needed.
    // 
    // - If \\`Key\\` is set to \\`AliasName\\`, it specifies the key alias. Set \\`Value\\` as needed.
    // 
    // - If \\`Key\\` is set to \\`Creator\\`, it specifies the key creator. Set \\`Value\\` as needed.
    // 
    // - If \\`Key\\` is set to \\`TagKey\\`, it specifies the key of a key tag. Set \\`Value\\` as needed.
    // 
    // - If \\`Key\\` is set to \\`TagValue\\`, it specifies the value of a key tag. Set \\`Value\\` as needed.
    // 
    // The logical relationship between different keys in \\`Filters\\` is \\`AND\\`. The logical relationship between multiple values for the same key is \\`OR\\`. For example, if you enter `[ {"Key":"KeyState", "Values":["Enabled","Disabled"]}, {"Key":"KeyState", "Values":["PendingDeletion"]}, {"Key":"KeySpec", "Values":["Aliyun_AES_256"]} ]`, the semantics are: `(KeyState=Enabled OR KeyState=Disabled OR KeyState=PendingDeletion) AND (KeySpec=Aliyun_AES_256)`.
    shared_ptr<string> filters_ {};
    // The page number.<br> Valid values: greater than 0.<br> Default value: 1.<br><br>
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.<br> Valid values: 1 to 100.<br> Default value: 10.<br><br>
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
