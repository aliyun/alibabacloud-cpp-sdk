// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest(DescribeKeyPairsRequest &&) = default ;
    DescribeKeyPairsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest& operator=(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest& operator=(DescribeKeyPairsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPairId_ != nullptr
        && this->keyPairName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeKeyPairsRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeKeyPairsRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeKeyPairsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeKeyPairsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the key pair that you want to bind to the simple application server. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain the following characters:
    // 
    // *   Numbers.
    // *   :
    // *   _
    // *   .
    // 
    // You can specify only one name. By default, all key pairs are queried.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The page number of the returned page. Valid values: integers that are greater than 0. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: integers that are greater than 0. Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
