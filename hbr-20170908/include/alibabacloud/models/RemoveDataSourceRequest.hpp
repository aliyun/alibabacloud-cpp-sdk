// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class RemoveDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
    };
    RemoveDataSourceRequest() = default ;
    RemoveDataSourceRequest(const RemoveDataSourceRequest &) = default ;
    RemoveDataSourceRequest(RemoveDataSourceRequest &&) = default ;
    RemoveDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDataSourceRequest() = default ;
    RemoveDataSourceRequest& operator=(const RemoveDataSourceRequest &) = default ;
    RemoveDataSourceRequest& operator=(RemoveDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline RemoveDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
