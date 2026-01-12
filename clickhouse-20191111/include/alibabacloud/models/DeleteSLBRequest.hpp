// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DeleteSLBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSLBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSLBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    DeleteSLBRequest() = default ;
    DeleteSLBRequest(const DeleteSLBRequest &) = default ;
    DeleteSLBRequest(DeleteSLBRequest &&) = default ;
    DeleteSLBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSLBRequest() = default ;
    DeleteSLBRequest& operator=(const DeleteSLBRequest &) = default ;
    DeleteSLBRequest& operator=(DeleteSLBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->product_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteSLBRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DeleteSLBRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The cluster ID. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to view cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> product_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
