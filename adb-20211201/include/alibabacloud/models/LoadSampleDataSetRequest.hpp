// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOADSAMPLEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOADSAMPLEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class LoadSampleDataSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoadSampleDataSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, LoadSampleDataSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    LoadSampleDataSetRequest() = default ;
    LoadSampleDataSetRequest(const LoadSampleDataSetRequest &) = default ;
    LoadSampleDataSetRequest(LoadSampleDataSetRequest &&) = default ;
    LoadSampleDataSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoadSampleDataSetRequest() = default ;
    LoadSampleDataSetRequest& operator=(const LoadSampleDataSetRequest &) = default ;
    LoadSampleDataSetRequest& operator=(LoadSampleDataSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline LoadSampleDataSetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
