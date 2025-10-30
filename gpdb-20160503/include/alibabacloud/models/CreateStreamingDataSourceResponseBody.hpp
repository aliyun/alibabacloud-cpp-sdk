// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMINGDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMINGDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateStreamingDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamingDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamingDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateStreamingDataSourceResponseBody() = default ;
    CreateStreamingDataSourceResponseBody(const CreateStreamingDataSourceResponseBody &) = default ;
    CreateStreamingDataSourceResponseBody(CreateStreamingDataSourceResponseBody &&) = default ;
    CreateStreamingDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamingDataSourceResponseBody() = default ;
    CreateStreamingDataSourceResponseBody& operator=(const CreateStreamingDataSourceResponseBody &) = default ;
    CreateStreamingDataSourceResponseBody& operator=(CreateStreamingDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int32_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
    inline CreateStreamingDataSourceResponseBody& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStreamingDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data source ID.
    std::shared_ptr<int32_t> dataSourceId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
