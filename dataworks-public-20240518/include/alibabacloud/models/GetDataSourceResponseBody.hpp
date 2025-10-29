// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataSourceResponseBodyDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody(GetDataSourceResponseBody &&) = default ;
    GetDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody& operator=(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody& operator=(GetDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSource_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const GetDataSourceResponseBodyDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, GetDataSourceResponseBodyDataSource) };
    inline GetDataSourceResponseBodyDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, GetDataSourceResponseBodyDataSource) };
    inline GetDataSourceResponseBody& setDataSource(const GetDataSourceResponseBodyDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline GetDataSourceResponseBody& setDataSource(GetDataSourceResponseBodyDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data source.
    std::shared_ptr<GetDataSourceResponseBodyDataSource> dataSource_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
