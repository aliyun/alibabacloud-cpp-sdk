// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGVERSIONDIFFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGVERSIONDIFFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigVersionDifferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigVersionDifferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeId, changeId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigVersionDifferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeId, changeId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    DescribeConfigVersionDifferenceRequest() = default ;
    DescribeConfigVersionDifferenceRequest(const DescribeConfigVersionDifferenceRequest &) = default ;
    DescribeConfigVersionDifferenceRequest(DescribeConfigVersionDifferenceRequest &&) = default ;
    DescribeConfigVersionDifferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigVersionDifferenceRequest() = default ;
    DescribeConfigVersionDifferenceRequest& operator=(const DescribeConfigVersionDifferenceRequest &) = default ;
    DescribeConfigVersionDifferenceRequest& operator=(DescribeConfigVersionDifferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeId_ == nullptr
        && return this->DBClusterId_ == nullptr; };
    // changeId Field Functions 
    bool hasChangeId() const { return this->changeId_ != nullptr;};
    void deleteChangeId() { this->changeId_ = nullptr;};
    inline string changeId() const { DARABONBA_PTR_GET_DEFAULT(changeId_, "") };
    inline DescribeConfigVersionDifferenceRequest& setChangeId(string changeId) { DARABONBA_PTR_SET_VALUE(changeId_, changeId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeConfigVersionDifferenceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The ID of the change record. You can call the [DescribeConfigHistory](https://help.aliyun.com/document_detail/452209.html) operation to query the ID of the change record.
    // 
    // This parameter is required.
    std::shared_ptr<string> changeId_ = nullptr;
    // The cluster ID. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query information about all the clusters that are deployed in a specific region. The information includes the cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
