// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetDataSourceConnectionInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceConnectionInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceConnectionInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
    };
    GetDataSourceConnectionInfoRequest() = default ;
    GetDataSourceConnectionInfoRequest(const GetDataSourceConnectionInfoRequest &) = default ;
    GetDataSourceConnectionInfoRequest(GetDataSourceConnectionInfoRequest &&) = default ;
    GetDataSourceConnectionInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceConnectionInfoRequest() = default ;
    GetDataSourceConnectionInfoRequest& operator=(const GetDataSourceConnectionInfoRequest &) = default ;
    GetDataSourceConnectionInfoRequest& operator=(GetDataSourceConnectionInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsId_ == nullptr; };
    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline GetDataSourceConnectionInfoRequest& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


  protected:
    // Data source ID.
    // 
    // This parameter is required.
    shared_ptr<string> dsId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
