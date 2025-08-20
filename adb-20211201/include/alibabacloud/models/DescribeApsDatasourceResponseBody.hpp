// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsDatasource, apsDatasource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsDatasource, apsDatasource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsDatasourceResponseBody() = default ;
    DescribeApsDatasourceResponseBody(const DescribeApsDatasourceResponseBody &) = default ;
    DescribeApsDatasourceResponseBody(DescribeApsDatasourceResponseBody &&) = default ;
    DescribeApsDatasourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBody() = default ;
    DescribeApsDatasourceResponseBody& operator=(const DescribeApsDatasourceResponseBody &) = default ;
    DescribeApsDatasourceResponseBody& operator=(DescribeApsDatasourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apsDatasource_ != nullptr
        && this->requestId_ != nullptr; };
    // apsDatasource Field Functions 
    bool hasApsDatasource() const { return this->apsDatasource_ != nullptr;};
    void deleteApsDatasource() { this->apsDatasource_ = nullptr;};
    inline const DescribeApsDatasourceResponseBodyApsDatasource & apsDatasource() const { DARABONBA_PTR_GET_CONST(apsDatasource_, DescribeApsDatasourceResponseBodyApsDatasource) };
    inline DescribeApsDatasourceResponseBodyApsDatasource apsDatasource() { DARABONBA_PTR_GET(apsDatasource_, DescribeApsDatasourceResponseBodyApsDatasource) };
    inline DescribeApsDatasourceResponseBody& setApsDatasource(const DescribeApsDatasourceResponseBodyApsDatasource & apsDatasource) { DARABONBA_PTR_SET_VALUE(apsDatasource_, apsDatasource) };
    inline DescribeApsDatasourceResponseBody& setApsDatasource(DescribeApsDatasourceResponseBodyApsDatasource && apsDatasource) { DARABONBA_PTR_SET_RVALUE(apsDatasource_, apsDatasource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsDatasourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried APS data source.
    std::shared_ptr<DescribeApsDatasourceResponseBodyApsDatasource> apsDatasource_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
