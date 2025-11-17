// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOURCEBLOODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DATASOURCEBLOODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataSourceBloodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSourceBloodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataSourceBloodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
    };
    DataSourceBloodRequest() = default ;
    DataSourceBloodRequest(const DataSourceBloodRequest &) = default ;
    DataSourceBloodRequest(DataSourceBloodRequest &&) = default ;
    DataSourceBloodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSourceBloodRequest() = default ;
    DataSourceBloodRequest& operator=(const DataSourceBloodRequest &) = default ;
    DataSourceBloodRequest& operator=(DataSourceBloodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DataSourceBloodRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


  protected:
    // Data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
