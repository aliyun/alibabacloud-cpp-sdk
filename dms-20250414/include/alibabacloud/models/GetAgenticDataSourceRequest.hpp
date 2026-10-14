// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
    };
    GetAgenticDataSourceRequest() = default ;
    GetAgenticDataSourceRequest(const GetAgenticDataSourceRequest &) = default ;
    GetAgenticDataSourceRequest(GetAgenticDataSourceRequest &&) = default ;
    GetAgenticDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticDataSourceRequest() = default ;
    GetAgenticDataSourceRequest& operator=(const GetAgenticDataSourceRequest &) = default ;
    GetAgenticDataSourceRequest& operator=(GetAgenticDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceUuid_ == nullptr; };
    // dataSourceUuid Field Functions 
    bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
    void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
    inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
    inline GetAgenticDataSourceRequest& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


  protected:
    // The UUID of the data source to query.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
